/* Include files */

#include "modelInterface.h"
#include "m_aGBga77kZPMrtPrVD39RKE.hpp"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_aGBga77kZPMrtPrVD39RKE *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance);
static void init_simulink_io_address(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_aGBga77kZPMrtPrVD39RKE *moduleInstance)
{
  init_simulink_io_address(moduleInstance);
  cgxertSetSimStateCompliance(moduleInstance->S, 2);
}

static void cgxe_mdl_initialize(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_outputs(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance)
{
  Altimeter_Data_t c_local;
  Gps_Data_t b_local;
  IMU_Data_t local;
  SFError_t r;
  SFOutput_t d_local;
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
  d_local.roll = *(real32_T *)&((char_T *)moduleInstance->u3)[0];
  d_local.pitch = *(real32_T *)&((char_T *)moduleInstance->u3)[4];
  d_local.yaw = *(real32_T *)&((char_T *)moduleInstance->u3)[8];
  d_local.rollRate = *(real32_T *)&((char_T *)moduleInstance->u3)[12];
  d_local.pitchRate = *(real32_T *)&((char_T *)moduleInstance->u3)[16];
  d_local.yawRate = *(real32_T *)&((char_T *)moduleInstance->u3)[20];
  d_local.airspeed = *(real32_T *)&((char_T *)moduleInstance->u3)[24];
  d_local.altitude = *(real32_T *)&((char_T *)moduleInstance->u3)[28];
  d_local.rateOfClimb = *(real32_T *)&((char_T *)moduleInstance->u3)[32];
  d_local.latitude = *(real32_T *)&((char_T *)moduleInstance->u3)[36];
  d_local.latitudeSpeed = *(real32_T *)&((char_T *)moduleInstance->u3)[40];
  d_local.longitude = *(real32_T *)&((char_T *)moduleInstance->u3)[44];
  d_local.longitudeSpeed = *(real32_T *)&((char_T *)moduleInstance->u3)[48];
  d_local.track = *(real32_T *)&((char_T *)moduleInstance->u3)[52];
  d_local.heading = *(real32_T *)&((char_T *)moduleInstance->u3)[56];
  r = SF_GenerateNewResult_3e0VqVpGhX4r1zmpJo3iYG(&local, &b_local, &c_local,
    &d_local);
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
  *(real32_T *)&((char_T *)moduleInstance->y4)[0] = d_local.roll;
  *(real32_T *)&((char_T *)moduleInstance->y4)[4] = d_local.pitch;
  *(real32_T *)&((char_T *)moduleInstance->y4)[8] = d_local.yaw;
  *(real32_T *)&((char_T *)moduleInstance->y4)[12] = d_local.rollRate;
  *(real32_T *)&((char_T *)moduleInstance->y4)[16] = d_local.pitchRate;
  *(real32_T *)&((char_T *)moduleInstance->y4)[20] = d_local.yawRate;
  *(real32_T *)&((char_T *)moduleInstance->y4)[24] = d_local.airspeed;
  *(real32_T *)&((char_T *)moduleInstance->y4)[28] = d_local.altitude;
  *(real32_T *)&((char_T *)moduleInstance->y4)[32] = d_local.rateOfClimb;
  *(real32_T *)&((char_T *)moduleInstance->y4)[36] = d_local.latitude;
  *(real32_T *)&((char_T *)moduleInstance->y4)[40] = d_local.latitudeSpeed;
  *(real32_T *)&((char_T *)moduleInstance->y4)[44] = d_local.longitude;
  *(real32_T *)&((char_T *)moduleInstance->y4)[48] = d_local.longitudeSpeed;
  *(real32_T *)&((char_T *)moduleInstance->y4)[52] = d_local.track;
  *(real32_T *)&((char_T *)moduleInstance->y4)[56] = d_local.heading;
}

static void cgxe_mdl_update(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_aGBga77kZPMrtPrVD39RKE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void init_simulink_io_address(InstanceStruct_aGBga77kZPMrtPrVD39RKE
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
  moduleInstance->u3 = (SFOutput_t *)cgxertGetInputPortSignal(moduleInstance->S,
    3);
  moduleInstance->b_y0 = (SFError_t *)cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (IMU_Data_t *)cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->y2 = (Gps_Data_t *)cgxertGetOutputPortSignal(moduleInstance->S,
    2);
  moduleInstance->y3 = (Altimeter_Data_t *)cgxertGetOutputPortSignal
    (moduleInstance->S, 3);
  moduleInstance->y4 = (SFOutput_t *)cgxertGetOutputPortSignal(moduleInstance->S,
    4);
}

/* CGXE Glue Code */
static void mdlOutputs_aGBga77kZPMrtPrVD39RKE(SimStruct *S, int_T tid)
{
  InstanceStruct_aGBga77kZPMrtPrVD39RKE *moduleInstance =
    (InstanceStruct_aGBga77kZPMrtPrVD39RKE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_aGBga77kZPMrtPrVD39RKE(SimStruct *S)
{
  InstanceStruct_aGBga77kZPMrtPrVD39RKE *moduleInstance =
    (InstanceStruct_aGBga77kZPMrtPrVD39RKE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_aGBga77kZPMrtPrVD39RKE(SimStruct *S, int_T tid)
{
  InstanceStruct_aGBga77kZPMrtPrVD39RKE *moduleInstance =
    (InstanceStruct_aGBga77kZPMrtPrVD39RKE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static void mdlTerminate_aGBga77kZPMrtPrVD39RKE(SimStruct *S)
{
  InstanceStruct_aGBga77kZPMrtPrVD39RKE *moduleInstance =
    (InstanceStruct_aGBga77kZPMrtPrVD39RKE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_aGBga77kZPMrtPrVD39RKE(SimStruct *S)
{
  InstanceStruct_aGBga77kZPMrtPrVD39RKE *moduleInstance =
    (InstanceStruct_aGBga77kZPMrtPrVD39RKE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_aGBga77kZPMrtPrVD39RKE(SimStruct *S)
{
  InstanceStruct_aGBga77kZPMrtPrVD39RKE *moduleInstance =
    (InstanceStruct_aGBga77kZPMrtPrVD39RKE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_aGBga77kZPMrtPrVD39RKE(SimStruct *S)
{
  InstanceStruct_aGBga77kZPMrtPrVD39RKE *moduleInstance =
    (InstanceStruct_aGBga77kZPMrtPrVD39RKE *)calloc(1, sizeof
    (InstanceStruct_aGBga77kZPMrtPrVD39RKE));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_aGBga77kZPMrtPrVD39RKE);
  ssSetmdlInitializeConditions(S, mdlInitialize_aGBga77kZPMrtPrVD39RKE);
  ssSetmdlUpdate(S, mdlUpdate_aGBga77kZPMrtPrVD39RKE);
  ssSetmdlTerminate(S, mdlTerminate_aGBga77kZPMrtPrVD39RKE);
  ssSetmdlEnable(S, mdlEnable_aGBga77kZPMrtPrVD39RKE);
  ssSetmdlDisable(S, mdlDisable_aGBga77kZPMrtPrVD39RKE);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_aGBga77kZPMrtPrVD39RKE(SimStruct *S)
{
}

void method_dispatcher_aGBga77kZPMrtPrVD39RKE(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_aGBga77kZPMrtPrVD39RKE(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_aGBga77kZPMrtPrVD39RKE(S);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: aGBga77kZPMrtPrVD39RKE.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_aGBga77kZPMrtPrVD39RKE_BuildInfoUpdate(void)
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

mxArray *cgxe_aGBga77kZPMrtPrVD39RKE_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("incompatibleFunction");
  mxArray* incompatibleSymbol = mxCreateString("SF_GenerateNewResult");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
