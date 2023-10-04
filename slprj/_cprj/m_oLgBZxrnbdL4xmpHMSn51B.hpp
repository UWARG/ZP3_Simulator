#ifndef __oLgBZxrnbdL4xmpHMSn51B_h__
#define __oLgBZxrnbdL4xmpHMSn51B_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
#define typedef_InstanceStruct_oLgBZxrnbdL4xmpHMSn51B

typedef struct {
  SimStruct *S;
  void *emlrtRootTLSGlobal;
  IMU_Data_t *u0;
  Gps_Data_t *u1;
  Altimeter_Data_t *u2;
  SFIterationData_t *u3;
  SFOutput_t *u4;
  SFError_t *b_y0;
  IMU_Data_t *b_y1;
  Gps_Data_t *y2;
  Altimeter_Data_t *y3;
  SFIterationData_t *y4;
  SFOutput_t *y5;
} InstanceStruct_oLgBZxrnbdL4xmpHMSn51B;

#endif                                 /* typedef_InstanceStruct_oLgBZxrnbdL4xmpHMSn51B */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_oLgBZxrnbdL4xmpHMSn51B(SimStruct *S, int_T method,
  void* data);

#endif
