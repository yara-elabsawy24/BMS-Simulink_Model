/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_BIL_Wrapper_data.c
 *
 * Code generated for Simulink model 'BMS_BIL_Wrapper'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Tue Jun  9 13:26:22 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BMS_BIL_Wrapper.h"

/* Invariant block signals (default storage) */
const ConstB_BMS_BIL_Wrapper_T BMS_BIL_Wrapper_ConstB = {
  { 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 },/* '<S58>/Integer to Bit Converter' */

  { 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },/* '<S58>/Integer to Bit Converter1' */

  { 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0 },/* '<S58>/Integer to Bit Converter15' */

  { 0.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0 }/* '<S58>/Integer to Bit Converter16' */
};

/* Constant parameters (default storage) */
const ConstP_BMS_BIL_Wrapper_T BMS_BIL_Wrapper_ConstP = {
  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S5>/2-D Lookup Table'
   */
  { 0.018F, 0.015F, 0.013F, 0.012F, 0.012F, 0.012F, 0.012F, 0.012F, 0.012F,
    0.013F, 0.015F, 0.011F, 0.009F, 0.008F, 0.007F, 0.007F, 0.007F, 0.007F,
    0.007F, 0.007F, 0.008F, 0.009F, 0.005F, 0.004F, 0.003F, 0.003F, 0.003F,
    0.003F, 0.003F, 0.003F, 0.003F, 0.003F, 0.004F, 0.004F, 0.003F, 0.002F,
    0.002F, 0.002F, 0.002F, 0.002F, 0.002F, 0.002F, 0.002F, 0.003F, 0.003F,
    0.002F, 0.002F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F, 0.001F,
    0.002F },

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S5>/2-D Lookup Table'
   */
  { 0.0F, 0.1F, 0.2F, 0.3F, 0.4F, 0.5F, 0.6F, 0.7F, 0.8F, 0.9F, 1.0F },

  /* Computed Parameter: uDLookupTable_bp02Data
   * Referenced by: '<S5>/2-D Lookup Table'
   */
  { 263.15F, 273.15F, 298.15F, 313.15F, 328.15F },

  /* Computed Parameter: uDLookupTable_tableData_o
   * Referenced by: '<S74>/1-D Lookup Table'
   */
  { 0.0F, 0.1F, 0.25F, 0.45F, 0.62F, 0.78F, 0.88F, 0.95F, 1.0F },

  /* Computed Parameter: uDLookupTable_bp01Data_d
   * Referenced by: '<S74>/1-D Lookup Table'
   */
  { 3.0F, 3.4F, 3.6F, 3.7F, 3.8F, 3.9F, 4.0F, 4.1F, 4.2F },

  /* Expression: uint8([194 16 64 0 57])
   * Referenced by: '<S48>/Bal_Mode'
   */
  { 194U, 16U, 64U, 0U, 57U },

  /* Expression: uint8([194 12 32 0 55])
   * Referenced by: '<S48>/Bal_On'
   */
  { 194U, 12U, 32U, 0U, 55U },

  /* Expression: uint8([131 236 0 0 16])
   * Referenced by: '<S48>/Constant'
   */
  { 131U, 236U, 0U, 0U, 16U },

  /* Expression: uint8([131 224 0 0 22])
   * Referenced by: '<S48>/Constant13'
   */
  { 131U, 224U, 0U, 0U, 22U }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
