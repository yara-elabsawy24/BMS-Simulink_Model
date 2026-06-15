/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_MCU_CODE_data.c
 *
 * Code generated for Simulink model 'BMS_MCU_CODE'.
 *
 * Model version                  : 1.65
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Sun Jun 14 19:53:17 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BMS_MCU_CODE.h"

/* Block parameters (default storage) */
P_BMS_MCU_CODE_T BMS_MCU_CODE_P = {
  /* Mask Parameter: CompareToConstant4_const
   * Referenced by: '<S6>/Constant'
   */
  3.0,

  /* Mask Parameter: WrapToZero_Threshold
   * Referenced by: '<S13>/FixPt Switch'
   */
  65535U,

  /* Mask Parameter: WrapToZero_Threshold_l
   * Referenced by: '<S11>/FixPt Switch'
   */
  37U,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S2>/Constant'
   */
  1U,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S3>/Constant'
   */
  15U,

  /* Mask Parameter: CompareToConstant2_const
   * Referenced by: '<S4>/Constant'
   */
  16U,

  /* Mask Parameter: CompareToConstant3_const
   * Referenced by: '<S5>/Constant'
   */
  34U,

  /* Expression: 0
   * Referenced by: '<Root>/Constant'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant1'
   */
  1.0,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S13>/Constant'
   */
  0U,

  /* Computed Parameter: Bias_Bias
   * Referenced by: '<Root>/Bias'
   */
  1U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S7>/Output'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S12>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_k
   * Referenced by: '<S11>/Constant'
   */
  0U,

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant8'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant9'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant10'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant11'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant12'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant32'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant33'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([131 224 0 0 22])
   * Referenced by: '<S1>/Constant13'
   */
  { 131U, 224U, 0U, 0U, 22U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant14'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant24'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([131 236 0 0 16])
   * Referenced by: '<S1>/Constant'
   */
  { 131U, 236U, 0U, 0U, 16U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant25'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant26'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant27'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant28'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant29'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant30'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant31'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant15'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant16'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant17'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant1'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant18'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant19'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant20'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant21'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant22'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant23'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant2'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant3'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant4'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant5'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant6'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<S1>/Constant7'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([192 4 8 0 21])
   * Referenced by: '<Root>/Constant2'
   */
  { 192U, 4U, 8U, 0U, 21U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<Root>/Constant3'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8([130 4 0 0 23])
   * Referenced by: '<Root>/Constant4'
   */
  { 130U, 4U, 0U, 0U, 23U },

  /* Expression: uint8([0 0 0 0 0])
   * Referenced by: '<Root>/Constant5'
   */
  { 0U, 0U, 0U, 0U, 0U },

  /* Computed Parameter: Output_InitialCondition_n
   * Referenced by: '<S9>/Output'
   */
  0U,

  /* Computed Parameter: Bias_Bias_b
   * Referenced by: '<S1>/Bias'
   */
  1U,

  /* Computed Parameter: FixPtConstant_Value_l
   * Referenced by: '<S10>/FixPt Constant'
   */
  1U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
