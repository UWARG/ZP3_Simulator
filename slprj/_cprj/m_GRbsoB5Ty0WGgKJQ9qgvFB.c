/* Include files */

#include "modelInterface.h"
#include "m_GRbsoB5Ty0WGgKJQ9qgvFB.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance);
static void set_twoKi_val_Ot0CAsNmzP502AtDFUhkED_OOP
  (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance, const volatile
   real32_T *r);
static void set_twoKp_val_Ot0CAsNmzP502AtDFUhkED_OOP
  (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance, const volatile
   real32_T *r);
static SFError_t SF_GenerateNewResult_Ot0CAsNmzP502AtDFUhkED_OOP
  (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance, IMU_Data_t *r,
   Gps_Data_t *r1, Altimeter_Data_t *r2, SFIterationData_t *r3, SFOutput_t *r4);
static void init_simulink_io_address(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance)
{
  init_simulink_io_address(moduleInstance);
  cgxertSetSimStateCompliance(moduleInstance->S, 2);
}

static void cgxe_mdl_initialize(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_outputs(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance)
{
  Altimeter_Data_t c_local;
  Gps_Data_t b_local;
  IMU_Data_t local;
  SFError_t r;
  SFIterationData_t d_local;
  SFOutput_t e_local;
  int32_T i;
  real32_T local_twoKi_Ot0CAsNmzP502AtDFUhkED;
  real32_T local_twoKp_Ot0CAsNmzP502AtDFUhkED;
  local_twoKp_Ot0CAsNmzP502AtDFUhkED = 0.0F;
  local.magx = *(real32_T *)&((char_T *)moduleInstance->u0)[0];
  local.magy = *(real32_T *)&((char_T *)moduleInstance->u0)[4];
  local.magz = *(real32_T *)&((char_T *)moduleInstance->u0)[8];
  local.accx = *(real32_T *)&((char_T *)moduleInstance->u0)[12];
  local.accy = *(real32_T *)&((char_T *)moduleInstance->u0)[16];
  local.accz = *(real32_T *)&((char_T *)moduleInstance->u0)[20];
  local.gyrx = *(real32_T *)&((char_T *)moduleInstance->u0)[24];
  local.gyry = *(real32_T *)&((char_T *)moduleInstance->u0)[28];
  local.gyrz = *(real32_T *)&((char_T *)moduleInstance->u0)[32];
  local.temp = *(real32_T *)&((char_T *)moduleInstance->u0)[36];
  local.isDataNew = *(boolean_T *)&((char_T *)moduleInstance->u0)[40];
  local.sensorStatus = *(SensorErrorCodes_e *)&((char_T *)moduleInstance->u0)[44];
  local.utcTime = *(real32_T *)&((char_T *)moduleInstance->u0)[48];
  b_local.latitude = *(real32_T *)&((char_T *)moduleInstance->u1)[0];
  b_local.longitude = *(real32_T *)&((char_T *)moduleInstance->u1)[4];
  b_local.utcTime = *(real32_T *)&((char_T *)moduleInstance->u1)[8];
  b_local.groundSpeed = *(real32_T *)&((char_T *)moduleInstance->u1)[12];
  b_local.altitude = *(int32_T *)&((char_T *)moduleInstance->u1)[16];
  b_local.heading = *(int32_T *)&((char_T *)moduleInstance->u1)[20];
  b_local.numSatellites = *(int32_T *)&((char_T *)moduleInstance->u1)[24];
  b_local.fixStatus = *(int32_T *)&((char_T *)moduleInstance->u1)[28];
  b_local.sensorStatus = *(SensorErrorCodes_e *)&((char_T *)moduleInstance->u1)
    [32];
  b_local.dataIsNew = *(boolean_T *)&((char_T *)moduleInstance->u1)[36];
  b_local.timeIsNew = *(boolean_T *)&((char_T *)moduleInstance->u1)[37];
  b_local.ggaDataIsNew = *(boolean_T *)&((char_T *)moduleInstance->u1)[38];
  b_local.vtgDataIsNew = *(boolean_T *)&((char_T *)moduleInstance->u1)[39];
  c_local.pressure = *(real32_T *)&((char_T *)moduleInstance->u2)[0];
  c_local.altitude = *(real32_T *)&((char_T *)moduleInstance->u2)[4];
  c_local.temp = *(real32_T *)&((char_T *)moduleInstance->u2)[8];
  c_local.isDataNew = *(boolean_T *)&((char_T *)moduleInstance->u2)[12];
  c_local.status = *(SensorErrorCodes_e *)&((char_T *)moduleInstance->u2)[16];
  c_local.utcTime = *(int32_T *)&((char_T *)moduleInstance->u2)[20];
  for (i = 0; i < 6; i++) {
    d_local.prevX[i] = ((real32_T *)&((char_T *)moduleInstance->u3)[0])[i];
  }

  for (i = 0; i < 36; i++) {
    d_local.prevP[i] = ((real32_T *)&((char_T *)moduleInstance->u3)[24])[i];
  }

  e_local.roll = *(real32_T *)&((char_T *)moduleInstance->u4)[0];
  e_local.pitch = *(real32_T *)&((char_T *)moduleInstance->u4)[4];
  e_local.yaw = *(real32_T *)&((char_T *)moduleInstance->u4)[8];
  e_local.rollRate = *(real32_T *)&((char_T *)moduleInstance->u4)[12];
  e_local.pitchRate = *(real32_T *)&((char_T *)moduleInstance->u4)[16];
  e_local.yawRate = *(real32_T *)&((char_T *)moduleInstance->u4)[20];
  e_local.airspeed = *(real32_T *)&((char_T *)moduleInstance->u4)[24];
  e_local.altitude = *(real32_T *)&((char_T *)moduleInstance->u4)[28];
  e_local.rateOfClimb = *(real32_T *)&((char_T *)moduleInstance->u4)[32];
  e_local.latitude = *(real32_T *)&((char_T *)moduleInstance->u4)[36];
  e_local.latitudeSpeed = *(real32_T *)&((char_T *)moduleInstance->u4)[40];
  e_local.longitude = *(real32_T *)&((char_T *)moduleInstance->u4)[44];
  e_local.longitudeSpeed = *(real32_T *)&((char_T *)moduleInstance->u4)[48];
  e_local.track = *(real32_T *)&((char_T *)moduleInstance->u4)[52];
  e_local.heading = *(real32_T *)&((char_T *)moduleInstance->u4)[56];
  local_twoKi_Ot0CAsNmzP502AtDFUhkED = *moduleInstance->u5;
  set_twoKi_val_Ot0CAsNmzP502AtDFUhkED_OOP(moduleInstance,
    &local_twoKi_Ot0CAsNmzP502AtDFUhkED);
  local_twoKp_Ot0CAsNmzP502AtDFUhkED = *moduleInstance->u6;
  set_twoKp_val_Ot0CAsNmzP502AtDFUhkED_OOP(moduleInstance,
    &local_twoKp_Ot0CAsNmzP502AtDFUhkED);
  r = SF_GenerateNewResult_Ot0CAsNmzP502AtDFUhkED_OOP(moduleInstance, &local,
    &b_local, &c_local, &d_local, &e_local);
  *(int32_T *)&((char_T *)moduleInstance->b_y0)[0] = r.errorCode;
  *(real32_T *)&((char_T *)moduleInstance->b_y1)[0] = local.magx;
  *(real32_T *)&((char_T *)moduleInstance->b_y1)[4] = local.magy;
  *(real32_T *)&((char_T *)moduleInstance->b_y1)[8] = local.magz;
  *(real32_T *)&((char_T *)moduleInstance->b_y1)[12] = local.accx;
  *(real32_T *)&((char_T *)moduleInstance->b_y1)[16] = local.accy;
  *(real32_T *)&((char_T *)moduleInstance->b_y1)[20] = local.accz;
  *(real32_T *)&((char_T *)moduleInstance->b_y1)[24] = local.gyrx;
  *(real32_T *)&((char_T *)moduleInstance->b_y1)[28] = local.gyry;
  *(real32_T *)&((char_T *)moduleInstance->b_y1)[32] = local.gyrz;
  *(real32_T *)&((char_T *)moduleInstance->b_y1)[36] = local.temp;
  *(boolean_T *)&((char_T *)moduleInstance->b_y1)[40] = local.isDataNew;
  *(SensorErrorCodes_e *)&((char_T *)moduleInstance->b_y1)[44] =
    local.sensorStatus;
  *(real32_T *)&((char_T *)moduleInstance->b_y1)[48] = local.utcTime;
  *(real32_T *)&((char_T *)moduleInstance->y2)[0] = b_local.latitude;
  *(real32_T *)&((char_T *)moduleInstance->y2)[4] = b_local.longitude;
  *(real32_T *)&((char_T *)moduleInstance->y2)[8] = b_local.utcTime;
  *(real32_T *)&((char_T *)moduleInstance->y2)[12] = b_local.groundSpeed;
  *(int32_T *)&((char_T *)moduleInstance->y2)[16] = b_local.altitude;
  *(int32_T *)&((char_T *)moduleInstance->y2)[20] = b_local.heading;
  *(int32_T *)&((char_T *)moduleInstance->y2)[24] = b_local.numSatellites;
  *(int32_T *)&((char_T *)moduleInstance->y2)[28] = b_local.fixStatus;
  *(SensorErrorCodes_e *)&((char_T *)moduleInstance->y2)[32] =
    b_local.sensorStatus;
  *(boolean_T *)&((char_T *)moduleInstance->y2)[36] = b_local.dataIsNew;
  *(boolean_T *)&((char_T *)moduleInstance->y2)[37] = b_local.timeIsNew;
  *(boolean_T *)&((char_T *)moduleInstance->y2)[38] = b_local.ggaDataIsNew;
  *(boolean_T *)&((char_T *)moduleInstance->y2)[39] = b_local.vtgDataIsNew;
  *(real32_T *)&((char_T *)moduleInstance->y3)[0] = c_local.pressure;
  *(real32_T *)&((char_T *)moduleInstance->y3)[4] = c_local.altitude;
  *(real32_T *)&((char_T *)moduleInstance->y3)[8] = c_local.temp;
  *(boolean_T *)&((char_T *)moduleInstance->y3)[12] = c_local.isDataNew;
  *(SensorErrorCodes_e *)&((char_T *)moduleInstance->y3)[16] = c_local.status;
  *(int32_T *)&((char_T *)moduleInstance->y3)[20] = c_local.utcTime;
  for (i = 0; i < 6; i++) {
    ((real32_T *)&((char_T *)moduleInstance->y4)[0])[i] = d_local.prevX[i];
  }

  for (i = 0; i < 36; i++) {
    ((real32_T *)&((char_T *)moduleInstance->y4)[24])[i] = d_local.prevP[i];
  }

  *(real32_T *)&((char_T *)moduleInstance->y5)[0] = e_local.roll;
  *(real32_T *)&((char_T *)moduleInstance->y5)[4] = e_local.pitch;
  *(real32_T *)&((char_T *)moduleInstance->y5)[8] = e_local.yaw;
  *(real32_T *)&((char_T *)moduleInstance->y5)[12] = e_local.rollRate;
  *(real32_T *)&((char_T *)moduleInstance->y5)[16] = e_local.pitchRate;
  *(real32_T *)&((char_T *)moduleInstance->y5)[20] = e_local.yawRate;
  *(real32_T *)&((char_T *)moduleInstance->y5)[24] = e_local.airspeed;
  *(real32_T *)&((char_T *)moduleInstance->y5)[28] = e_local.altitude;
  *(real32_T *)&((char_T *)moduleInstance->y5)[32] = e_local.rateOfClimb;
  *(real32_T *)&((char_T *)moduleInstance->y5)[36] = e_local.latitude;
  *(real32_T *)&((char_T *)moduleInstance->y5)[40] = e_local.latitudeSpeed;
  *(real32_T *)&((char_T *)moduleInstance->y5)[44] = e_local.longitude;
  *(real32_T *)&((char_T *)moduleInstance->y5)[48] = e_local.longitudeSpeed;
  *(real32_T *)&((char_T *)moduleInstance->y5)[52] = e_local.track;
  *(real32_T *)&((char_T *)moduleInstance->y5)[56] = e_local.heading;
}

static void cgxe_mdl_update(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance)
{
  (void)moduleInstance;
}

static void set_twoKi_val_Ot0CAsNmzP502AtDFUhkED_OOP
  (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance, const volatile
   real32_T *r)
{
  int32_T dims[1];
  int32_T elemSizes[1];
  int32_T scopeIds[1];
  void *dataPtrs[1];
  scopeIds[0U] = 0;
  dims[0U] = 1;
  elemSizes[0U] = (int32_T)sizeof(const volatile real32_T);
  dataPtrs[0U] = (void *)r;
  cgxertCallSLCCOutOfProcessFcn(moduleInstance->S, -1, -1,
    "Ot0CAsNmzP502AtDFUhkED", "set_twoKi_val_Ot0CAsNmzP502AtDFUhkED",
    "set_twoKi_val", 1, &scopeIds[0U], &dims[0U], &elemSizes[0U], &dataPtrs[0U]);
}

static void set_twoKp_val_Ot0CAsNmzP502AtDFUhkED_OOP
  (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance, const volatile
   real32_T *r)
{
  int32_T dims[1];
  int32_T elemSizes[1];
  int32_T scopeIds[1];
  void *dataPtrs[1];
  scopeIds[0U] = 0;
  dims[0U] = 1;
  elemSizes[0U] = (int32_T)sizeof(const volatile real32_T);
  dataPtrs[0U] = (void *)r;
  cgxertCallSLCCOutOfProcessFcn(moduleInstance->S, -1, -1,
    "Ot0CAsNmzP502AtDFUhkED", "set_twoKp_val_Ot0CAsNmzP502AtDFUhkED",
    "set_twoKp_val", 1, &scopeIds[0U], &dims[0U], &elemSizes[0U], &dataPtrs[0U]);
}

static SFError_t SF_GenerateNewResult_Ot0CAsNmzP502AtDFUhkED_OOP
  (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance, IMU_Data_t *r,
   Gps_Data_t *r1, Altimeter_Data_t *r2, SFIterationData_t *r3, SFOutput_t *r4)
{
  SFError_t r5;
  int32_T dims[6];
  int32_T elemSizes[6];
  int32_T scopeIds[6];
  void *dataPtrs[6];
  scopeIds[0U] = 2;
  dims[0U] = 1;
  elemSizes[0U] = (int32_T)sizeof(SFError_t);
  dataPtrs[0U] = (void *)&r5;
  scopeIds[1U] = 1;
  dims[1U] = 1;
  elemSizes[1U] = (int32_T)sizeof(IMU_Data_t);
  dataPtrs[1U] = (void *)r;
  scopeIds[2U] = 1;
  dims[2U] = 1;
  elemSizes[2U] = (int32_T)sizeof(Gps_Data_t);
  dataPtrs[2U] = (void *)r1;
  scopeIds[3U] = 1;
  dims[3U] = 1;
  elemSizes[3U] = (int32_T)sizeof(Altimeter_Data_t);
  dataPtrs[3U] = (void *)r2;
  scopeIds[4U] = 1;
  dims[4U] = 1;
  elemSizes[4U] = (int32_T)sizeof(SFIterationData_t);
  dataPtrs[4U] = (void *)r3;
  scopeIds[5U] = 1;
  dims[5U] = 1;
  elemSizes[5U] = (int32_T)sizeof(SFOutput_t);
  dataPtrs[5U] = (void *)r4;
  cgxertCallSLCCOutOfProcessFcn(moduleInstance->S, -1, -1,
    "Ot0CAsNmzP502AtDFUhkED", "SF_GenerateNewResult_Ot0CAsNmzP502AtDFUhkED",
    "SF_GenerateNewResult", 6, &scopeIds[0U], &dims[0U], &elemSizes[0U],
    &dataPtrs[0U]);
  return r5;
}

static void init_simulink_io_address(InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->u0 = (IMU_Data_t *)cgxertGetInputPortSignal(moduleInstance->S,
    0);
  moduleInstance->u1 = (Gps_Data_t *)cgxertGetInputPortSignal(moduleInstance->S,
    1);
  moduleInstance->u2 = (Altimeter_Data_t *)cgxertGetInputPortSignal
    (moduleInstance->S, 2);
  moduleInstance->u3 = (SFIterationData_t *)cgxertGetInputPortSignal
    (moduleInstance->S, 3);
  moduleInstance->u4 = (SFOutput_t *)cgxertGetInputPortSignal(moduleInstance->S,
    4);
  moduleInstance->u5 = (real32_T *)cgxertGetInputPortSignal(moduleInstance->S, 5);
  moduleInstance->u6 = (real32_T *)cgxertGetInputPortSignal(moduleInstance->S, 6);
  moduleInstance->b_y0 = (SFError_t *)cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (IMU_Data_t *)cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->y2 = (Gps_Data_t *)cgxertGetOutputPortSignal(moduleInstance->S,
    2);
  moduleInstance->y3 = (Altimeter_Data_t *)cgxertGetOutputPortSignal
    (moduleInstance->S, 3);
  moduleInstance->y4 = (SFIterationData_t *)cgxertGetOutputPortSignal
    (moduleInstance->S, 4);
  moduleInstance->y5 = (SFOutput_t *)cgxertGetOutputPortSignal(moduleInstance->S,
    5);
}

/* CGXE Glue Code */
static void mdlOutputs_GRbsoB5Ty0WGgKJQ9qgvFB(SimStruct *S, int_T tid)
{
  InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance =
    (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_GRbsoB5Ty0WGgKJQ9qgvFB(SimStruct *S)
{
  InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance =
    (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_GRbsoB5Ty0WGgKJQ9qgvFB(SimStruct *S, int_T tid)
{
  InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance =
    (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_GRbsoB5Ty0WGgKJQ9qgvFB(SimStruct *S)
{
  InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance =
    (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_GRbsoB5Ty0WGgKJQ9qgvFB(SimStruct *S)
{
  InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance =
    (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_GRbsoB5Ty0WGgKJQ9qgvFB(SimStruct *S)
{
  InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance =
    (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_GRbsoB5Ty0WGgKJQ9qgvFB(SimStruct *S)
{
  InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *moduleInstance =
    (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB *)calloc(1, sizeof
    (InstanceStruct_GRbsoB5Ty0WGgKJQ9qgvFB));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_GRbsoB5Ty0WGgKJQ9qgvFB);
  ssSetmdlInitializeConditions(S, mdlInitialize_GRbsoB5Ty0WGgKJQ9qgvFB);
  ssSetmdlUpdate(S, mdlUpdate_GRbsoB5Ty0WGgKJQ9qgvFB);
  ssSetmdlTerminate(S, mdlTerminate_GRbsoB5Ty0WGgKJQ9qgvFB);
  ssSetmdlEnable(S, mdlEnable_GRbsoB5Ty0WGgKJQ9qgvFB);
  ssSetmdlDisable(S, mdlDisable_GRbsoB5Ty0WGgKJQ9qgvFB);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_GRbsoB5Ty0WGgKJQ9qgvFB(SimStruct *S)
{
}

void method_dispatcher_GRbsoB5Ty0WGgKJQ9qgvFB(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_GRbsoB5Ty0WGgKJQ9qgvFB(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_GRbsoB5Ty0WGgKJQ9qgvFB(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: GRbsoB5Ty0WGgKJQ9qgvFB.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_GRbsoB5Ty0WGgKJQ9qgvFB_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  double * pointer;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateDoubleMatrix(0,0, mxREAL);
  pointer = mxGetPr(elem_1);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_2 = mxCreateDoubleMatrix(0,0, mxREAL);
  pointer = mxGetPr(elem_2);
  mxSetCell(mxBIArgs,1,elem_2);
  elem_3 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_3);
  return mxBIArgs;
}

mxArray *cgxe_GRbsoB5Ty0WGgKJQ9qgvFB_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("incompatibleFunction");
  mxArray* incompatibleSymbol = mxCreateString("SF_GenerateNewResult");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
