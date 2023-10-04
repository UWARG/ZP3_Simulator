#include "customcode_ObVVTBqNLEhv4YNf1XieOE.h"
#ifdef __cplusplus
extern "C" {
#endif


/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
DLL_EXPORT_CC extern void get_q1_addr_ObVVTBqNLEhv4YNf1XieOE(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_ZP_PI_addr_ObVVTBqNLEhv4YNf1XieOE(const real_T **varAddr);
DLL_EXPORT_CC extern void get_SF_FREQ_addr_ObVVTBqNLEhv4YNf1XieOE(const int32_T **varAddr);
DLL_EXPORT_CC extern void get_twoKp_addr_ObVVTBqNLEhv4YNf1XieOE(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_twoKi_addr_ObVVTBqNLEhv4YNf1XieOE(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_q2_addr_ObVVTBqNLEhv4YNf1XieOE(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_q3_addr_ObVVTBqNLEhv4YNf1XieOE(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_q0_addr_ObVVTBqNLEhv4YNf1XieOE(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_ZP_E_addr_ObVVTBqNLEhv4YNf1XieOE(const real_T **varAddr);
DLL_EXPORT_CC extern const char_T *get_dll_checksum_ObVVTBqNLEhv4YNf1XieOE(void);
DLL_EXPORT_CC extern int32_T inv_ObVVTBqNLEhv4YNf1XieOE(real32_T *A, int32_T row);
DLL_EXPORT_CC extern void tran_ObVVTBqNLEhv4YNf1XieOE(real32_T *A, int32_T row, int32_T column);
DLL_EXPORT_CC extern void mul_ObVVTBqNLEhv4YNf1XieOE(real32_T *A, real32_T *B, real32_T *C, int32_T row_a, int32_T column_a, int32_T column_b);
DLL_EXPORT_CC extern uint8_T lup_ObVVTBqNLEhv4YNf1XieOE(real32_T *A, real32_T *LU, int32_T *P, int32_T row);
DLL_EXPORT_CC extern void MahonyAHRSupdate_ObVVTBqNLEhv4YNf1XieOE(real32_T gx, real32_T gy, real32_T gz, real32_T ax, real32_T ay, real32_T az, real32_T mx, real32_T my, real32_T mz);
DLL_EXPORT_CC extern void MahonyAHRSupdateIMU_ObVVTBqNLEhv4YNf1XieOE(real32_T gx, real32_T gy, real32_T gz, real32_T ax, real32_T ay, real32_T az);
DLL_EXPORT_CC extern SFError_t SF_Init_ObVVTBqNLEhv4YNf1XieOE(SFIterationData_t *iterData);
DLL_EXPORT_CC extern SFError_t SF_GenerateNewResult_ObVVTBqNLEhv4YNf1XieOE(IMU_Data_t *imuData, Gps_Data_t *GpsData, Altimeter_Data_t *altimeterData, SFIterationData_t *iterData);
DLL_EXPORT_CC extern SFError_t SF_GetResult_ObVVTBqNLEhv4YNf1XieOE(SFOutput_t *SFoutput);

/* Function Definitions */
DLL_EXPORT_CC const uint8_T *get_checksum_source_info(int32_T *size);
#ifdef __cplusplus
}
#endif

