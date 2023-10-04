#include "customcode_C1VmiExgWK641wDgbafS5C.h"
#ifdef __cplusplus
extern "C" {
#endif


/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
DLL_EXPORT_CC extern void get_q0_addr_C1VmiExgWK641wDgbafS5C(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_ZP_E_addr_C1VmiExgWK641wDgbafS5C(const real_T **varAddr);
DLL_EXPORT_CC extern void get_q3_addr_C1VmiExgWK641wDgbafS5C(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_ZP_PI_addr_C1VmiExgWK641wDgbafS5C(const real_T **varAddr);
DLL_EXPORT_CC extern void get_twoKi_addr_C1VmiExgWK641wDgbafS5C(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_SF_FREQ_addr_C1VmiExgWK641wDgbafS5C(const int32_T **varAddr);
DLL_EXPORT_CC extern void get_q1_addr_C1VmiExgWK641wDgbafS5C(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_twoKp_addr_C1VmiExgWK641wDgbafS5C(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_q2_addr_C1VmiExgWK641wDgbafS5C(volatile real32_T **varAddr);
DLL_EXPORT_CC extern const char_T *get_dll_checksum_C1VmiExgWK641wDgbafS5C(void);
DLL_EXPORT_CC extern int32_T inv_C1VmiExgWK641wDgbafS5C(real32_T *A, int32_T row);
DLL_EXPORT_CC extern void tran_C1VmiExgWK641wDgbafS5C(real32_T *A, int32_T row, int32_T column);
DLL_EXPORT_CC extern void mul_C1VmiExgWK641wDgbafS5C(real32_T *A, real32_T *B, real32_T *C, int32_T row_a, int32_T column_a, int32_T column_b);
DLL_EXPORT_CC extern uint8_T lup_C1VmiExgWK641wDgbafS5C(real32_T *A, real32_T *LU, int32_T *P, int32_T row);
DLL_EXPORT_CC extern void MahonyAHRSupdate_C1VmiExgWK641wDgbafS5C(real32_T gx, real32_T gy, real32_T gz, real32_T ax, real32_T ay, real32_T az, real32_T mx, real32_T my, real32_T mz);
DLL_EXPORT_CC extern void MahonyAHRSupdateIMU_C1VmiExgWK641wDgbafS5C(real32_T gx, real32_T gy, real32_T gz, real32_T ax, real32_T ay, real32_T az);
DLL_EXPORT_CC extern SFError_t SF_Init_C1VmiExgWK641wDgbafS5C(SFIterationData_t *iterData);
DLL_EXPORT_CC extern SFError_t SF_GenerateNewResult_C1VmiExgWK641wDgbafS5C(IMU_Data_t *imuData, Gps_Data_t *GpsData, Altimeter_Data_t *altimeterData, SFIterationData_t *iterData, SFOutput_t *SFoutput);

/* Function Definitions */
DLL_EXPORT_CC const uint8_T *get_checksum_source_info(int32_T *size);
#ifdef __cplusplus
}
#endif

