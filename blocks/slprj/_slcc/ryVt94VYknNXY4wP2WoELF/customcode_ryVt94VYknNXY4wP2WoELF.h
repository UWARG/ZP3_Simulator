#ifndef __customcode_ryVt94VYknNXY4wP2WoELF_h__
#define __customcode_ryVt94VYknNXY4wP2WoELF_h__

/* Include files */
#include "mex.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "tmwtypes.h"


/* Helper definitions for DLL support */
#if defined _WIN32 
  #define DLL_EXPORT_CC __declspec(dllexport)
#else
  #if __GNUC__ >= 4
    #define DLL_EXPORT_CC __attribute__ ((visibility ("default")))
  #else
    #define DLL_EXPORT_CC
  #endif
#endif
/* Custom Code from Simulation Target dialog */
#include "ccontrol_functions.h"
#include "common_data_types.hpp"
#include "manhony_ahrs.h"
#include "math_constants.hpp"
#include "sensor_fusion.hpp"
#include "sf_config.h"


/* Function Declarations */
#ifdef __cplusplus
extern "C" {
#endif
#define customcode_ryVt94VYknNXY4wP2WoELF_initializer()

#define customcode_ryVt94VYknNXY4wP2WoELF_terminator()
#ifdef __cplusplus
}
#endif

#endif

