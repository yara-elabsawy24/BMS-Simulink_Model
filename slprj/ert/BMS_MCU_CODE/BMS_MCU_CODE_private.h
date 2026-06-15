/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_MCU_CODE_private.h
 *
 * Code generated for Simulink model 'BMS_MCU_CODE'.
 *
 * Model version                  : 1.43
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Mon Jun 15 12:57:48 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BMS_MCU_CODE_private_h_
#define BMS_MCU_CODE_private_h_
#include "rtwtypes.h"
#include "BMS_MCU_CODE_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

extern const real_T rtCP_pooled_LE05XBL4ZbcQ[9];
extern const real_T rtCP_pooled_s9pOilnAAikZ[9];
extern const real32_T rtCP_pooled_Vp3dDlogzZPT[55];
extern const real32_T rtCP_pooled_U8gMvKvP0Ntk[11];
extern const real32_T rtCP_pooled_bfo3unVYSfcO[5];

#define rtCP_uDLookupTable_tableData   rtCP_pooled_LE05XBL4ZbcQ  /* Expression: [0.0, 0.1, 0.25, 0.45, 0.62, 0.78, 0.88, 0.95, 1.0]
                                                                  * Referenced by: '<S2>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data    rtCP_pooled_s9pOilnAAikZ  /* Expression: [3.0, 3.4, 3.6, 3.7, 3.8, 3.9, 4.0, 4.1, 4.2]
                                                                  * Referenced by: '<S2>/1-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_tableData_a rtCP_pooled_Vp3dDlogzZPT  /* Computed Parameter: rtCP_uDLookupTable_tableData_a
                                                                  * Referenced by: '<S4>/2-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp01Data_m  rtCP_pooled_U8gMvKvP0Ntk  /* Computed Parameter: rtCP_uDLookupTable_bp01Data_m
                                                                  * Referenced by: '<S4>/2-D Lookup Table'
                                                                  */
#define rtCP_uDLookupTable_bp02Data    rtCP_pooled_bfo3unVYSfcO  /* Computed Parameter: rtCP_uDLookupTable_bp02Data
                                                                  * Referenced by: '<S4>/2-D Lookup Table'
                                                                  */
#endif                                 /* BMS_MCU_CODE_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
