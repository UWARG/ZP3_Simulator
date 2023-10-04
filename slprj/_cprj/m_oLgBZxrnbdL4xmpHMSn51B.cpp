/* Include files */

#include "modelInterface.h"
#include "m_oLgBZxrnbdL4xmpHMSn51B.hpp"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance);
static void init_simulink_io_address(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *moduleInstance)
{
  init_simulink_io_address(moduleInstance);
  cgxertSetSimStateCompliance(moduleInstance->S, 2);
}

static void cgxe_mdl_initialize(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_outputs(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance)
{
  Altimeter_Data_t c_local;
  Gps_Data_t b_local;
  IMU_Data_t local;
  SFError_t r;
  SFIterationData_t d_local;
  SFOutput_t e_local;
  int32_T i;
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
  r = SF_GenerateNewResult_3e0VqVpGhX4r1zmpJo3iYG(&local, &b_local, &c_local,
    &d_local, &e_local);
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

static void cgxe_mdl_update(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
  *moduleInstance)
{
  (void)moduleInstance;
}

static void init_simulink_io_address(InstanceStruct_oLgBZxrnbdL4xmpHMSn51B
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
static void mdlOutputs_oLgBZxrnbdL4xmpHMSn51B(SimStruct *S, int_T tid)
{
  InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *moduleInstance =
    (InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_oLgBZxrnbdL4xmpHMSn51B(SimStruct *S)
{
  InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *moduleInstance =
    (InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_oLgBZxrnbdL4xmpHMSn51B(SimStruct *S, int_T tid)
{
  InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *moduleInstance =
    (InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_oLgBZxrnbdL4xmpHMSn51B(SimStruct *S)
{
  InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *moduleInstance =
    (InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_oLgBZxrnbdL4xmpHMSn51B(SimStruct *S)
{
  InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *moduleInstance =
    (InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_oLgBZxrnbdL4xmpHMSn51B(SimStruct *S)
{
  InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *moduleInstance =
    (InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_oLgBZxrnbdL4xmpHMSn51B(SimStruct *S)
{
  InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *moduleInstance =
    (InstanceStruct_oLgBZxrnbdL4xmpHMSn51B *)calloc(1, sizeof
    (InstanceStruct_oLgBZxrnbdL4xmpHMSn51B));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_oLgBZxrnbdL4xmpHMSn51B);
  ssSetmdlInitializeConditions(S, mdlInitialize_oLgBZxrnbdL4xmpHMSn51B);
  ssSetmdlUpdate(S, mdlUpdate_oLgBZxrnbdL4xmpHMSn51B);
  ssSetmdlTerminate(S, mdlTerminate_oLgBZxrnbdL4xmpHMSn51B);
  ssSetmdlEnable(S, mdlEnable_oLgBZxrnbdL4xmpHMSn51B);
  ssSetmdlDisable(S, mdlDisable_oLgBZxrnbdL4xmpHMSn51B);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_oLgBZxrnbdL4xmpHMSn51B(SimStruct *S)
{
}

void method_dispatcher_oLgBZxrnbdL4xmpHMSn51B(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_oLgBZxrnbdL4xmpHMSn51B(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_oLgBZxrnbdL4xmpHMSn51B(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: oLgBZxrnbdL4xmpHMSn51B.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_oLgBZxrnbdL4xmpHMSn51B_BuildInfoUpdate(void)
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

mxArray *cgxe_oLgBZxrnbdL4xmpHMSn51B_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("incompatibleFunction");
  mxArray* incompatibleSymbol = mxCreateString("SF_GenerateNewResult");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
