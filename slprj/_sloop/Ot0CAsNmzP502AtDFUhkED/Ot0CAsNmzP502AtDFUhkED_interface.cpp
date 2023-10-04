/* Interface file for out-of-process execution of library:
 * Ot0CAsNmzP502AtDFUhkED
 */

#include "xil_interface.h"
#include "xil_data_stream.h"

#include "Ot0CAsNmzP502AtDFUhkED_interface.h"

#include <stdlib.h>

#include <string.h>

/* Function Init/Term */
void customcode_Ot0CAsNmzP502AtDFUhkED_initializer(void)
{
}

void customcode_Ot0CAsNmzP502AtDFUhkED_terminator(void)
{
}

/* Function isDebug */
boolean_T customcode_Ot0CAsNmzP502AtDFUhkED_isdebug(void)
{
   return true;
}


/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void get_q2_val_Ot0CAsNmzP502AtDFUhkED(real32_T *varValByPtr)
{
    *varValByPtr = q2;
}

void set_q2_val_Ot0CAsNmzP502AtDFUhkED(const volatile real32_T *varValByPtr)
{
    q2 = *varValByPtr;
}

void get_q1_val_Ot0CAsNmzP502AtDFUhkED(real32_T *varValByPtr)
{
    *varValByPtr = q1;
}

void set_q1_val_Ot0CAsNmzP502AtDFUhkED(const volatile real32_T *varValByPtr)
{
    q1 = *varValByPtr;
}

void get_twoKi_val_Ot0CAsNmzP502AtDFUhkED(real32_T *varValByPtr)
{
    *varValByPtr = twoKi;
}

void set_twoKi_val_Ot0CAsNmzP502AtDFUhkED(const volatile real32_T *varValByPtr)
{
    twoKi = *varValByPtr;
}

void get_q3_val_Ot0CAsNmzP502AtDFUhkED(real32_T *varValByPtr)
{
    *varValByPtr = q3;
}

void set_q3_val_Ot0CAsNmzP502AtDFUhkED(const volatile real32_T *varValByPtr)
{
    q3 = *varValByPtr;
}

void get_SF_FREQ_val_Ot0CAsNmzP502AtDFUhkED(int32_T *varValByPtr)
{
    *varValByPtr = SF_FREQ;
}

void get_q0_val_Ot0CAsNmzP502AtDFUhkED(real32_T *varValByPtr)
{
    *varValByPtr = q0;
}

void set_q0_val_Ot0CAsNmzP502AtDFUhkED(const volatile real32_T *varValByPtr)
{
    q0 = *varValByPtr;
}

void get_twoKp_val_Ot0CAsNmzP502AtDFUhkED(real32_T *varValByPtr)
{
    *varValByPtr = twoKp;
}

void set_twoKp_val_Ot0CAsNmzP502AtDFUhkED(const volatile real32_T *varValByPtr)
{
    twoKp = *varValByPtr;
}


/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
int32_T inv_Ot0CAsNmzP502AtDFUhkED(real32_T *A, int32_T row)
{
    return inv(A, row);
}

void tran_Ot0CAsNmzP502AtDFUhkED(real32_T *A, int32_T row, int32_T column)
{
    tran(A, row, column);
}

void mul_Ot0CAsNmzP502AtDFUhkED(real32_T *A, real32_T *B, real32_T *C, int32_T row_a, int32_T column_a, int32_T column_b)
{
    mul(A, B, C, row_a, column_a, column_b);
}

uint8_T lup_Ot0CAsNmzP502AtDFUhkED(real32_T *A, real32_T *LU, int32_T *P, int32_T row)
{
    return lup(A, LU, (signed int *)P, row);
}

void MahonyAHRSupdate_Ot0CAsNmzP502AtDFUhkED(real32_T gx, real32_T gy, real32_T gz, real32_T ax, real32_T ay, real32_T az, real32_T mx, real32_T my, real32_T mz)
{
    MahonyAHRSupdate(gx, gy, gz, ax, ay, az, mx, my, mz);
}

void MahonyAHRSupdateIMU_Ot0CAsNmzP502AtDFUhkED(real32_T gx, real32_T gy, real32_T gz, real32_T ax, real32_T ay, real32_T az)
{
    MahonyAHRSupdateIMU(gx, gy, gz, ax, ay, az);
}

SFError_t SF_Init_Ot0CAsNmzP502AtDFUhkED(SFIterationData_t *iterData)
{
    return SF_Init(iterData);
}

SFError_t SF_GenerateNewResult_Ot0CAsNmzP502AtDFUhkED(IMU_Data_t *imuData, Gps_Data_t *GpsData, Altimeter_Data_t *altimeterData, SFIterationData_t *iterData, SFOutput_t *SFoutput)
{
    return SF_GenerateNewResult(imuData, GpsData, altimeterData, iterData, SFoutput);
}



XIL_INTERFACE_ERROR_CODE xilInitTargetData()
{
    return XIL_INTERFACE_SUCCESS;
}



XIL_INTERFACE_ERROR_CODE xilGetHostToTargetData(uint32_T xilFcnId, XIL_COMMAND_TYPE_ENUM xilCommandType, uint32_T xilCommandIdx, XILIOData **xilIOData)
{
    UNUSED_PARAMETER(xilFcnId);
    UNUSED_PARAMETER(xilCommandType);
    UNUSED_PARAMETER(xilCommandIdx);
    UNUSED_PARAMETER(xilIOData);

    return XIL_INTERFACE_UNKNOWN_TID;
}

XIL_INTERFACE_ERROR_CODE xilOutput(uint32_T xilFcnId, uint32_T xilTID)
{
    UNUSED_PARAMETER(xilTID);

    static uint32_T sizeData = (uint32_T) sizeof(uint32_T);
    static uint32_T sizeScopeID = (uint32_T) sizeof(uint8_T);

    switch (xilFcnId) {
    case 0:
    {


        customcode_Ot0CAsNmzP502AtDFUhkED_initializer();



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }


        break;
    }

    case 1:
    {


        customcode_Ot0CAsNmzP502AtDFUhkED_terminator();



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }


        break;
    }

    case 2:
    {
        uint32_T dataWidth_isAllowToDebug = 0;
        xilReadData((MemUnit_T *) &dataWidth_isAllowToDebug, sizeData);
        uint8_T scopeID_isAllowToDebug = 0;
        xilReadData((MemUnit_T *) &scopeID_isAllowToDebug, sizeScopeID);
        boolean_T isAllowToDebug = 0;



        isAllowToDebug = customcode_Ot0CAsNmzP502AtDFUhkED_isdebug();



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (xilWriteData((MemUnit_T *) &isAllowToDebug, (uint32_T) sizeof(boolean_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }


        break;
    }

    case 3:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real32_T *varValByPtr = (real32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real32_T));
        if (scopeID_varValByPtr < 2) {
            xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T)));
        }



        get_q2_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_varValByPtr > 0) {
            if (xilWriteData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(varValByPtr);

        break;
    }

    case 4:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real32_T *varValByPtr = (real32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real32_T));
        xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T)));



        set_q2_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        free(varValByPtr);

        break;
    }

    case 5:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real32_T *varValByPtr = (real32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real32_T));
        if (scopeID_varValByPtr < 2) {
            xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T)));
        }



        get_q1_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_varValByPtr > 0) {
            if (xilWriteData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(varValByPtr);

        break;
    }

    case 6:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real32_T *varValByPtr = (real32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real32_T));
        xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T)));



        set_q1_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        free(varValByPtr);

        break;
    }

    case 7:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real32_T *varValByPtr = (real32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real32_T));
        if (scopeID_varValByPtr < 2) {
            xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T)));
        }



        get_twoKi_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_varValByPtr > 0) {
            if (xilWriteData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(varValByPtr);

        break;
    }

    case 8:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real32_T *varValByPtr = (real32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real32_T));
        xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T)));



        set_twoKi_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        free(varValByPtr);

        break;
    }

    case 9:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real32_T *varValByPtr = (real32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real32_T));
        if (scopeID_varValByPtr < 2) {
            xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T)));
        }



        get_q3_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_varValByPtr > 0) {
            if (xilWriteData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(varValByPtr);

        break;
    }

    case 10:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real32_T *varValByPtr = (real32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real32_T));
        xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T)));



        set_q3_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        free(varValByPtr);

        break;
    }

    case 11:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        int32_T *varValByPtr = (int32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(int32_T));
        if (scopeID_varValByPtr < 2) {
            xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(int32_T)));
        }



        get_SF_FREQ_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_varValByPtr > 0) {
            if (xilWriteData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(int32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(varValByPtr);

        break;
    }

    case 12:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real32_T *varValByPtr = (real32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real32_T));
        if (scopeID_varValByPtr < 2) {
            xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T)));
        }



        get_q0_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_varValByPtr > 0) {
            if (xilWriteData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(varValByPtr);

        break;
    }

    case 13:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real32_T *varValByPtr = (real32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real32_T));
        xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T)));



        set_q0_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        free(varValByPtr);

        break;
    }

    case 14:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real32_T *varValByPtr = (real32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real32_T));
        if (scopeID_varValByPtr < 2) {
            xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T)));
        }



        get_twoKp_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_varValByPtr > 0) {
            if (xilWriteData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(varValByPtr);

        break;
    }

    case 15:
    {
        uint32_T dataWidth_varValByPtr = 0;
        xilReadData((MemUnit_T *) &dataWidth_varValByPtr, sizeData);
        uint8_T scopeID_varValByPtr = 0;
        xilReadData((MemUnit_T *) &scopeID_varValByPtr, sizeScopeID);
        real32_T *varValByPtr = (real32_T *) calloc((size_t) dataWidth_varValByPtr, sizeof(real32_T));
        xilReadData((MemUnit_T *) varValByPtr, dataWidth_varValByPtr * ((uint32_T) sizeof(real32_T)));



        set_twoKp_val_Ot0CAsNmzP502AtDFUhkED(varValByPtr);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        free(varValByPtr);

        break;
    }

    case 16:
    {
        uint32_T dataWidth_out = 0;
        xilReadData((MemUnit_T *) &dataWidth_out, sizeData);
        uint8_T scopeID_out = 0;
        xilReadData((MemUnit_T *) &scopeID_out, sizeScopeID);
        int32_T out = 0;

        uint32_T dataWidth_A = 0;
        xilReadData((MemUnit_T *) &dataWidth_A, sizeData);
        uint8_T scopeID_A = 0;
        xilReadData((MemUnit_T *) &scopeID_A, sizeScopeID);
        real32_T *A = (real32_T *) calloc((size_t) dataWidth_A, sizeof(real32_T));
        if (scopeID_A < 2) {
            xilReadData((MemUnit_T *) A, dataWidth_A * ((uint32_T) sizeof(real32_T)));
        }

        uint32_T dataWidth_row = 0;
        xilReadData((MemUnit_T *) &dataWidth_row, sizeData);
        uint8_T scopeID_row = 0;
        xilReadData((MemUnit_T *) &scopeID_row, sizeScopeID);
        int32_T row = 0;
        xilReadData((MemUnit_T *) &row, (uint32_T) sizeof(int32_T));



        out = inv_Ot0CAsNmzP502AtDFUhkED(A, row);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (xilWriteData((MemUnit_T *) &out, (uint32_T) sizeof(int32_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_A > 0) {
            if (xilWriteData((MemUnit_T *) A, dataWidth_A * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(A);

        break;
    }

    case 17:
    {
        uint32_T dataWidth_A = 0;
        xilReadData((MemUnit_T *) &dataWidth_A, sizeData);
        uint8_T scopeID_A = 0;
        xilReadData((MemUnit_T *) &scopeID_A, sizeScopeID);
        real32_T *A = (real32_T *) calloc((size_t) dataWidth_A, sizeof(real32_T));
        if (scopeID_A < 2) {
            xilReadData((MemUnit_T *) A, dataWidth_A * ((uint32_T) sizeof(real32_T)));
        }

        uint32_T dataWidth_row = 0;
        xilReadData((MemUnit_T *) &dataWidth_row, sizeData);
        uint8_T scopeID_row = 0;
        xilReadData((MemUnit_T *) &scopeID_row, sizeScopeID);
        int32_T row = 0;
        xilReadData((MemUnit_T *) &row, (uint32_T) sizeof(int32_T));

        uint32_T dataWidth_column = 0;
        xilReadData((MemUnit_T *) &dataWidth_column, sizeData);
        uint8_T scopeID_column = 0;
        xilReadData((MemUnit_T *) &scopeID_column, sizeScopeID);
        int32_T column = 0;
        xilReadData((MemUnit_T *) &column, (uint32_T) sizeof(int32_T));



        tran_Ot0CAsNmzP502AtDFUhkED(A, row, column);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_A > 0) {
            if (xilWriteData((MemUnit_T *) A, dataWidth_A * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(A);

        break;
    }

    case 18:
    {
        uint32_T dataWidth_A = 0;
        xilReadData((MemUnit_T *) &dataWidth_A, sizeData);
        uint8_T scopeID_A = 0;
        xilReadData((MemUnit_T *) &scopeID_A, sizeScopeID);
        real32_T *A = (real32_T *) calloc((size_t) dataWidth_A, sizeof(real32_T));
        if (scopeID_A < 2) {
            xilReadData((MemUnit_T *) A, dataWidth_A * ((uint32_T) sizeof(real32_T)));
        }

        uint32_T dataWidth_B = 0;
        xilReadData((MemUnit_T *) &dataWidth_B, sizeData);
        uint8_T scopeID_B = 0;
        xilReadData((MemUnit_T *) &scopeID_B, sizeScopeID);
        real32_T *B = (real32_T *) calloc((size_t) dataWidth_B, sizeof(real32_T));
        if (scopeID_B < 2) {
            xilReadData((MemUnit_T *) B, dataWidth_B * ((uint32_T) sizeof(real32_T)));
        }

        uint32_T dataWidth_C = 0;
        xilReadData((MemUnit_T *) &dataWidth_C, sizeData);
        uint8_T scopeID_C = 0;
        xilReadData((MemUnit_T *) &scopeID_C, sizeScopeID);
        real32_T *C = (real32_T *) calloc((size_t) dataWidth_C, sizeof(real32_T));
        if (scopeID_C < 2) {
            xilReadData((MemUnit_T *) C, dataWidth_C * ((uint32_T) sizeof(real32_T)));
        }

        uint32_T dataWidth_row_a = 0;
        xilReadData((MemUnit_T *) &dataWidth_row_a, sizeData);
        uint8_T scopeID_row_a = 0;
        xilReadData((MemUnit_T *) &scopeID_row_a, sizeScopeID);
        int32_T row_a = 0;
        xilReadData((MemUnit_T *) &row_a, (uint32_T) sizeof(int32_T));

        uint32_T dataWidth_column_a = 0;
        xilReadData((MemUnit_T *) &dataWidth_column_a, sizeData);
        uint8_T scopeID_column_a = 0;
        xilReadData((MemUnit_T *) &scopeID_column_a, sizeScopeID);
        int32_T column_a = 0;
        xilReadData((MemUnit_T *) &column_a, (uint32_T) sizeof(int32_T));

        uint32_T dataWidth_column_b = 0;
        xilReadData((MemUnit_T *) &dataWidth_column_b, sizeData);
        uint8_T scopeID_column_b = 0;
        xilReadData((MemUnit_T *) &scopeID_column_b, sizeScopeID);
        int32_T column_b = 0;
        xilReadData((MemUnit_T *) &column_b, (uint32_T) sizeof(int32_T));



        mul_Ot0CAsNmzP502AtDFUhkED(A, B, C, row_a, column_a, column_b);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_A > 0) {
            if (xilWriteData((MemUnit_T *) A, dataWidth_A * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        if (scopeID_B > 0) {
            if (xilWriteData((MemUnit_T *) B, dataWidth_B * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        if (scopeID_C > 0) {
            if (xilWriteData((MemUnit_T *) C, dataWidth_C * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(A);
        free(B);
        free(C);

        break;
    }

    case 19:
    {
        uint32_T dataWidth_out = 0;
        xilReadData((MemUnit_T *) &dataWidth_out, sizeData);
        uint8_T scopeID_out = 0;
        xilReadData((MemUnit_T *) &scopeID_out, sizeScopeID);
        uint8_T out = 0;

        uint32_T dataWidth_A = 0;
        xilReadData((MemUnit_T *) &dataWidth_A, sizeData);
        uint8_T scopeID_A = 0;
        xilReadData((MemUnit_T *) &scopeID_A, sizeScopeID);
        real32_T *A = (real32_T *) calloc((size_t) dataWidth_A, sizeof(real32_T));
        if (scopeID_A < 2) {
            xilReadData((MemUnit_T *) A, dataWidth_A * ((uint32_T) sizeof(real32_T)));
        }

        uint32_T dataWidth_LU = 0;
        xilReadData((MemUnit_T *) &dataWidth_LU, sizeData);
        uint8_T scopeID_LU = 0;
        xilReadData((MemUnit_T *) &scopeID_LU, sizeScopeID);
        real32_T *LU = (real32_T *) calloc((size_t) dataWidth_LU, sizeof(real32_T));
        if (scopeID_LU < 2) {
            xilReadData((MemUnit_T *) LU, dataWidth_LU * ((uint32_T) sizeof(real32_T)));
        }

        uint32_T dataWidth_P = 0;
        xilReadData((MemUnit_T *) &dataWidth_P, sizeData);
        uint8_T scopeID_P = 0;
        xilReadData((MemUnit_T *) &scopeID_P, sizeScopeID);
        int32_T *P = (int32_T *) calloc((size_t) dataWidth_P, sizeof(int32_T));
        if (scopeID_P < 2) {
            xilReadData((MemUnit_T *) P, dataWidth_P * ((uint32_T) sizeof(int32_T)));
        }

        uint32_T dataWidth_row = 0;
        xilReadData((MemUnit_T *) &dataWidth_row, sizeData);
        uint8_T scopeID_row = 0;
        xilReadData((MemUnit_T *) &scopeID_row, sizeScopeID);
        int32_T row = 0;
        xilReadData((MemUnit_T *) &row, (uint32_T) sizeof(int32_T));



        out = lup_Ot0CAsNmzP502AtDFUhkED(A, LU, P, row);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (xilWriteData((MemUnit_T *) &out, (uint32_T) sizeof(uint8_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_A > 0) {
            if (xilWriteData((MemUnit_T *) A, dataWidth_A * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        if (scopeID_LU > 0) {
            if (xilWriteData((MemUnit_T *) LU, dataWidth_LU * ((uint32_T) sizeof(real32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        if (scopeID_P > 0) {
            if (xilWriteData((MemUnit_T *) P, dataWidth_P * ((uint32_T) sizeof(int32_T))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(A);
        free(LU);
        free(P);

        break;
    }

    case 20:
    {
        uint32_T dataWidth_gx = 0;
        xilReadData((MemUnit_T *) &dataWidth_gx, sizeData);
        uint8_T scopeID_gx = 0;
        xilReadData((MemUnit_T *) &scopeID_gx, sizeScopeID);
        real32_T gx = 0;
        xilReadData((MemUnit_T *) &gx, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_gy = 0;
        xilReadData((MemUnit_T *) &dataWidth_gy, sizeData);
        uint8_T scopeID_gy = 0;
        xilReadData((MemUnit_T *) &scopeID_gy, sizeScopeID);
        real32_T gy = 0;
        xilReadData((MemUnit_T *) &gy, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_gz = 0;
        xilReadData((MemUnit_T *) &dataWidth_gz, sizeData);
        uint8_T scopeID_gz = 0;
        xilReadData((MemUnit_T *) &scopeID_gz, sizeScopeID);
        real32_T gz = 0;
        xilReadData((MemUnit_T *) &gz, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_ax = 0;
        xilReadData((MemUnit_T *) &dataWidth_ax, sizeData);
        uint8_T scopeID_ax = 0;
        xilReadData((MemUnit_T *) &scopeID_ax, sizeScopeID);
        real32_T ax = 0;
        xilReadData((MemUnit_T *) &ax, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_ay = 0;
        xilReadData((MemUnit_T *) &dataWidth_ay, sizeData);
        uint8_T scopeID_ay = 0;
        xilReadData((MemUnit_T *) &scopeID_ay, sizeScopeID);
        real32_T ay = 0;
        xilReadData((MemUnit_T *) &ay, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_az = 0;
        xilReadData((MemUnit_T *) &dataWidth_az, sizeData);
        uint8_T scopeID_az = 0;
        xilReadData((MemUnit_T *) &scopeID_az, sizeScopeID);
        real32_T az = 0;
        xilReadData((MemUnit_T *) &az, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_mx = 0;
        xilReadData((MemUnit_T *) &dataWidth_mx, sizeData);
        uint8_T scopeID_mx = 0;
        xilReadData((MemUnit_T *) &scopeID_mx, sizeScopeID);
        real32_T mx = 0;
        xilReadData((MemUnit_T *) &mx, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_my = 0;
        xilReadData((MemUnit_T *) &dataWidth_my, sizeData);
        uint8_T scopeID_my = 0;
        xilReadData((MemUnit_T *) &scopeID_my, sizeScopeID);
        real32_T my = 0;
        xilReadData((MemUnit_T *) &my, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_mz = 0;
        xilReadData((MemUnit_T *) &dataWidth_mz, sizeData);
        uint8_T scopeID_mz = 0;
        xilReadData((MemUnit_T *) &scopeID_mz, sizeScopeID);
        real32_T mz = 0;
        xilReadData((MemUnit_T *) &mz, (uint32_T) sizeof(real32_T));



        MahonyAHRSupdate_Ot0CAsNmzP502AtDFUhkED(gx, gy, gz, ax, ay, az, mx, my, mz);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }


        break;
    }

    case 21:
    {
        uint32_T dataWidth_gx = 0;
        xilReadData((MemUnit_T *) &dataWidth_gx, sizeData);
        uint8_T scopeID_gx = 0;
        xilReadData((MemUnit_T *) &scopeID_gx, sizeScopeID);
        real32_T gx = 0;
        xilReadData((MemUnit_T *) &gx, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_gy = 0;
        xilReadData((MemUnit_T *) &dataWidth_gy, sizeData);
        uint8_T scopeID_gy = 0;
        xilReadData((MemUnit_T *) &scopeID_gy, sizeScopeID);
        real32_T gy = 0;
        xilReadData((MemUnit_T *) &gy, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_gz = 0;
        xilReadData((MemUnit_T *) &dataWidth_gz, sizeData);
        uint8_T scopeID_gz = 0;
        xilReadData((MemUnit_T *) &scopeID_gz, sizeScopeID);
        real32_T gz = 0;
        xilReadData((MemUnit_T *) &gz, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_ax = 0;
        xilReadData((MemUnit_T *) &dataWidth_ax, sizeData);
        uint8_T scopeID_ax = 0;
        xilReadData((MemUnit_T *) &scopeID_ax, sizeScopeID);
        real32_T ax = 0;
        xilReadData((MemUnit_T *) &ax, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_ay = 0;
        xilReadData((MemUnit_T *) &dataWidth_ay, sizeData);
        uint8_T scopeID_ay = 0;
        xilReadData((MemUnit_T *) &scopeID_ay, sizeScopeID);
        real32_T ay = 0;
        xilReadData((MemUnit_T *) &ay, (uint32_T) sizeof(real32_T));

        uint32_T dataWidth_az = 0;
        xilReadData((MemUnit_T *) &dataWidth_az, sizeData);
        uint8_T scopeID_az = 0;
        xilReadData((MemUnit_T *) &scopeID_az, sizeScopeID);
        real32_T az = 0;
        xilReadData((MemUnit_T *) &az, (uint32_T) sizeof(real32_T));



        MahonyAHRSupdateIMU_Ot0CAsNmzP502AtDFUhkED(gx, gy, gz, ax, ay, az);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }


        break;
    }

    case 22:
    {
        uint32_T dataWidth_out = 0;
        xilReadData((MemUnit_T *) &dataWidth_out, sizeData);
        uint8_T scopeID_out = 0;
        xilReadData((MemUnit_T *) &scopeID_out, sizeScopeID);
        SFError_t out;

        uint32_T dataWidth_iterData = 0;
        xilReadData((MemUnit_T *) &dataWidth_iterData, sizeData);
        uint8_T scopeID_iterData = 0;
        xilReadData((MemUnit_T *) &scopeID_iterData, sizeScopeID);
        SFIterationData_t *iterData = (SFIterationData_t *) calloc((size_t) dataWidth_iterData, sizeof(SFIterationData_t));
        if (scopeID_iterData < 2) {
            xilReadData((MemUnit_T *) iterData, dataWidth_iterData * ((uint32_T) sizeof(SFIterationData_t)));
        }



        out = SF_Init_Ot0CAsNmzP502AtDFUhkED(iterData);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (xilWriteData((MemUnit_T *) &out, (uint32_T) sizeof(SFError_t)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_iterData > 0) {
            if (xilWriteData((MemUnit_T *) iterData, dataWidth_iterData * ((uint32_T) sizeof(SFIterationData_t))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(iterData);

        break;
    }

    case 23:
    {
        uint32_T dataWidth_out = 0;
        xilReadData((MemUnit_T *) &dataWidth_out, sizeData);
        uint8_T scopeID_out = 0;
        xilReadData((MemUnit_T *) &scopeID_out, sizeScopeID);
        SFError_t out;

        uint32_T dataWidth_imuData = 0;
        xilReadData((MemUnit_T *) &dataWidth_imuData, sizeData);
        uint8_T scopeID_imuData = 0;
        xilReadData((MemUnit_T *) &scopeID_imuData, sizeScopeID);
        IMU_Data_t *imuData = (IMU_Data_t *) calloc((size_t) dataWidth_imuData, sizeof(IMU_Data_t));
        if (scopeID_imuData < 2) {
            xilReadData((MemUnit_T *) imuData, dataWidth_imuData * ((uint32_T) sizeof(IMU_Data_t)));
        }

        uint32_T dataWidth_GpsData = 0;
        xilReadData((MemUnit_T *) &dataWidth_GpsData, sizeData);
        uint8_T scopeID_GpsData = 0;
        xilReadData((MemUnit_T *) &scopeID_GpsData, sizeScopeID);
        Gps_Data_t *GpsData = (Gps_Data_t *) calloc((size_t) dataWidth_GpsData, sizeof(Gps_Data_t));
        if (scopeID_GpsData < 2) {
            xilReadData((MemUnit_T *) GpsData, dataWidth_GpsData * ((uint32_T) sizeof(Gps_Data_t)));
        }

        uint32_T dataWidth_altimeterData = 0;
        xilReadData((MemUnit_T *) &dataWidth_altimeterData, sizeData);
        uint8_T scopeID_altimeterData = 0;
        xilReadData((MemUnit_T *) &scopeID_altimeterData, sizeScopeID);
        Altimeter_Data_t *altimeterData = (Altimeter_Data_t *) calloc((size_t) dataWidth_altimeterData, sizeof(Altimeter_Data_t));
        if (scopeID_altimeterData < 2) {
            xilReadData((MemUnit_T *) altimeterData, dataWidth_altimeterData * ((uint32_T) sizeof(Altimeter_Data_t)));
        }

        uint32_T dataWidth_iterData = 0;
        xilReadData((MemUnit_T *) &dataWidth_iterData, sizeData);
        uint8_T scopeID_iterData = 0;
        xilReadData((MemUnit_T *) &scopeID_iterData, sizeScopeID);
        SFIterationData_t *iterData = (SFIterationData_t *) calloc((size_t) dataWidth_iterData, sizeof(SFIterationData_t));
        if (scopeID_iterData < 2) {
            xilReadData((MemUnit_T *) iterData, dataWidth_iterData * ((uint32_T) sizeof(SFIterationData_t)));
        }

        uint32_T dataWidth_SFoutput = 0;
        xilReadData((MemUnit_T *) &dataWidth_SFoutput, sizeData);
        uint8_T scopeID_SFoutput = 0;
        xilReadData((MemUnit_T *) &scopeID_SFoutput, sizeScopeID);
        SFOutput_t *SFoutput = (SFOutput_t *) calloc((size_t) dataWidth_SFoutput, sizeof(SFOutput_t));
        if (scopeID_SFoutput < 2) {
            xilReadData((MemUnit_T *) SFoutput, dataWidth_SFoutput * ((uint32_T) sizeof(SFOutput_t)));
        }



        out = SF_GenerateNewResult_Ot0CAsNmzP502AtDFUhkED(imuData, GpsData, altimeterData, iterData, SFoutput);



        MemUnit_T responseId = XIL_RESPONSE_OUTPUT_DATA;
        if (xilWriteData(&responseId, (uint32_T) sizeof(MemUnit_T)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (xilWriteData((MemUnit_T *) &out, (uint32_T) sizeof(SFError_t)) != XIL_DATA_STREAM_SUCCESS) {
            return XIL_INTERFACE_COMMS_FAILURE;
        }

        if (scopeID_imuData > 0) {
            if (xilWriteData((MemUnit_T *) imuData, dataWidth_imuData * ((uint32_T) sizeof(IMU_Data_t))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        if (scopeID_GpsData > 0) {
            if (xilWriteData((MemUnit_T *) GpsData, dataWidth_GpsData * ((uint32_T) sizeof(Gps_Data_t))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        if (scopeID_altimeterData > 0) {
            if (xilWriteData((MemUnit_T *) altimeterData, dataWidth_altimeterData * ((uint32_T) sizeof(Altimeter_Data_t))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        if (scopeID_iterData > 0) {
            if (xilWriteData((MemUnit_T *) iterData, dataWidth_iterData * ((uint32_T) sizeof(SFIterationData_t))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        if (scopeID_SFoutput > 0) {
            if (xilWriteData((MemUnit_T *) SFoutput, dataWidth_SFoutput * ((uint32_T) sizeof(SFOutput_t))) != XIL_DATA_STREAM_SUCCESS) {
                return XIL_INTERFACE_COMMS_FAILURE;
            }
        }

        free(imuData);
        free(GpsData);
        free(altimeterData);
        free(iterData);
        free(SFoutput);

        break;
    }

    default:
        return XIL_INTERFACE_UNKNOWN_FCNID;
    }

    return XIL_INTERFACE_SUCCESS;
}

XIL_INTERFACE_ERROR_CODE xilGetTargetToHostData(uint32_T xilFcnId, XIL_COMMAND_TYPE_ENUM xilCommandType, uint32_T xilCommandIdx, XILIOData **xilIOData, MemUnit_T responseId, uint32_T serverFcnId)
{
    UNUSED_PARAMETER(xilFcnId);
    UNUSED_PARAMETER(xilCommandType);
    UNUSED_PARAMETER(xilCommandIdx);
    UNUSED_PARAMETER(xilIOData);
    UNUSED_PARAMETER(responseId);
    UNUSED_PARAMETER(serverFcnId);

    return XIL_INTERFACE_UNKNOWN_TID;
}

XIL_INTERFACE_ERROR_CODE xilGetTargetToHostPreData(uint32_T xilFcnId, XIL_COMMAND_TYPE_ENUM xilCommandType, uint32_T xilCommandIdx, XILIOData **xilIOData, MemUnit_T responseId, uint32_T serverFcnId)
{
    UNUSED_PARAMETER(xilFcnId);
    UNUSED_PARAMETER(xilCommandType);
    UNUSED_PARAMETER(xilCommandIdx);
    UNUSED_PARAMETER(xilIOData);
    UNUSED_PARAMETER(responseId);
    UNUSED_PARAMETER(serverFcnId);

    return XIL_INTERFACE_UNKNOWN_TID;
}

