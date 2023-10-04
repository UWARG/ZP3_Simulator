#ifndef __GZlcI4guxfAkufEiivXUQG_h__
#define __GZlcI4guxfAkufEiivXUQG_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_InstanceStruct_GZlcI4guxfAkufEiivXUQG
#define typedef_InstanceStruct_GZlcI4guxfAkufEiivXUQG

typedef struct {
  SimStruct *S;
  void *emlrtRootTLSGlobal;
  IMU_Data_t *u0;
  Gps_Data_t *u1;
  Altimeter_Data_t *u2;
  SFOutput_t *u3;
  SFError_t *b_y0;
  IMU_Data_t *b_y1;
  Gps_Data_t *y2;
  Altimeter_Data_t *y3;
  SFOutput_t *y4;
} InstanceStruct_GZlcI4guxfAkufEiivXUQG;

#endif                                 /* typedef_InstanceStruct_GZlcI4guxfAkufEiivXUQG */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_GZlcI4guxfAkufEiivXUQG(SimStruct *S, int_T method,
  void* data);

#endif
