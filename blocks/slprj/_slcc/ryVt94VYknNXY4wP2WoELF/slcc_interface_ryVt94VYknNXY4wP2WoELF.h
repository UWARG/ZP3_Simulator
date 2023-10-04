#include "customcode_ryVt94VYknNXY4wP2WoELF.h"
#ifdef __cplusplus
extern "C" {
#endif


/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
DLL_EXPORT_CC extern void get_twoKi_addr_ryVt94VYknNXY4wP2WoELF(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_q1_addr_ryVt94VYknNXY4wP2WoELF(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_q2_addr_ryVt94VYknNXY4wP2WoELF(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_q0_addr_ryVt94VYknNXY4wP2WoELF(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_ZP_PI_addr_ryVt94VYknNXY4wP2WoELF(const real_T **varAddr);
DLL_EXPORT_CC extern void get_ZP_E_addr_ryVt94VYknNXY4wP2WoELF(const real_T **varAddr);
DLL_EXPORT_CC extern void get_twoKp_addr_ryVt94VYknNXY4wP2WoELF(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_q3_addr_ryVt94VYknNXY4wP2WoELF(volatile real32_T **varAddr);
DLL_EXPORT_CC extern void get_SF_FREQ_addr_ryVt94VYknNXY4wP2WoELF(const int32_T **varAddr);
DLL_EXPORT_CC extern const char_T *get_dll_checksum_ryVt94VYknNXY4wP2WoELF(void);
DLL_EXPORT_CC extern int32_T inv_ryVt94VYknNXY4wP2WoELF(real32_T *A, int32_T row);
DLL_EXPORT_CC extern void tran_ryVt94VYknNXY4wP2WoELF(real32_T *A, int32_T row, int32_T column);
DLL_EXPORT_CC extern void mul_ryVt94VYknNXY4wP2WoELF(real32_T *A, real32_T *B, real32_T *C, int32_T row_a, int32_T column_a, int32_T column_b);
DLL_EXPORT_CC extern uint8_T lup_ryVt94VYknNXY4wP2WoELF(real32_T *A, real32_T *LU, int32_T *P, int32_T row);
DLL_EXPORT_CC extern void MahonyAHRSupdate_ryVt94VYknNXY4wP2WoELF(real32_T gx, real32_T gy, real32_T gz, real32_T ax, real32_T ay, real32_T az, real32_T mx, real32_T my, real32_T mz);
DLL_EXPORT_CC extern void MahonyAHRSupdateIMU_ryVt94VYknNXY4wP2WoELF(real32_T gx, real32_T gy, real32_T gz, real32_T ax, real32_T ay, real32_T az);
DLL_EXPORT_CC extern SFError_t SF_Init_ryVt94VYknNXY4wP2WoELF(SFIterationData_t *iterData);
DLL_EXPORT_CC extern SFError_t SF_GenerateNewResult_ryVt94VYknNXY4wP2WoELF(IMU_Data_t *imuData, Gps_Data_t *GpsData, Altimeter_Data_t *altimeterData, SFIterationData_t *iterData, SFOutput_t *SFoutput);

/* Function Definitions */
DLL_EXPORT_CC const uint8_T *get_checksum_source_info(int32_T *size);
#ifdef __cplusplus
}
#endif

