/**
 * Sensor Fusion - Converts raw sensor data into human readable formatted structs
 * Author: Lucy Gong, Dhruv Rawat, Anthony Bertnyk
 */

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

#ifndef SENSORFUSION_HPP
#define SENSORFUSION_HPP

#define ZP3_SIMULATOR

#include "common_data_types.hpp"

#define NUM_KALMAN_VALUES 6
//Frequency of SF calculations in Hz
const int SF_FREQ = 200;

// iter data struct
struct SFIterationData_t{
    float prevX[NUM_KALMAN_VALUES];
    float prevP[NUM_KALMAN_VALUES*NUM_KALMAN_VALUES];
};

// -1 = FAILED
// 0 = SUCCESS
// 1 = Old Data
typedef struct {
    int errorCode;
} SFError_t;

typedef struct {
    float roll, pitch, yaw; //rad
    float rollRate, pitchRate, yawRate; //rad/s
    float airspeed; //m/s
    float altitude; //m
    float rateOfClimb; //m/s
    float latitude; //Decimal degrees
    float latitudeSpeed; //m/s
    float longitude; //Decimal degrees
    float longitudeSpeed; //m/s
    float track; // degrees
    float heading; //degrees
} SFOutput_t;

//Following structs store the raw sensor data so other modules can have direct access to them without including sensor header files
typedef struct
{
    float magx, magy, magz;
    float accx, accy, accz;
    float gyrx, gyry, gyrz; 
    float temp;
    
    bool isDataNew; 
    enum SensorErrorCodes_e sensorStatus; 
    float utcTime; 
} IMU_Data_t;

typedef struct 
{
    double airspeed;        

    enum SensorErrorCodes_e sensorStatus;       
    bool isDataNew;         
    float utcTime;          
} Airspeed_Data_t;

typedef struct
{
    float latitude;  // 8 Bytes
    float longitude; // 8 Bytes
    float utcTime;     // 4 Bytes. Time in seconds since 00:00 (midnight)
    float groundSpeed; // in m/s
    int altitude; // in m
    int heading; // in degrees. Should be between 0-360 at all times, but using integer just in case
    int numSatellites;    // 1 Byte
    int fixStatus; //0 = No GPS, 1 = GPS fix, 2 = DGSP Fix, 3 = Estimated/Dead Recoking Fix

    enum SensorErrorCodes_e sensorStatus; // 0 = no fix, 1 = gps fix, 2 = differential gps fix (DGPS) (other codes are possible)
    bool dataIsNew; // true if data has been refreshed since the previous time GetResult was called, false otherwise.
	bool timeIsNew;

    //Added these so autopilot knows which data is new
    bool ggaDataIsNew; //Position, altitude, time, and number of satellites
    bool vtgDataIsNew; //Groundspeed and Heading
}  Gps_Data_t;

typedef struct  {

    float pressure, altitude, temp;

    bool isDataNew; 
    enum SensorErrorCodes_e status; //TBD but probably 0 = SUCCESS, -1 = FAIL, 1 = BUSY 
    int utcTime; //Last time GetResult was called
} Altimeter_Data_t;


/**
 * Initialize sensor fusion.
 */ 
SFError_t SF_Init();

/**
 * Generates fused sensor data. Should be called at a constant rate defined by SF_FREQ after SF_Init has been called once.
 */ 
SFError_t SF_GenerateNewResult(
    #ifdef ZP3_SIMULATOR
    IMU_Data_t* imuData,
    Gps_Data_t* GpsData,
    Altimeter_Data_t* altimeterData,
    SFOutput_t *SFoutput
    #endif
);

/**
 * Get latest fused sensor data. Can be called any time data is needed after SF_init has been called once. Waits until the output struct is not being accessed by another task.
 * @param [out] output Output struct for fused data.
 * @return Error struct.
 */ 
// SFError_t SF_GetResult(SFOutput_t *SFoutput);

/**
 * Get raw IMU data. Can be called any time raw data is needed.
 * @return IMU struct.
 */ 
IMU_Data_t SF_GetRawIMU();

/**
 * Get raw Airspeed data. Can be called any time raw data is needed.
 * @return Airspeed struct.
 */ 
Airspeed_Data_t SF_GetRawAirspeed();

/**
 * Get raw GPS data. Can be called any time raw data is needed.
 * @return GPS struct.
 */ Gps_Data_t SF_GetRawGPS();

/**
 * Get raw Altimeter data. Can be called any time raw data is needed.
 * @return Altimeter struct.
 */ 
 Altimeter_Data_t SF_GetRawAltimeter();

#endif
