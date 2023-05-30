#include <iostream>
#include <cstdlib>
#include<windows.h>

using namespace std;

#include "SensorFusion.cpp"
#include "main.h"

void mainFunc(double angles[3], double angleRates[3],
             double* airspeed, double* altitiude, double* rateOfClimb,
             double* latitude, double* latitudeSpeed, double* longitude,
             double* longitudeSpeed, double* track, double* heading,
             double* a_altitude, double* g_latitude, double* g_longitude,
             double* g_altitude, double* g_groundspeed, double* g_heading,
             double* i_accx, double* i_accy, double* i_accz,
             double* i_magx, double* i_magy, double* i_magz,
             double* i_gyrx, double* i_gyry, double* i_gyrz
             )
{
    SF_Init();
    SFOutput_t* output;
    while(true)
    {
        SF_GenerateNewResult(a_altitude, g_latitude, g_longitude, g_altitude,
                            g_groundspeed, g_heading, i_accx, i_accy, i_accz,
                            i_magx, i_magy, i_magz, i_gyrx, i_gyry, i_gyrz);
        SF_GetResult(output);
        angles[0] = output->roll;
        angles[1] = output->pitch;
        angles[2] = output->yaw;
        angleRates[0] = output->rollRate;
        angleRates[1] = output->pitchRate;
        angleRates[2] = output->yawRate;
        *airspeed = output->airspeed;
        *altitiude = output->latitude;
        *rateOfClimb = output->rateOfClimb;
        *latitude = output->latitude;
        *latitudeSpeed = output->latitudeSpeed;
        *longitude = output->longitude;
        *longitudeSpeed = output->longitudeSpeed;
        *track = output->track;
        *heading = output->heading;
        Sleep(5);
    }

}