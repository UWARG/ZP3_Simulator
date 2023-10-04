#ifndef __sensorFusion_block_cgxe_h__
#define __sensorFusion_block_cgxe_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "emlrt.h"
#include "covrt.h"
#include "cgxert.h"
#include "cgxeooprt.h"
#include "slccrt.h"
#include "slcc_interface_3e0VqVpGhX4r1zmpJo3iYG.h"
#define rtInf                          (mxGetInf())
#define rtMinusInf                     (-(mxGetInf()))
#define rtNaN                          (mxGetNaN())
#define rtInfF                         ((real32_T)mxGetInf())
#define rtMinusInfF                    (-(real32_T)mxGetInf())
#define rtNaNF                         ((real32_T)mxGetNaN())
#define rtIsNaN(X)                     ((int)mxIsNaN(X))
#define rtIsInf(X)                     ((int)mxIsInf(X))

extern unsigned int cgxe_sensorFusion_block_method_dispatcher(SimStruct* S,
  int_T method, void* data);

#endif
