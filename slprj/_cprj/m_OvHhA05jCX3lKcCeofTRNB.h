#ifndef __OvHhA05jCX3lKcCeofTRNB_h__
#define __OvHhA05jCX3lKcCeofTRNB_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_InstanceStruct_OvHhA05jCX3lKcCeofTRNB
#define typedef_InstanceStruct_OvHhA05jCX3lKcCeofTRNB

typedef struct {
  SimStruct *S;
  void *emlrtRootTLSGlobal;
  IMU_Data_t *u0;
  Gps_Data_t *u1;
  Altimeter_Data_t *u2;
  SFIterationData_t *u3;
  SFOutput_t *u4;
  real32_T *u5;
  real32_T *u6;
  SFError_t *b_y0;
  IMU_Data_t *b_y1;
  Gps_Data_t *y2;
  Altimeter_Data_t *y3;
  SFIterationData_t *y4;
  SFOutput_t *y5;
} InstanceStruct_OvHhA05jCX3lKcCeofTRNB;

#endif                                 /* typedef_InstanceStruct_OvHhA05jCX3lKcCeofTRNB */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_OvHhA05jCX3lKcCeofTRNB(SimStruct *S, int_T method,
  void* data);

#endif
