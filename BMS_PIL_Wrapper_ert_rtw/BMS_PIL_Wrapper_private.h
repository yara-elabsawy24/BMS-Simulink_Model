/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_PIL_Wrapper_private.h
 *
 * Code generated for Simulink model 'BMS_PIL_Wrapper'.
 *
 * Model version                  : 1.23
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Thu Jun  4 17:02:28 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef BMS_PIL_Wrapper_private_h_
#define BMS_PIL_Wrapper_private_h_
#include "rtwtypes.h"
#include "BMS_PIL_Wrapper_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern const real_T rtCP_pooled_D57GMyXJLoUt[6];
extern const real_T rtCP_pooled_lzaKVCEKHjK9[6];

#define rtCP_LookUpTable1_tableData    rtCP_pooled_D57GMyXJLoUt  /* Expression: rep_seq_y
                                                                  * Referenced by: '<S17>/Look-Up Table1'
                                                                  */
#define rtCP_LookUpTable1_bp01Data     rtCP_pooled_lzaKVCEKHjK9  /* Expression: rep_seq_t - min(rep_seq_t)
                                                                  * Referenced by: '<S17>/Look-Up Table1'
                                                                  */
#endif                                 /* BMS_PIL_Wrapper_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
