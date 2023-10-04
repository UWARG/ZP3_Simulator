#ifndef __ZAseuTLuvta4vxI7rWAxeH_h__
#define __ZAseuTLuvta4vxI7rWAxeH_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_simstruct_bridge.h"
#include "sl_sfcn_cov/sl_sfcn_cov_bridge.h"

/* Type Definitions */
#ifndef typedef_InstanceStruct_ZAseuTLuvta4vxI7rWAxeH
#define typedef_InstanceStruct_ZAseuTLuvta4vxI7rWAxeH

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
} InstanceStruct_ZAseuTLuvta4vxI7rWAxeH;

#endif                                 /* typedef_InstanceStruct_ZAseuTLuvta4vxI7rWAxeH */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_ZAseuTLuvta4vxI7rWAxeH(SimStruct *S, int_T method,
  void* data);

#endif
