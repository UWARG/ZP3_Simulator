/*
* Sensor Fusion Algorithms
* Madgwick is used for estimating attitude.
* A custom Kalmann filter is used along with the estimated attitude to estimate position.
* Author: Lucy Gong, Dhruv Rawat, Anthony Bertnyk
*/
#include "sensor_fusion.hpp"
#include "manhony_ahrs.h"
#include <cmath>
#include "math_constants.hpp"

#define ZP3_SIMULATOR
#define SF_MILESTONE3
#define SF_MILESTONE4

#include "sf_config.h"

#ifndef ZP3_SIMULATOR
#include "FreeRTOS.h"
#include "semphr.h"

#ifdef   SF_MILESTONE3
#include "imu.hpp"
#endif

#ifdef   SF_MILESTONE4
#include "gps.hpp"
#include "altimeter.hpp"
#include "airspeed.hpp"
#include "timeStampingPOGI.hpp"
#endif

#endif

const double ZP_PI = 3.14159265358979311599796346854;

const double ZP_E = 2.71828182845904523536028747135;

#define DEG_TO_RAD(angleInDegrees) ((angleInDegrees) * ZP_PI / 180.0)

#define RAD_TO_DEG(angleInRadians) ((angleInRadians) * 180.0 / ZP_PI)



// #define __cplusplus
// #ifdef __cplusplus
// extern "C"
// {
// #endif
//     #include "ccontrol_functions.h"
// #ifdef __cplusplus
// }
// #endif
#include "ccontrol_functions.h"

typedef struct {
    float roll, pitch, yaw; //rad
    float rollRate, pitchRate, yawRate; //rad/s
    float airspeed; //m/s
} SFAttitudeOutput_t ;

struct SFPathOutput_t{
    float altitude; //m
    float rateOfClimb; //m/s
    long double latitude; //Decimal degrees
    float latitudeSpeed; //m/s
    long double longitude; //Decimal degrees
    float longitudeSpeed; //m/s
};

void mul(float* A, float* B, float* C, int row_a, int column_a, int column_b) {

	// Data matrix
	float* data_a;
	float* data_b;

	for (int i = 0; i < row_a; i++) {
		// Then we go through every column of b
		for (int j = 0; j < column_b; j++) {
			data_a = &A[i * column_a];
			data_b = &B[j];

			*C = 0; // Reset
			// And we multiply rows from a with columns of b
			for (int k = 0; k < column_a; k++) {
				*C += *data_a * *data_b;
				data_a++;
				data_b += column_b;
			}
			C++; // ;)
		}
	}
}

void tran(float* A, int row, int column) {

	float *B = (float*)malloc(row * column * sizeof(float));
	float* transpose;
	float* ptr_A = A;

	for (int i = 0; i < row; i++) {
		transpose = &B[i];
		for (int j = 0; j < column; j++) {
			*transpose = *ptr_A;
			ptr_A++;
			transpose += row;
		}
	}

	// Copy!
	memcpy(A, B, row*column*sizeof(float));
}

uint8_t lup(float *A, float *LU, int *P, int row) {

	// If not the same
	if (A != LU) memcpy(LU, A, row*row*sizeof(float));

	// Create the pivot vector
	for (int i = 0; i < row; ++i)
		*(P + i) = i;

	for (int i = 0; i < row - 1; ++i) {
		int ind_max, tmp_int;

		ind_max = i;
		for (int j = i + 1; j < row; ++j)
			if (fabsf(*(LU + row * *(P + j) + i)) > fabsf(*(LU + row * *(P + ind_max) + i)))
				ind_max = j;

		tmp_int = *(P + i);
		*(P + i) = P[ind_max];
		*(P + ind_max) = tmp_int;

		if (fabsf(*(LU + row * *(P + i) + i)) < FLT_EPSILON)
			return 0; // matrix is singular (up to tolerance)

		for (int j = i + 1; j < row; ++j) {
			*(LU + row * *(P + j) + i) = *(LU + row * *(P + j) + i) / *(LU + row * *(P + i) + i);

			for (int k = i + 1; k < row; ++k)
				*(LU + row * *(P + j) + k) = *(LU + row * *(P + j) + k) - *(LU + row * *(P + i) + k) * *(LU + row * *(P + j) + i);
		}
	}

	return 1; // Solved
}

static void solve(float* A, float* x, float* b, int* P, float* LU, uint16_t row);

int inv(float *A, int row) {

	// Create iA matrix
	float *iA = (float*)malloc(row * row * sizeof(float));

	// Create temporary matrix and variable
	float *tmpvec = (float*)malloc(row * sizeof(float));
	memset(tmpvec, 0, row * sizeof(float));
	int status = 0;

	// Check if the determinant is 0
	float *LU = (float*)malloc(row*row*sizeof(float));
	int *P = (int*)malloc(row * sizeof(int));
	status = lup(A, LU, P, row);
	if(status == -1)
		return -1; // matrix is singular. Determinant 0
	// Create the inverse
	for (int i = 0; i < row; ++i) {
		tmpvec[i] = 1.0;
		solve(A, &iA[row * i], tmpvec, P, LU, row);
		tmpvec[i] = 0.0;
	}

	// Transpose of iA
	tran(iA, row, row);

	// Copy over iA -> A
	memcpy(A, iA, row * row * sizeof(float));

	return status;
}


static void solve(float* A, float* x, float* b, int* P, float* LU, uint16_t row){
	// forward substitution with pivoting
	for (uint16_t i = 0; i < row; ++i) {
		*(x + i) = *(b + *(P + i));

		for (uint16_t j = 0; j < i; ++j)
			*(x + i) = *(x + i) - *(LU + row * *(P + i) + j) * *(x + j);
	}

	// backward substitution with pivoting
	for (int16_t i = row - 1; i >= 0; --i) {
		for (int16_t j = i + 1; j < row; ++j)
			*(x + i) = *(x + i) - *(LU + row * *(P + i) + j) * *(x + j);

		*(x + i) = *(x + i) / *(LU + row * *(P + i) + i);
	}
}



// Globals
#ifndef ZP3_SIMULATOR
static SemaphoreHandle_t SF_mutex;

#ifdef SF_MILESTONE3
static IMU *imuObj;
#endif

#ifdef  SF_MILESTONE4
static Gps *gpsObj;
static Altimeter *altimeterObj;
static airspeed *airspeedObj;
#endif

#endif


//Values for accurate gps distance calculations
static double REF_LAT = 0;
static double REF_LONG = 0;
static bool gpsRefIsSet = false;
constexpr int EARTH_RAD = 6367449;
constexpr int LAT_DIST = 111133;

//Maximum covariance before a sensor value is discarded
const int HIGH_COVAR = 10000;

// Global variables
SFError_t SFError;
int count = 0;
SFIterationData_t iterData;

SFError_t SF_Init()
{
    count ++;
    //  SFError_t SFError // believe this should be global
    SFError.errorCode = 0;
    
    #ifndef ZP3_SIMULATOR

	SF_mutex = xSemaphoreCreateMutex();
    if (SF_mutex == NULL){
        SFError.errorCode = -1;
        return SFError;
    }    
    #ifdef SF_MILESTONE3
        imuObj = &BMX160::getInstance();
	#elif SF_MILESTONE4
        imuObj = &BMX160::getInstance();
        gpsObj = NEOM8::GetInstance();
        altimeterObj = MS5637::GetInstance();
        airspeedObj = dummyairspeed::GetInstance();
    #elif defined(UNIT_TESTING)
        imuObj = TestIMU::GetInstance();
        gpsObj = TestGps::GetInstance();
        altimeterObj = TestAltimeter::GetInstance();
        airspeedObj = TestAirspeed::GetInstance();
    #endif
    #endif
    #ifdef  SF_MILESTONE4
        //Set initial state to be unknown
        for(int i = 0; i < NUM_KALMAN_VALUES; i++) iterData.prevX[0] = (float)0;
        iterData.prevP[0] = (float)100000;
        iterData.prevP[1] = (float)0;
        iterData.prevP[2*NUM_KALMAN_VALUES+2] = (float)100000;
        iterData.prevP[3] = (float)0;
        iterData.prevP[4*NUM_KALMAN_VALUES+4] = (float)100000;
        iterData.prevP[5] = (float)0;
    #endif 

    

    return SFError;
}

#ifdef SF_MILESTONE3
void localToGlobalAccel(IMU_Data_t *imudata, float *u)
{
    u[0] = imudata->accy; //Vertical acceleration
    u[1] = imudata->accx; //Latitudinal acceleration
    u[2] = imudata->accz; //Longitudinal acceleration
}

//Map gps position to xy coords using the reference location as the origin.
//wikipedia.org/wiki/Geographic_coordinate_system
double * gpsToCartesian(double lat, double lng){
    const double RAD_LAT = DEG_TO_RAD(REF_LAT);
    static double xy[2] = {0};

    //Latitude
    xy[0] = (lat - REF_LAT) * LAT_DIST;

    //Longitude
    xy[1] = (lng - REF_LONG) * DEG_TO_RAD(EARTH_RAD*cos(RAD_LAT));


    return xy;
}


SFError_t SF_GetAttitude(SFAttitudeOutput_t *Output, IMU_Data_t *imudata) {
    
    //Error output
    SFError_t SFError;

    SFError.errorCode = 0;

    float imu_RollAngle = 0;
    float imu_PitchAngle = 0;
    float imu_YawAngle = 0;

    float imu_RollRate = 0;
    float imu_PitchRate = 0;
    float imu_YawRate = 0;
    
    //Airspeed checks are temporarily disabled until an airspeed driver is implemented

    //Abort if both sensors are busy or failed data collection
    if(imudata->sensorStatus != SENSOR_SUCCESS ) // || airspeeddata->sensorStatus != 0)
    {  

        /************************************************************************************************
         * THIS WILL PUT THE STATE MACHINE INTO FATAL FAILURE MODE... WE NEED TO DECIDE IF THIS IS WHAT
         * WE WANT OR IF WE SHOULD RETHINK HOW WE WANT THIS MODULE TO RETURN A SENSOR ERROR! 
         ************************************************************************************************/

        SFError.errorCode = -1;
        return SFError;
    }

    //Check if data is old
    if(!imudata->isDataNew){
        SFError.errorCode = 1;
    }

    // Checks if magnetometer values are not a number (NAN) and converts them to zero if they are (ensures Madgwick does not break)
    // NOTE TO FUTURE DEVELOPERS: At the time of making, our IMU did not have a magnetometer (so for now we set the values to NAN). 
    // If your IMU does have one, you can remove this
    if (std::isnan(imudata->magx)) {
        imudata->magx = 0.0f;
    }
    if (std::isnan(imudata->magy)) {
        imudata->magy = 0.0f;
    }
    if (std::isnan(imudata->magz)) {
        imudata->magz = 0.0f;
    }

    MahonyAHRSupdate(imudata->gyrx, imudata->gyry, imudata->gyrz, imudata->accx, imudata->accy, imudata->accz, imudata->magx, imudata->magy, imudata->magz);

    //Convert quaternion output to angles (in deg)
    imu_RollAngle = atan2f(q0 * q1 + q2 * q3, 0.5f - q1 * q1 - q2 * q2) * 57.29578f;
    imu_PitchAngle = asinf(-2.0f * (q1 * q3 - q0 * q2)) * 57.29578f;
    imu_YawAngle = atan2f(q1 * q2 + q0 * q3, 0.5f - q2 * q2 - q3 * q3) * 57.29578f + 180.0f;

    //Convert rate of change of quaternion to angular velocity (in deg/s) 
    //imu_RollRate = atan2f(qDot1 * qDot2 + qDot3 * qDot4, 0.5f - qDot2 * qDot2 - qDot3 * qDot3) * 57.29578f;
    //imu_PitchRate = asinf(-2.0f * (qDot2 * qDot4 - qDot1 * qDot3)) * 57.29578f;
    //imu_YawRate = atan2f(qDot2 * qDot3 + qDot1 * qDot4, 0.5f - qDot3 * qDot3 - qDot4 * qDot4) * 57.29578f + 180.0f;

    //Transfer Fused IMU data into SF Output struct
    Output->pitch = imu_PitchAngle;
    Output->roll = imu_RollAngle;
    Output->yaw = imu_YawAngle;

    Output->pitchRate = imu_PitchRate;
    Output->rollRate = imu_RollRate;
    Output->yawRate = imu_YawRate;

    return SFError;
}
#endif

double * cartesianToGPS(double x, double y){
    const double RAD_LAT = DEG_TO_RAD(REF_LAT);
    static double latLong[2] = {0};

    //Latitude
    latLong[0] = x / LAT_DIST + REF_LAT;

    //Longitude
    latLong[1] = y / (DEG_TO_RAD(EARTH_RAD*cos(RAD_LAT))) + REF_LONG;


    return latLong;
}

#ifdef   SF_MILESTONE4
SFError_t SF_GetPosition(SFPathOutput_t *Output, Altimeter_Data_t *altimeterdata, Gps_Data_t *gpsdata, IMU_Data_t *imudata, SFAttitudeOutput_t *attitudedata)
{
    //Error output
    SFError_t SFError;
    SFError.errorCode = 0;

    float freq = SF_FREQ;
    float dt = 1/freq;

    //Set currently unused sensors to zero
    // altimeterdata->altitude = 0;
    // imudata->accx = 0;
    // imudata->accy = 0;
    // imudata->accz = 0;

    //Define the covariance of sensors
    float baroCovar = HIGH_COVAR + 1;
    float gpsCovar;
    if(gpsdata->dataIsNew && gpsdata->numSatellites >= 3)
    {
        gpsCovar = 2;
        if(!gpsRefIsSet)
        {
            //Set a reference position to help convert between gps data formats.
            REF_LAT = gpsdata->latitude;
            REF_LONG = gpsdata->longitude;
            gpsRefIsSet = true;
        }
    }
    else
    {
        gpsCovar = HIGH_COVAR + 1;
    }

    /* Matrix Definitions */

    //Number of variables being estimated (dimension of the state vector x).
    const int16_t DIM = 6;

    //Maps x to itself, applying any physical relationships between variables.
    float f[DIM*DIM] =
    {
        1, dt, 0, 0,  0, 0,
        0, 1,  0, 0,  0, 0,
        0, 0,  1, dt, 0, 0,
        0, 0,  0, 1,  0, 0,
        0, 0,  0, 0,  1, dt,
        0, 0,  0, 0,  0, 1
    };
    
    const int16_t U_DIM = 3;

    //Measured XYZ acceleration
    float u[U_DIM] =
    {
        0,
        0,
        0
    };
    localToGlobalAccel(imudata, u);

    //Relationship between distance and acceleration
    float ddt = pow(dt,2)/2;

    //Maps u to x, incorporating acceleration into the estimate
    float b[DIM*U_DIM] =
    {
        ddt, 0,   0,
        dt,  0,   0,
        0,   ddt, 0,
        0,   dt,  0,
        0,   0,   ddt,
        0,   0,   dt
    };

    //Confidence in the physical relationship prediction performed using f
    float q[DIM*DIM]=
    {
        5.0, 0,   0,   0,   0,   0,
        0,   5.0, 0,   0,   0,   0,
        0,   0,   5.0, 0,   0,   0,
        0,   0,   0,   5.0, 0,   0,
        0,   0,   0,   0,   5.0, 0,
        0,   0,   0,   0,   0,   5.0
    };

    const int16_t NUM_MEASUREMENTS = 7;

    //Maps sensor data from z to x
    float h[NUM_MEASUREMENTS*DIM] =
    {
        1, 0, 0, 0, 0, 0,
        1, 0, 0, 0, 0, 0,
        0, 0, 1, 0, 0, 0,
        0, 0, 0, 0, 1, 0,
        0, 1, 0, 0, 0, 0,
        0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 0, 1
    };
    //Force sensors to be completely ignored when the covariance is high
    if(baroCovar >= HIGH_COVAR){
        h[0] = 0;
    }
    if(gpsCovar >= HIGH_COVAR)
    {
        h[DIM] = 0;
        h[2*DIM+2] = 0;
        h[3*DIM+4] = 0;
        h[4*DIM+1] = 0;
        h[5*DIM+3] = 0;
        h[6*DIM+5] = 0;
    }

    double * xyPos = gpsToCartesian(gpsdata->latitude, gpsdata->longitude);

    //List of sensor measurements
    float z[NUM_MEASUREMENTS] =
    {
        altimeterdata->altitude,
        (float) gpsdata->altitude,
        xyPos[0], //Latitude
        xyPos[1], //Longitude
        0, //Vertical speed (Currently unused)
        gpsdata->groundSpeed * cos(DEG_TO_RAD(gpsdata->heading)), //North speed
        gpsdata->groundSpeed * sin(DEG_TO_RAD(gpsdata->heading)) //East speed
    };

    //Defines the confidence to have in each sensor variable
    float r[NUM_MEASUREMENTS*NUM_MEASUREMENTS]
    {
        baroCovar, 0,               0,              0,              0,          0,         0,  
        0,         gpsCovar*100,    0,              0,              0,          0,         0,
        0,         0,               gpsCovar*100,   0,              0,          0,         0,
        0,         0,               0,              gpsCovar*100,   0,          0,         0,
        0,         0,               0,              0,              HIGH_COVAR, 0,         0,
        0,         0,               0,              0,              0,          gpsCovar,  0,
        0,         0,               0,              0,              0,          0,         gpsCovar
    };


    /* Kalman Filter Inner Workings */

    /* Time Update */

    //Calculate estimate: x = f*prevX + b*u
    
    //List of variables being tracked and estimated
    float x[DIM];

    float prevX[DIM];
    for (int i = 0; i < DIM; i++) prevX[i] = iterData.prevX[i];

    //Stores confidence in accuracy of variables of x
    float p[DIM*DIM];

    float prevP[DIM*DIM];
    for (int i = 0; i < DIM*DIM; i++) 
    {
        prevP[i] = iterData.prevP[i];
    }

    float fMultPrevX[DIM*1];
    mul(f, prevX, fMultPrevX, DIM, DIM, 1);

    float bMultU[DIM*1];
    mul(b, u, bMultU, DIM, U_DIM, 1);

    for (int i = 0; i < DIM*1; i++) x[i] = fMultPrevX[i] + bMultU[i];
    
    //Calculate error covariance: p = f*prevP*transpose(f) + q

    float fMultPrevP[DIM*DIM];
    mul(f, prevP, fMultPrevP, DIM, DIM, DIM);

    float transF[DIM*DIM];
    for (int i = 0; i < DIM*DIM; i++) transF[i] = f[i];
    tran(transF, DIM, DIM);

    float fMultPrevPMultTransF[DIM*DIM];
    mul(fMultPrevP, transF, fMultPrevPMultTransF, DIM, DIM, DIM);

    for (int i = 0; i < DIM*DIM; i++) p[i] = fMultPrevPMultTransF[i] + q[i];

    /* Measurement Update */

    //Calculate Kalman gain: k = p*transpose(h) * (h*p*transpose(h) + r)^-1

    float k[DIM*NUM_MEASUREMENTS];

    float transH[DIM*NUM_MEASUREMENTS];
    for (int i = 0; i < NUM_MEASUREMENTS*DIM; i++) transH[i] = h[i];
    tran(transH, NUM_MEASUREMENTS, DIM);

    float pMultTransH[DIM*NUM_MEASUREMENTS];
    mul(p, transH, pMultTransH, DIM, DIM, NUM_MEASUREMENTS);

    float hPMultTransH[NUM_MEASUREMENTS*NUM_MEASUREMENTS];
    mul(h, pMultTransH, hPMultTransH, NUM_MEASUREMENTS, DIM, NUM_MEASUREMENTS);

    float hPMultTransHPlusR[NUM_MEASUREMENTS*NUM_MEASUREMENTS];
    for (int i = 0; i < NUM_MEASUREMENTS*NUM_MEASUREMENTS; i++) hPMultTransHPlusR[i] = hPMultTransH[i] + r[i];

    float hPMultTransHPlusRInv[NUM_MEASUREMENTS*NUM_MEASUREMENTS];
    for (int i = 0; i < NUM_MEASUREMENTS*NUM_MEASUREMENTS; i++) hPMultTransHPlusRInv[i] = hPMultTransHPlusR[i];
    inv(hPMultTransHPlusRInv, NUM_MEASUREMENTS);

    mul(pMultTransH, hPMultTransHPlusRInv, k, DIM, NUM_MEASUREMENTS, NUM_MEASUREMENTS);

    //Update estimate: newX = x + k*(z - h*x)

    float hMultX[NUM_MEASUREMENTS*1];
    mul(h, x, hMultX, NUM_MEASUREMENTS, DIM, 1);

    float zMinHMultX[NUM_MEASUREMENTS*1];
    for (int i = 0; i < NUM_MEASUREMENTS*1; i++) zMinHMultX[i] = z[i] - hMultX[i];

    float kMultZMinHMultX[DIM*1];
    mul(k, zMinHMultX, kMultZMinHMultX, DIM, NUM_MEASUREMENTS, 1);

    float newX[DIM*1];
    for (int i = 0; i < DIM*1; i++) newX[i] = x[i] + kMultZMinHMultX[i];

    //Update error covariance: newP = (I - k*h)*p

    //The identity matrix
    float I[DIM*DIM] =
    {
        1, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0,
        0, 0, 1, 0, 0, 0,
        0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 1
    };

    float kMultH[DIM*DIM];
    mul(k, h, kMultH, DIM, NUM_MEASUREMENTS, DIM);

    float IMinKMultH[DIM*DIM];
    for (int i = 0; i < DIM*DIM; i++) IMinKMultH[i] = I[i] - kMultH[i];

    float newP[DIM*DIM];
    mul(IMinKMultH, p, newP, DIM, DIM, DIM);


    /*Output*/

    double * latLongOut = cartesianToGPS(x[2], x[4]);

    Output->altitude = x[0];
    Output->rateOfClimb = x[1];
    Output->latitude = latLongOut[0];
    Output->latitudeSpeed = x[3];
    Output->longitude = latLongOut[1];
    Output->longitudeSpeed = x[5];

    for (int i = 0; i < DIM*1; i++) iterData.prevX[i] = (float)newX[i];
    for (int i = 0; i < DIM*DIM; i++) iterData.prevP[i] = (float)newP[i];

    return SFError;
}
#endif


SFError_t SF_GenerateNewResult(
    #ifdef ZP3_SIMULATOR
    IMU_Data_t* imuData,
    Gps_Data_t* GpsData,
    Altimeter_Data_t* altimeterData,
    SFOutput_t *SFOutput
    #endif
    )
{
    if (count == 0)
    {
        SF_Init();
        count ++;
    }
    
    SFError_t SFError;
    SFError.errorCode = 0;
    SFAttitudeOutput_t attitudeOutput;
    memset(&attitudeOutput, 0, sizeof(attitudeOutput));
    SFPathOutput_t pathOutput;
    memset(&pathOutput, 0, sizeof(pathOutput));
#ifdef   SF_MILESTONE3

    #ifndef ZP3_SIMULATOR
    imuObj->GetResult(imuData);
    #ifdef  SF_MILESTONE4
        GpsData_t GpsData;
        AltimeterData_t altimeterData;
        airspeedData_t airspeedData;
        gpsObj->GetResult(GpsData);
        altimeterObj->GetResult(altimeterData);
        airspeedObj->GetResult(airspeedData);

        //Send gps timestamp
        #ifndef UNIT_TESTING
        TimeStampingPOGI *timeStamper = TimeStampingPOGI::GetInstance();

        if(GpsData.ggaDataIsNew)
        {
            timeStamper->setGPSTime(&GpsData);
        }
        #endif
    #endif
    #endif

    SFError = SF_GetAttitude(&attitudeOutput, imuData);
    if(SFError.errorCode != 0) return SFError;

    #ifdef  SF_MILESTONE4
        SFError = SF_GetPosition(&pathOutput, altimeterData, GpsData, imuData, &attitudeOutput);
        if(SFError.errorCode != 0) return SFError;
    #endif
#endif

    #ifndef ZP3_SIMULATOR
    xSemaphoreTake(SF_mutex, portMAX_DELAY);
    #endif ZP3_SIMULATOR
    SFOutput->pitch = (float)attitudeOutput.pitch;
    SFOutput->roll = (float)attitudeOutput.roll;
    SFOutput->yaw = (float)attitudeOutput.yaw;
    SFOutput->altitude = (float)pathOutput.altitude;
    SFOutput->rateOfClimb = (float)pathOutput.rateOfClimb;
    SFOutput->latitude = (float)pathOutput.latitude;
    SFOutput->latitudeSpeed = (float)pathOutput.latitudeSpeed;
    SFOutput->longitude = (float)pathOutput.longitude;
    SFOutput->longitudeSpeed = (float)pathOutput.longitudeSpeed;
    #ifndef ZP3_SIMULATOR
    xSemaphoreGive(SF_mutex);
    #endif ZP3_SIMULATOR

    return SFError;
}

// SFError_t SF_GetResult(SFOutput_t* output)
// {
//     SFError_t SFError;

//     //TODO: This function always return success as return, fix it?
//     SFError.errorCode = 0;

//     #ifndef ZP3_SIMULATOR
//     xSemaphoreTake(SF_mutex, portMAX_DELAY);
//     #endif ZP3_SIMULATOR
    
//     *output = SFOutput;

//     #ifndef ZP3_SIMULATOR
//     xSemaphoreGive(SF_mutex);
//     #endif ZP3_SIMULATOR

//     return SFError;
// }

#ifndef ZP3_SIMULATOR
#ifdef   SF_MILESTONE3
IMU_Data_t SF_GetRawIMU()
{
    IMU_Data_t imuData;
    imuObj->GetResult(imuData);
    
    IMU_Data_t imuOutput;

    std:memcpy(&imuOutput, &imuData, sizeof(IMU_Data_t));

    return imuOutput;
}
#endif

#ifdef  SF_MILESTONE4
Airspeed_Data_t SF_GetRawAirspeed()
{
    Airspeed_Data_t airspeedData;
    airspeedObj->GetResult(airspeedData);

    Airspeed_Data_t airspeedOutput;

    std:memcpy(&airspeedOutput, &airspeedData, sizeof(Airspeed_Data_t));

    return airspeedOutput;
}

Gps_Data_t SF_GetRawGPS()
{
    GpsData_t gpsData;
    gpsObj->GetResult(gpsData);

    Gps_Data_t gpsOutput;

    std:memcpy(&gpsOutput, &gpsData, sizeof(Gps_Data_t));

    return gpsOutput;
}

Altimeter_Data_t SF_GetRawAltimeter()
{
    AltimeterData_t altimeterData;
    altimeterObj->GetResult(altimeterData);

    Altimeter_Data_t altimeterOutput;

    std:memcpy(&altimeterOutput, &altimeterData, sizeof(Altimeter_Data_t));

    return altimeterOutput;
}
#endif
#endif
