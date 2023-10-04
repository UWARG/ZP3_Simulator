#ifndef __customcode_UUHv1SNmCc7CQ4dPO46XC_h__
#define __customcode_UUHv1SNmCc7CQ4dPO46XC_h__

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
#define customcode_UUHv1SNmCc7CQ4dPO46XC_initializer()

#define customcode_UUHv1SNmCc7CQ4dPO46XC_terminator()
#ifdef __cplusplus
}
#endif

#endif

