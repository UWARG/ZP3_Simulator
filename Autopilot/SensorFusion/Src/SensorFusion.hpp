/**
 * Sensor Fusion - Converts raw sensor data into human readable formatted structs
 * Author: Lucy Gong, Dhruv Rawat, Anthony Bertnyk
 */
#ifdef __cplusplus
extern "C"
{
#endif
    #include "CControlFunctions.h"
#ifdef __cplusplus
}
#endif

#ifndef SENSORFUSION_HPP
#define SENSORFUSION_HPP

enum SensorErrorCodes {SENSOR_SUCCESS = 0, SENSOR_FAIL = 1};

//Frequency of SF calculations in Hz
const int SF_FREQ = 200;

// -1 = FAILED
// 0 = SUCCESS
// 1 = Old Data
typedef struct {
    int errorCode;
} SFError_t;

typedef struct {
    double roll, pitch, yaw; //rad
    double rollRate, pitchRate, yawRate; //rad/s
    double airspeed; //m/s
    double altitude; //m
    double rateOfClimb; //m/s
    long double latitude; //Decimal degrees
    double latitudeSpeed; //m/s
    long double longitude; //Decimal degrees
    double longitudeSpeed; //m/s
    double track; // degrees
    double heading; //degrees
} SFOutput_t;

//Following structs store the raw sensor data so other modules can have direct access to them without including sensor header files
typedef struct
{
    double magx, magy, magz;
    double accx, accy, accz;
    double gyrx, gyry, gyrz; 
    double temp;
    
    bool isDataNew; 
    enum SensorErrorCodes sensorStatus; 
    double utcTime; 
} IMU_Data_t;

typedef struct 
{
    double airspeed;        

    enum SensorErrorCodes sensorStatus;       
    bool isDataNew;         
    double utcTime;          
} Airspeed_Data_t;

typedef struct
{
    long double latitude;  // 8 Bytes
    long double longitude; // 8 Bytes
    double utcTime;     // 4 Bytes. Time in seconds since 00:00 (midnight)
    double groundSpeed; // in m/s
    int altitude; // in m
    int16_t heading; // in degrees. Should be between 0-360 at all times, but using integer just in case
    uint8_t numSatellites;    // 1 Byte
    uint8_t fixStatus; //0 = No GPS, 1 = GPS fix, 2 = DGSP Fix, 3 = Estimated/Dead Recoking Fix

    enum SensorErrorCodes sensorStatus; // 0 = no fix, 1 = gps fix, 2 = differential gps fix (DGPS) (other codes are possible)
    bool dataIsNew; // true if data has been refreshed since the previous time GetResult was called, false otherwise.
	bool timeIsNew;

    //Added these so autopilot knows which data is new
    bool ggaDataIsNew; //Position, altitude, time, and number of satellites
    bool vtgDataIsNew; //Groundspeed and Heading
}  Gps_Data_t;

typedef struct  {

    double pressure, altitude, temp;

    bool isDataNew; 
    enum SensorErrorCodes status; //TBD but probably 0 = SUCCESS, -1 = FAIL, 1 = BUSY 
    int utcTime; //Last time GetResult was called
} Altimeter_Data_t;


/**
 * Initialize sensor fusion.
 */ 
void SF_Init(void);

#endif
