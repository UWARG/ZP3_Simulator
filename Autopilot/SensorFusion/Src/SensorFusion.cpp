/*
* Sensor Fusion Algorithms
* Madgwick is used for estimating attitude.
* A custom Kalmann filter is used along with the estimated attitude to estimate position.
* Author: Lucy Gong, Dhruv Rawat, Anthony Bertnyk
*/
#include "SensorFusion.hpp"
#include "MahonyAHRS.h"
#include "CControlFunctions.h"
#include "MahonyAHRS.cpp"
#include "inv.c"
#include "lup.c"
#include "mul.c"
#include "tran.c"
#include <cmath>
constexpr double ZP_PI = 3.14159265358979311599796346854;
constexpr double ZP_E = 2.71828182845904523536028747135;
#define DEG_TO_RAD(angleInDegrees) ((angleInDegrees) * ZP_PI / 180.0)
#define RAD_TO_DEG(angleInRadians) ((angleInRadians) * 180.0 / ZP_PI)
// #include "imu.hpp"
// #include "gps.hpp"
// #include "altimeter.hpp"
// #include "airspeed.hpp"
// #include "timeStampingPOGI.hpp"

#ifdef __cplusplus
extern "C"
{
#endif
    #include "CControlFunctions.h"
#ifdef __cplusplus
}
#endif

typedef struct {
    double roll, pitch, yaw; //rad
    double rollRate, pitchRate, yawRate; //rad/s
    double airspeed; //m/s
} SFAttitudeOutput_t ;

struct SFPathOutput_t{
    double altitude; //m
    double rateOfClimb; //m/s
    long double latitude; //Decimal degrees
    double latitudeSpeed; //m/s
    long double longitude; //Decimal degrees
    double longitudeSpeed; //m/s
};

const int NUM_KALMAN_VALUES = 6; 

struct SFIterationData_t{
    double prevX[NUM_KALMAN_VALUES];
    double prevP[NUM_KALMAN_VALUES*NUM_KALMAN_VALUES];
};


static SFIterationData_t iterData;
static SFOutput_t SFOutput;

//Values for accurate gps distance calculations
static double REF_LAT = 0;
static double REF_LONG = 0;
static bool gpsRefIsSet = false;
constexpr int EARTH_RAD = 6367449;
constexpr int LAT_DIST = 111133;

//Maximum covariance before a sensor value is discarded
const int HIGH_COVAR = 10000;

void SF_Init(void)
{
// #ifdef TARGET_BUILD

//     imuObj = &BMX160::getInstance();
//     gpsObj = NEOM8::GetInstance();
//     //Waiting for definitions
//     //altimeterObj = MS5637::GetInstance();
//     //airspeedObj = dummyairspeed::GetInstance();

// #elif defined(UNIT_TESTING)
//     imuObj = TestIMU::GetInstance();
//     gpsObj = TestGps::GetInstance();
//     altimeterObj = TestAltimeter::GetInstance();
//     airspeedObj = TestAirspeed::GetInstance();
// #endif

    //Set initial state to be unknown
    for(int i = 0; i < NUM_KALMAN_VALUES; i++) iterData.prevX[0] = 0;
    iterData.prevP[0] = 100000;
    iterData.prevP[1] = 0;
    iterData.prevP[2*NUM_KALMAN_VALUES+2] = 100000;
    iterData.prevP[3] = 0;
    iterData.prevP[4*NUM_KALMAN_VALUES+4] = 100000;
    iterData.prevP[5] = 0;
}

void localToGlobalAccel(double* IMU_accx, double* IMU_accy, double* IMU_accz, double *u)
{
    u[0] = *IMU_accy; //Vertical acceleration
    u[1] = *IMU_accx; //Latitudinal acceleration
    u[2] = *IMU_accz; //Longitudinal acceleration
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

double * cartesianToGPS(double x, double y){
    const double RAD_LAT = DEG_TO_RAD(REF_LAT);
    static double latLong[2] = {0};

    //Latitude
    latLong[0] = x / LAT_DIST + REF_LAT;

    //Longitude
    latLong[1] = y / (DEG_TO_RAD(EARTH_RAD*cos(RAD_LAT))) + REF_LONG;


    return latLong;
}

SFError_t SF_GetAttitude(SFAttitudeOutput_t *Output, double* IMU_accx, double* IMU_accy, double* IMU_accz,
                            double* IMU_magx, double* IMU_magy, double* IMU_magz,
                            double* IMU_gyrx, double* IMU_gyry, double* IMU_gyrz) {
    
    //Error output
    SFError_t SFError;

    SFError.errorCode = 0;

    //IMU integration outputs
    double imu_RollAngle = 0;
    double imu_PitchAngle = 0;
    double imu_YawAngle = 0;

    double imu_RollRate = 0;
    double imu_PitchRate = 0;
    double imu_YawRate = 0;
    
    //Airspeed checks are temporarily disabled until an airspeed driver is implemented

    //Abort if both sensors are busy or failed data collection
    // if(imudata->sensorStatus != SENSOR_SUCCESS ) // || airspeeddata->sensorStatus != 0)
    // {  

    //     /************************************************************************************************
    //      * THIS WILL PUT THE STATE MACHINE INTO FATAL FAILURE MODE... WE NEED TO DECIDE IF THIS IS WHAT
    //      * WE WANT OR IF WE SHOULD RETHINK HOW WE WANT THIS MODULE TO RETURN A SENSOR ERROR! 
    //      ************************************************************************************************/

    //     SFError.errorCode = -1;
    //     return SFError;
    // }

    //Check if data is old
    // if(!imudata->isDataNew){
    //     SFError.errorCode = 1;
    // }

    // Checks if magnetometer values are not a number (NAN) and converts them to zero if they are (ensures Madgwick does not break)
    // NOTE TO FUTURE DEVELOPERS: At the time of making, our IMU did not have a magnetometer (so for now we set the values to NAN). 
    // If your IMU does have one, you can remove this

    MahonyAHRSupdate(*IMU_gyrx, *IMU_gyry, *IMU_gyrz, *IMU_accx, *IMU_accy, *IMU_accz, *IMU_magx, *IMU_magy, *IMU_magz);

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

SFError_t SF_GetPosition(SFPathOutput_t *Output, double *altimeter_altitude, 
                        double* GPS_latitude, double* GPS_longitude, double* GPS_altitude, double* GPS_groundspeed, double* GPS_heading, 
                        double* IMU_accx, double* IMU_accy, double* IMU_accz,
                            double* IMU_magx, double* IMU_magy, double* IMU_magz,
                            double* IMU_gyrx, double* IMU_gyry, double* IMU_gyrz, SFAttitudeOutput_t *attitudedata,  SFIterationData_t *iterdata)
{
    //Error output
    SFError_t SFError;
    SFError.errorCode = 0;

    double freq = SF_FREQ;
    double dt = 1/freq;

    //Set currently unused sensors to zero
    altimeter_altitude = 0;
    IMU_accx = 0;
    IMU_accy = 0;
    IMU_accz = 0;

    //Define the covariance of sensors
    double baroCovar = HIGH_COVAR + 1;
    double gpsCovar;

    gpsCovar = 2;
    if(!gpsRefIsSet)
    {
        //Set a reference position to help convert between gps data formats.
        REF_LAT = *GPS_latitude;
        REF_LONG = *GPS_longitude;
        gpsRefIsSet = true;
    }

    /* Matrix Definitions */

    //Number of variables being estimated (dimension of the state vector x).
    const int16_t DIM = 6;

    //Maps x to itself, applying any physical relationships between variables.
    double f[DIM*DIM] =
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
    double u[U_DIM] =
    {
        0,
        0,
        0
    };
    localToGlobalAccel(IMU_accx, IMU_accy, IMU_accz, u);

    //Relationship between distance and acceleration
    double ddt = pow(dt,2)/2;

    //Maps u to x, incorporating acceleration into the estimate
    double b[DIM*U_DIM] =
    {
        ddt, 0,   0,
        dt,  0,   0,
        0,   ddt, 0,
        0,   dt,  0,
        0,   0,   ddt,
        0,   0,   dt
    };

    //Confidence in the physical relationship prediction performed using f
    double q[DIM*DIM]=
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
    double h[NUM_MEASUREMENTS*DIM] =
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

    double * xyPos = gpsToCartesian(*GPS_latitude, *GPS_longitude);

    //List of sensor measurements
    double z[NUM_MEASUREMENTS] =
    {
        *altimeter_altitude,
        (double) *GPS_altitude,
        xyPos[0], //Latitude
        xyPos[1], //Longitude
        0, //Vertical speed (Currently unused)
        *GPS_groundspeed * cos(DEG_TO_RAD(*GPS_heading)), //North speed
        *GPS_groundspeed * sin(DEG_TO_RAD(*GPS_heading)) //East speed
    };

    //Defines the confidence to have in each sensor variable
    double r[NUM_MEASUREMENTS*NUM_MEASUREMENTS]
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
    double x[DIM];

    double prevX[DIM];
    for (int i = 0; i < DIM; i++) prevX[i] = iterdata->prevX[i];

    //Stores confidence in accuracy of variables of x
    double p[DIM*DIM];

    double prevP[DIM*DIM];
    for (int i = 0; i < DIM*DIM; i++) 
    {
        prevP[i] = iterdata->prevP[i];
    }

    double fMultPrevX[DIM*1];
    mul(f, prevX, fMultPrevX, DIM, DIM, 1);

    double bMultU[DIM*1];
    mul(b, u, bMultU, DIM, U_DIM, 1);

    for (int i = 0; i < DIM*1; i++) x[i] = fMultPrevX[i] + bMultU[i];
    
    //Calculate error covariance: p = f*prevP*transpose(f) + q

    double fMultPrevP[DIM*DIM];
    mul(f, prevP, fMultPrevP, DIM, DIM, DIM);

    double transF[DIM*DIM];
    for (int i = 0; i < DIM*DIM; i++) transF[i] = f[i];
    tran(transF, DIM, DIM);

    double fMultPrevPMultTransF[DIM*DIM];
    mul(fMultPrevP, transF, fMultPrevPMultTransF, DIM, DIM, DIM);

    for (int i = 0; i < DIM*DIM; i++) p[i] = fMultPrevPMultTransF[i] + q[i];

    /* Measurement Update */

    //Calculate Kalman gain: k = p*transpose(h) * (h*p*transpose(h) + r)^-1

    double k[DIM*NUM_MEASUREMENTS];

    double transH[DIM*NUM_MEASUREMENTS];
    for (int i = 0; i < NUM_MEASUREMENTS*DIM; i++) transH[i] = h[i];
    tran(transH, NUM_MEASUREMENTS, DIM);

    double pMultTransH[DIM*NUM_MEASUREMENTS];
    mul(p, transH, pMultTransH, DIM, DIM, NUM_MEASUREMENTS);

    double hPMultTransH[NUM_MEASUREMENTS*NUM_MEASUREMENTS];
    mul(h, pMultTransH, hPMultTransH, NUM_MEASUREMENTS, DIM, NUM_MEASUREMENTS);

    double hPMultTransHPlusR[NUM_MEASUREMENTS*NUM_MEASUREMENTS];
    for (int i = 0; i < NUM_MEASUREMENTS*NUM_MEASUREMENTS; i++) hPMultTransHPlusR[i] = hPMultTransH[i] + r[i];

    double hPMultTransHPlusRInv[NUM_MEASUREMENTS*NUM_MEASUREMENTS];
    for (int i = 0; i < NUM_MEASUREMENTS*NUM_MEASUREMENTS; i++) hPMultTransHPlusRInv[i] = hPMultTransHPlusR[i];
    inv(hPMultTransHPlusRInv, NUM_MEASUREMENTS);

    mul(pMultTransH, hPMultTransHPlusRInv, k, DIM, NUM_MEASUREMENTS, NUM_MEASUREMENTS);

    //Update estimate: newX = x + k*(z - h*x)

    double hMultX[NUM_MEASUREMENTS*1];
    mul(h, x, hMultX, NUM_MEASUREMENTS, DIM, 1);

    double zMinHMultX[NUM_MEASUREMENTS*1];
    for (int i = 0; i < NUM_MEASUREMENTS*1; i++) zMinHMultX[i] = z[i] - hMultX[i];

    double kMultZMinHMultX[DIM*1];
    mul(k, zMinHMultX, kMultZMinHMultX, DIM, NUM_MEASUREMENTS, 1);

    double newX[DIM*1];
    for (int i = 0; i < DIM*1; i++) newX[i] = x[i] + kMultZMinHMultX[i];

    //Update error covariance: newP = (I - k*h)*p

    //The identity matrix
    double I[DIM*DIM] =
    {
        1, 0, 0, 0, 0, 0,
        0, 1, 0, 0, 0, 0,
        0, 0, 1, 0, 0, 0,
        0, 0, 0, 1, 0, 0,
        0, 0, 0, 0, 1, 0,
        0, 0, 0, 0, 0, 1
    };

    double kMultH[DIM*DIM];
    mul(k, h, kMultH, DIM, NUM_MEASUREMENTS, DIM);

    double IMinKMultH[DIM*DIM];
    for (int i = 0; i < DIM*DIM; i++) IMinKMultH[i] = I[i] - kMultH[i];

    double newP[DIM*DIM];
    mul(IMinKMultH, p, newP, DIM, DIM, DIM);


    /*Output*/

    double * latLongOut = cartesianToGPS(x[2], x[4]);

    Output->altitude = x[0];
    Output->rateOfClimb = x[1];
    Output->latitude = latLongOut[0];
    Output->latitudeSpeed = x[3];
    Output->longitude = latLongOut[1];
    Output->longitudeSpeed = x[5];

    for (int i = 0; i < DIM*1; i++) iterdata->prevX[i] = newX[i];
    for (int i = 0; i < DIM*DIM; i++) iterdata->prevP[i] = newP[i];

    return SFError;
}

SFError_t SF_GenerateNewResult(double *altimeter_altitude, 
                        double* GPS_latitude, double* GPS_longitude, double* GPS_altitude, double* GPS_groundspeed, double* GPS_heading, 
                        double* IMU_accx, double* IMU_accy, double* IMU_accz,
                            double* IMU_magx, double* IMU_magy, double* IMU_magz,
                            double* IMU_gyrx, double* IMU_gyry, double* IMU_gyrz)
{
    SFError_t SFError;
    SFError.errorCode = 0;


    //Send gps timestamp
    // #ifndef UNIT_TESTING
    // //TimeStampingPOGI *timeStamper = TimeStampingPOGI::GetInstance();

    // if(GpsData.ggaDataIsNew)
    // {
    //     timeStamper->setGPSTime(&GpsData);
    // }
    // #endif

    SFAttitudeOutput_t attitudeOutput;
    SFPathOutput_t pathOutput;

    SFError = SF_GetAttitude(&attitudeOutput,IMU_accx,IMU_accy,IMU_accz,IMU_magx,IMU_magy,IMU_magz,IMU_gyrx,IMU_gyry,IMU_gyrz);
    if(SFError.errorCode != 0) return SFError;

    SFError = SF_GetPosition(&pathOutput, altimeter_altitude, GPS_latitude, GPS_longitude, GPS_altitude, GPS_groundspeed, GPS_heading,
                            IMU_accx, IMU_accy, IMU_accz, IMU_magx, IMU_magy, IMU_magz, IMU_gyrx, IMU_gyry, IMU_gyrz, &attitudeOutput, &iterData);
    if(SFError.errorCode != 0) return SFError;

    SFOutput.pitch = attitudeOutput.pitch;
    SFOutput.roll = attitudeOutput.roll;
    SFOutput.yaw = attitudeOutput.yaw;
    SFOutput.altitude = pathOutput.altitude;
    SFOutput.rateOfClimb = pathOutput.rateOfClimb;
    SFOutput.latitude = pathOutput.latitude;
    SFOutput.latitudeSpeed = pathOutput.latitudeSpeed;
    SFOutput.longitude = pathOutput.longitude;
    SFOutput.longitudeSpeed = pathOutput.longitudeSpeed;

    return SFError;
}

SFError_t SF_GetResult(SFOutput_t *output)
{
    SFError_t SFError;
    SFError.errorCode = 0;

    *output = SFOutput;

    return SFError;
}

// IMU_Data_t SF_GetRawIMU()
// {
//     IMUData_t imuData;
//     imuObj->GetResult(imuData);
    
//     IMU_Data_t imuOutput;

//     std:memcpy(&imuOutput, &imuData, sizeof(IMU_Data_t));

//     return imuOutput;
// }

// Airspeed_Data_t SF_GetRawAirspeed()
// {
//     airspeedData_t airspeedData;
//     airspeedObj->GetResult(airspeedData);

//     Airspeed_Data_t airspeedOutput;

//     std:memcpy(&airspeedOutput, &airspeedData, sizeof(Airspeed_Data_t));

//     return airspeedOutput;
// }

// Gps_Data_t SF_GetRawGPS()
// {
//     GpsData_t gpsData;
//     gpsObj->GetResult(gpsData);

//     Gps_Data_t gpsOutput;

//     std:memcpy(&gpsOutput, &gpsData, sizeof(Gps_Data_t));

//     return gpsOutput;
// }

// Altimeter_Data_t SF_GetRawAltimeter()
// {
//     AltimeterData_t altimeterData;
//     altimeterObj->GetResult(altimeterData);

//     Altimeter_Data_t altimeterOutput;

//     std:memcpy(&altimeterOutput, &altimeterData, sizeof(Altimeter_Data_t));

//     return altimeterOutput;
// }
