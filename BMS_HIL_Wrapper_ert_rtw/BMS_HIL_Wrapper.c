/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_HIL_Wrapper.c
 *
 * Code generated for Simulink model 'BMS_HIL_Wrapper'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Thu May 28 15:23:09 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BMS_HIL_Wrapper.h"
#include "rtwtypes.h"
#include "BMS_HIL_Wrapper_types.h"
#include "BMS_HIL_Wrapper_private.h"
#include "mw_stm32_spi_ll.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "multiword_types.h"
#include <float.h>

/* Named constants for Chart: '<S6>/BMS_States' */
#define BMS_HIL_Wrapper_IN_Charging    ((uint8_T)1U)
#define BMS_HIL_Wrapper_IN_Fault       ((uint8_T)2U)
#define BMS_HIL_Wrapper_IN_Flying      ((uint8_T)3U)
#define BMS_HIL_Wrapper_IN_No_OT_UT    ((uint8_T)1U)
#define BMS_HIL_Wrapper_IN_No_OV_UV    ((uint8_T)1U)
#define BMS_HIL_Wrapper_IN_OC_Fault    ((uint8_T)2U)
#define BMS_HIL_Wrapper_IN_OT_Fault    ((uint8_T)2U)
#define BMS_HIL_Wrapper_IN_OV_Fault    ((uint8_T)2U)
#define BMS_HIL_Wrapper_IN_Sensor_Fault ((uint8_T)3U)
#define BMS_HIL_Wrapper_IN_Standby     ((uint8_T)4U)
#define BMS_HIL_Wrapper_IN_UT_Fault    ((uint8_T)3U)
#define BMS_HIL_Wrapper_IN_UV_Fault    ((uint8_T)4U)
#define BMS_HIL_Wrapper_IN_Wait        ((uint8_T)3U)
#define BMS_HIL__IN_No_CurrentLim_Fault ((uint8_T)1U)

/* Named constants for Test Sequence: '<Root>/Test Sequence' */
#define BMS_HIL_Wrapper_IN_Fly         ((uint8_T)1U)
#define BMS_HIL_Wrapper_IN_step_2      ((uint8_T)2U)

/* Block signals (default storage) */
B_BMS_HIL_Wrapper_T BMS_HIL_Wrapper_B;

/* Block states (default storage) */
DW_BMS_HIL_Wrapper_T BMS_HIL_Wrapper_DW;

/* Real-time model */
static RT_MODEL_BMS_HIL_Wrapper_T BMS_HIL_Wrapper_M_;
RT_MODEL_BMS_HIL_Wrapper_T *const BMS_HIL_Wrapper_M = &BMS_HIL_Wrapper_M_;

/* Forward declaration for local functions */
static void BMS_HIL_W_SPIDrvBlock_setupImpl(stm32cube_blocks_SPIControlle_T *obj);

/* Forward declaration for local functions */
static real32_T BMS_HIL_Wrapper_maximum(const real32_T x[5]);
static real32_T BMS_HIL_Wrapper_minimum(const real32_T x[5]);
real32_T look1_iflf_binlxpw(real32_T u0, const real32_T bp0[], const real32_T
  table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T yL_0d0;
  uint32_T iLeft;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

uint32_T plook_u32ff_binx(real32_T u, const real32_T bp[], uint32_T maxIndex,
  real32_T *fraction)
{
  uint32_T bpIndex;

  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u <= bp[0U]) {
    bpIndex = 0U;
    *fraction = (u - bp[0U]) / (bp[1U] - bp[0U]);
  } else if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32f(u, bp, maxIndex >> 1U, maxIndex);
    *fraction = (u - bp[bpIndex]) / (bp[bpIndex + 1U] - bp[bpIndex]);
  } else {
    bpIndex = maxIndex - 1U;
    *fraction = (u - bp[maxIndex - 1U]) / (bp[maxIndex] - bp[maxIndex - 1U]);
  }

  return bpIndex;
}

real32_T intrp2d_fu32fl_pw(const uint32_T bpIndex[], const real32_T frac[],
  const real32_T table[], const uint32_T stride)
{
  real32_T yL_0d0;
  real32_T yL_0d1;
  uint32_T offset_1d;

  /* Column-major Interpolation 2-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  offset_1d = bpIndex[1U] * stride + bpIndex[0U];
  yL_0d0 = table[offset_1d];
  yL_0d0 += (table[offset_1d + 1U] - yL_0d0) * frac[0U];
  offset_1d += stride;
  yL_0d1 = table[offset_1d];
  return (((table[offset_1d + 1U] - yL_0d1) * frac[0U] + yL_0d1) - yL_0d0) *
    frac[1U] + yL_0d0;
}

uint32_T binsearch_u32f(real32_T u, const real32_T bp[], uint32_T startIndex,
  uint32_T maxIndex)
{
  uint32_T bpIdx;
  uint32_T bpIndex;
  uint32_T iRght;

  /* Binary Search */
  bpIdx = startIndex;
  bpIndex = 0U;
  iRght = maxIndex;
  while (iRght - bpIndex > 1U) {
    if (u < bp[bpIdx]) {
      iRght = bpIdx;
    } else {
      bpIndex = bpIdx;
    }

    bpIdx = (iRght + bpIndex) >> 1U;
  }

  return bpIndex;
}

real32_T sMultiWord2Single(const uint64_T u1[], int32_T n1, int32_T e1)
{
  int32_T exp_0;
  int32_T i;
  real32_T y;
  y = 0.0F;
  exp_0 = e1;
  if ((u1[n1 - 1] & 9223372036854775808ULL) != 0ULL) {
    uint64_T cb;
    cb = 1ULL;
    for (i = 0; i < n1; i++) {
      uint64_T u1i;
      u1i = ~u1[i];
      cb += u1i;
      y -= (real32_T)ldexp((real32_T)cb, exp_0);
      cb = (uint64_T)(cb < u1i);
      exp_0 += 64;
    }
  } else {
    for (i = 0; i < n1; i++) {
      y += (real32_T)ldexp((real32_T)u1[i], exp_0);
      exp_0 += 64;
    }
  }

  return y;
}

void sMultiWordMul(const uint64_T u1[], int32_T n1, const uint64_T u2[], int32_T
                   n2, uint64_T y[], int32_T n)
{
  uint64_T cb;
  uint64_T cb1;
  uint64_T yk;
  int32_T i;
  int32_T j;
  int32_T k;
  boolean_T isNegative1;
  boolean_T isNegative2;
  isNegative1 = ((u1[n1 - 1] & 9223372036854775808ULL) != 0ULL);
  isNegative2 = ((u2[n2 - 1] & 9223372036854775808ULL) != 0ULL);
  cb1 = 1ULL;

  /* Initialize output to zero */
  for (k = 0; k < n; k++) {
    y[k] = 0ULL;
  }

  for (i = 0; i < n1; i++) {
    uint64_T a0;
    uint64_T a1;
    uint64_T cb2;
    uint64_T u1i;
    int32_T ni;
    cb = 0ULL;
    u1i = u1[i];
    if (isNegative1) {
      u1i = ~u1i + cb1;
      cb1 = (uint64_T)(u1i < cb1);
    }

    a1 = u1i >> 32U;
    a0 = u1i & 4294967295ULL;
    cb2 = 1ULL;
    ni = n - i;
    ni = n2 <= ni ? n2 : ni;
    k = i;
    for (j = 0; j < ni; j++) {
      uint64_T b1;
      uint64_T w01;
      uint64_T w10;
      u1i = u2[j];
      if (isNegative2) {
        u1i = ~u1i + cb2;
        cb2 = (uint64_T)(u1i < cb2);
      }

      b1 = u1i >> 32U;
      u1i &= 4294967295ULL;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk = y[k] + cb;
      cb = (uint64_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (uint64_T)(yk < u1i);
      u1i = w10 << 32U;
      yk += u1i;
      cb += (uint64_T)(yk < u1i);
      u1i = w01 << 32U;
      yk += u1i;
      cb += (uint64_T)(yk < u1i);
      y[k] = yk;
      cb += w10 >> 32U;
      cb += w01 >> 32U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }

  /* Apply sign */
  if (isNegative1 != isNegative2) {
    cb = 1ULL;
    for (k = 0; k < n; k++) {
      yk = ~y[k] + cb;
      y[k] = yk;
      cb = (uint64_T)(yk < cb);
    }
  }
}

static void BMS_HIL_W_SPIDrvBlock_setupImpl(stm32cube_blocks_SPIControlle_T *obj)
{
  MW_STM32_SPI_FIFO_Access_type b_dataType;
  STM32_SPI_Struct_T * spiBlock;
  STM32_SPI_ModuleStruct_T c;

  /* Start for MATLABSystem: '<S11>/SPI Controller Transfer1' */
  c.buffer.rxBufferPtr = NULL;
  c.buffer.txBufferPtr = NULL;
  c.PeripheralPtr = SPI1;
  c.enableRxOrTx = 0U;
  c.buffer.rxBufferSize = 0U;
  c.buffer.txBufferSize = 0U;

  /* Start for MATLABSystem: '<S11>/SPI Controller Transfer1' */
  c.rxMode = SPI_RX_POLLING_MODE;
  c.txMode = SPI_TX_POLLING_MODE;
  c.rxdmaPeripheralPtr = NULL;
  c.rxdmastream = 0;
  c.txdmaPeripheralPtr = NULL;
  c.txdmastream = 0;
  obj->MW_SPI_BlockStruct.h_spi = NULL;
  obj->MW_SPI_BlockStruct.gpioPort = NULL;
  obj->MW_SPI_BlockStruct.gpioPin = 0;
  b_dataType = FIFO_ACCESS_8BIT;

  /* Start for MATLABSystem: '<S11>/SPI Controller Transfer1' */
  obj->MW_SPI_BlockStruct.chipSelectActiveLow = true;
  obj->MW_SPI_BlockStruct.dataType = b_dataType;
  obj->MW_SPI_BlockStruct.dataLength = 1.0;
  spiBlock = (STM32_SPI_Struct_T *)(&obj->MW_SPI_BlockStruct);
  obj->MW_SPI_HANDLE = SPI_STM32_Init(&c, spiBlock);
  MW_STM32_SPI_SetFormat(obj->MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
}

/* System initialize for atomic system: */
void BMS_SPIControllerTransfer1_Init(DW_SPIControllerTransfer1_BMS_T *localDW)
{
  /* Start for MATLABSystem: '<S11>/SPI Controller Transfer1' */
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.isSetupComplete = false;
  localDW->obj.isInitialized = 1;
  BMS_HIL_W_SPIDrvBlock_setupImpl(&localDW->obj);
  localDW->obj.isSetupComplete = true;
}

/* Output and update for atomic system: */
void BMS_HIL__SPIControllerTransfer1(const uint8_T rtu_0[5],
  B_SPIControllerTransfer1_BMS__T *localB, DW_SPIControllerTransfer1_BMS_T
  *localDW)
{
  int32_T i;
  uint16_T status;
  uint8_T rdDataRaw[6];
  uint8_T wrDataRaw1[6];

  /* MATLABSystem: '<S11>/SPI Controller Transfer1' */
  wrDataRaw1[0] = 0U;
  for (i = 0; i < 5; i++) {
    wrDataRaw1[i + 1] = rtu_0[i];
  }

  MW_SPI_SetSlaveSelect(localDW->obj.MW_SPI_HANDLE, 0, true);
  status = MW_STM32_SPI_SetFormat(localDW->obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    MW_SPI_ControllerWriteRead_Databits(localDW->obj.MW_SPI_HANDLE, &wrDataRaw1
      [0], &rdDataRaw[0], 0, 6U, 0, 1U);
  }

  for (i = 0; i < 5; i++) {
    /* MATLABSystem: '<S11>/SPI Controller Transfer1' */
    localB->SPIControllerTransfer1[i] = rdDataRaw[i + 1];
  }
}

/* Termination for atomic system: */
void BMS_SPIControllerTransfer1_Term(DW_SPIControllerTransfer1_BMS_T *localDW)
{
  /* Terminate for MATLABSystem: '<S11>/SPI Controller Transfer1' */
  if (!localDW->obj.matlabCodegenIsDeleted) {
    localDW->obj.matlabCodegenIsDeleted = true;
    if ((localDW->obj.isInitialized == 1) && localDW->obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(localDW->obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, MW_UNDEFINED_VALUE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S11>/SPI Controller Transfer1' */
}

real_T rt_modd_snf(real_T u0, real_T u1)
{
  real_T y;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (rtIsInf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    boolean_T yEq;
    y = fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > floor(u1))) {
      real_T q;
      q = fabs(u0 / u1);
      yEq = !(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q);
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

/* Function for Chart: '<S6>/BMS_States' */
static real32_T BMS_HIL_Wrapper_maximum(const real32_T x[5])
{
  int32_T idx;
  int32_T k;
  real32_T ex;
  if (!rtIsNaNF(x[0])) {
    idx = 1;
  } else {
    boolean_T exitg1;
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (!rtIsNaNF(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    for (k = idx + 1; k < 6; k++) {
      real32_T x_0;
      x_0 = x[k - 1];
      if (ex < x_0) {
        ex = x_0;
      }
    }
  }

  return ex;
}

/* Function for Chart: '<S6>/BMS_States' */
static real32_T BMS_HIL_Wrapper_minimum(const real32_T x[5])
{
  int32_T idx;
  int32_T k;
  real32_T ex;
  if (!rtIsNaNF(x[0])) {
    idx = 1;
  } else {
    boolean_T exitg1;
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (!rtIsNaNF(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    for (k = idx + 1; k < 6; k++) {
      real32_T x_0;
      x_0 = x[k - 1];
      if (ex > x_0) {
        ex = x_0;
      }
    }
  }

  return ex;
}

/* Model step function */
void BMS_HIL_Wrapper_step(void)
{
  int128m_T tmp_0;
  real_T rtb_Sum;
  real_T tmp;
  uint64_T tmp_1;
  uint64_T tmp_2;
  int32_T i;
  int32_T rtb_Bias;
  real32_T rtb_uDLookupTable[14];
  real32_T fractions[2];
  real32_T maxV;
  real32_T minV;
  real32_T rtb_CastToSingle_m;
  real32_T rtb_Gain_p;
  uint32_T bpIndices[2];
  uint8_T rtb_MultiportSwitch_c[5];

  /* Gain: '<S30>/Gain' incorporates:
   *  DataTypeConversion: '<S30>/Cast To Single'
   *  DiscreteIntegrator: '<S30>/Discrete-Time Integrator'
   */
  rtb_Gain_p = 5.34188039E-5F * (real32_T)
    BMS_HIL_Wrapper_DW.DiscreteTimeIntegrator_DSTATE;

  /* Bias: '<S15>/Bias' incorporates:
   *  Constant: '<S15>/Constant'
   *  DataTypeConversion: '<S15>/Cast To Double'
   *  Math: '<S15>/Mod'
   *  UnitDelay: '<S16>/Output'
   */
  rtb_Bias = (int32_T)(rt_modd_snf((real_T)BMS_HIL_Wrapper_DW.Output_DSTATE,
    33.0) + 1.0);

  /* Outputs for Enabled SubSystem: '<S2>/Acquire_Temp' incorporates:
   *  EnablePort: '<S11>/Enable'
   */
  /* RelationalOperator: '<S14>/Compare' incorporates:
   *  Constant: '<S14>/Constant'
   */
  if (rtb_Bias > 19) {
    /* Bias: '<S11>/Bias' */
    BMS_HIL_Wrapper_B.Bias = (real_T)rtb_Bias - 18.0;

    /* MultiPortSwitch: '<S11>/Multiport Switch' */
    switch ((int32_T)BMS_HIL_Wrapper_B.Bias) {
     case 2:
      for (i = 0; i < 5; i++) {
        rtb_MultiportSwitch_c[i] = 0U;
      }
      break;

     case 3:
      for (i = 0; i < 5; i++) {
        rtb_MultiportSwitch_c[i] = 0U;
      }
      break;

     case 4:
      for (i = 0; i < 5; i++) {
        rtb_MultiportSwitch_c[i] = 0U;
      }
      break;

     case 5:
      for (i = 0; i < 5; i++) {
        rtb_MultiportSwitch_c[i] = 0U;
      }
      break;

     case 6:
      for (i = 0; i < 5; i++) {
        rtb_MultiportSwitch_c[i] = 0U;
      }
      break;

     case 7:
      for (i = 0; i < 5; i++) {
        rtb_MultiportSwitch_c[i] = 0U;
      }
      break;

     case 8:
      for (i = 0; i < 5; i++) {
        rtb_MultiportSwitch_c[i] = 0U;
      }
      break;

     case 9:
      for (i = 0; i < 5; i++) {
        rtb_MultiportSwitch_c[i] = 0U;
      }
      break;

     case 10:
      for (i = 0; i < 5; i++) {
        rtb_MultiportSwitch_c[i] = 0U;
      }
      break;

     case 11:
      for (i = 0; i < 5; i++) {
        rtb_MultiportSwitch_c[i] = 0U;
      }
      break;

     case 12:
      for (i = 0; i < 5; i++) {
        rtb_MultiportSwitch_c[i] = 0U;
      }
      break;

     default:
      for (i = 0; i < 5; i++) {
        rtb_MultiportSwitch_c[i] = 0U;
      }
      break;
    }

    /* End of MultiPortSwitch: '<S11>/Multiport Switch' */
    BMS_HIL__SPIControllerTransfer1(rtb_MultiportSwitch_c,
      &BMS_HIL_Wrapper_B.SPIControllerTransfer1,
      &BMS_HIL_Wrapper_DW.SPIControllerTransfer1);
  } else {
    /* Outputs for Enabled SubSystem: '<S2>/Acquire_Volt_Current' incorporates:
     *  EnablePort: '<S12>/Enable'
     */
    /* MultiPortSwitch: '<S12>/Multiport Switch' incorporates:
     *  Constant: '<S12>/Constant'
     */
    for (i = 0; i < 5; i++) {
      switch (rtb_Bias) {
       case 1:
        rtb_MultiportSwitch_c[i] = BMS_HIL_Wrapper_ConstP.Constant_Value_d[i];
        break;

       case 2:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 3:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 4:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 5:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 6:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 7:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 8:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 9:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 10:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 11:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 12:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 13:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 14:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 15:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 16:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 17:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       case 18:
        rtb_MultiportSwitch_c[i] = 0U;
        break;

       default:
        rtb_MultiportSwitch_c[i] = 0U;
        break;
      }
    }

    /* End of MultiPortSwitch: '<S12>/Multiport Switch' */
    BMS_HIL__SPIControllerTransfer1(rtb_MultiportSwitch_c,
      &BMS_HIL_Wrapper_B.SPIControllerTransfer1_p,
      &BMS_HIL_Wrapper_DW.SPIControllerTransfer1_p);

    /* End of Outputs for SubSystem: '<S2>/Acquire_Volt_Current' */
  }

  /* End of RelationalOperator: '<S14>/Compare' */
  /* End of Outputs for SubSystem: '<S2>/Acquire_Temp' */

  /* Switch: '<Root>/Switch' incorporates:
   *  MATLABSystem: '<S11>/SPI Controller Transfer1'
   *  MATLABSystem: '<S12>/SPI Controller Transfer1'
   */
  for (i = 0; i < 5; i++) {
    if (BMS_HIL_Wrapper_B.Bias > 19.0) {
      rtb_MultiportSwitch_c[i] =
        BMS_HIL_Wrapper_B.SPIControllerTransfer1.SPIControllerTransfer1[i];
    } else {
      rtb_MultiportSwitch_c[i] =
        BMS_HIL_Wrapper_B.SPIControllerTransfer1_p.SPIControllerTransfer1[i];
    }
  }

  /* End of Switch: '<Root>/Switch' */
  BMS_HIL__SPIControllerTransfer1(rtb_MultiportSwitch_c,
    &BMS_HIL_Wrapper_B.SPIControllerTransfer,
    &BMS_HIL_Wrapper_DW.SPIControllerTransfer);

  /* Outputs for Enabled SubSystem: '<S3>/Proceed_Cell_Volt' incorporates:
   *  EnablePort: '<S27>/Enable'
   */
  /* Logic: '<S3>/AND' incorporates:
   *  Constant: '<S19>/Constant'
   *  Constant: '<S20>/Constant'
   *  RelationalOperator: '<S19>/Compare'
   *  RelationalOperator: '<S20>/Compare'
   */
  if ((rtb_Bias != 1) && (rtb_Bias <= 15)) {
    for (i = 0; i < 14; i++) {
      /* S-Function (sfix_udelay): '<S27>/Tapped Delay' */
      BMS_HIL_Wrapper_B.TappedDelay_i[i] = BMS_HIL_Wrapper_DW.TappedDelay_X_l[i];
    }

    /* DataTypeConversion: '<S27>/Cast To Single2' incorporates:
     *  DataTypeConversion: '<S27>/Cast To Single'
     *  DataTypeConversion: '<S27>/Cast To Single1'
     *  Gain: '<S27>/Gain'
     *  Gain: '<S27>/Gain1'
     *  Sum: '<S27>/Sum'
     */
    BMS_HIL_Wrapper_B.CastToSingle2 = (real32_T)((((uint32_T)
      BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1[2] << 15) +
      ((uint32_T)BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1
       [3] << 7)) * 3131409116ULL) * 2.22044605E-16F;

    /* Update for S-Function (sfix_udelay): '<S27>/Tapped Delay' */
    for (i = 0; i < 13; i++) {
      BMS_HIL_Wrapper_DW.TappedDelay_X_l[i] =
        BMS_HIL_Wrapper_DW.TappedDelay_X_l[i + 1];
    }

    BMS_HIL_Wrapper_DW.TappedDelay_X_l[13] = BMS_HIL_Wrapper_B.CastToSingle2;

    /* End of Update for S-Function (sfix_udelay): '<S27>/Tapped Delay' */
  }

  /* End of Logic: '<S3>/AND' */
  /* End of Outputs for SubSystem: '<S3>/Proceed_Cell_Volt' */
  for (i = 0; i < 14; i++) {
    /* Sum: '<S30>/Sum' incorporates:
     *  Lookup_n-D: '<S30>/1-D Lookup Table'
     */
    rtb_uDLookupTable[i] = look1_iflf_binlxpw(BMS_HIL_Wrapper_B.TappedDelay_i[i],
      BMS_HIL_Wrapper_ConstP.uDLookupTable_bp01Data,
      BMS_HIL_Wrapper_ConstP.uDLookupTable_tableData, 8U) - rtb_Gain_p;
  }

  /* Outputs for Enabled SubSystem: '<S3>/Proceed_Temp' incorporates:
   *  EnablePort: '<S29>/Enable'
   */
  /* Logic: '<S24>/OR' incorporates:
   *  Constant: '<S31>/Constant'
   *  Constant: '<S32>/Constant'
   *  Constant: '<S33>/Constant'
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  RelationalOperator: '<S31>/Compare'
   *  RelationalOperator: '<S32>/Compare'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   */
  if ((BMS_HIL_Wrapper_B.Bias == 7.0) || (BMS_HIL_Wrapper_B.Bias == 8.0) ||
      (BMS_HIL_Wrapper_B.Bias == 9.0) || (BMS_HIL_Wrapper_B.Bias == 10.0) ||
      (BMS_HIL_Wrapper_B.Bias == 13.0)) {
    for (i = 0; i < 5; i++) {
      /* S-Function (sfix_udelay): '<S29>/Tapped Delay' */
      BMS_HIL_Wrapper_B.TappedDelay[i] = BMS_HIL_Wrapper_DW.TappedDelay_X[i];
    }

    /* Product: '<S29>/Divide1' incorporates:
     *  Constant: '<S29>/Constant'
     *  DataTypeConversion: '<S29>/Cast To Double'
     *  DataTypeConversion: '<S29>/Cast To Double1'
     *  DataTypeConversion: '<S29>/Cast To Double2'
     *  Gain: '<S29>/Gain'
     *  Gain: '<S29>/Gain1'
     *  Gain: '<S29>/Gain2'
     *  Product: '<S29>/Divide'
     *  S-Function (sfix_bitop): '<S29>/Bitwise AND'
     *  Sum: '<S29>/Sum'
     *  Sum: '<S29>/Sum1'
     */
    rtb_Sum = (real_T)(((((((uint32_T)
      BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1[3] << 15) >>
      8) + ((uint32_T)
            BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1[2] <<
            15)) + ((uint32_T)floor((real_T)
      BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1[4] / 64.0) <<
                    5)) & 65535U) * 3131409116ULL) * 8.8817841970012523E-16;

    /* DataTypeConversion: '<S29>/Cast To Single4' incorporates:
     *  Constant: '<S29>/Constant1'
     *  Constant: '<S29>/Constant2'
     *  Gain: '<S29>/Gain4'
     *  Math: '<S29>/Math Function'
     *  Math: '<S29>/Math Reciprocal'
     *  Product: '<S29>/Divide1'
     *  Sum: '<S29>/Sum1'
     *  Sum: '<S29>/Sum2'
     *
     * About '<S29>/Math Function':
     *  Operator: log
     *
     * About '<S29>/Math Reciprocal':
     *  Operator: reciprocal
     */
    BMS_HIL_Wrapper_B.CastToSingle4 = (real32_T)(1.0 / (log(rtb_Sum / (5.0 -
      rtb_Sum)) * 0.00025316455696202533 + 0.0033540164346805303));

    /* Update for S-Function (sfix_udelay): '<S29>/Tapped Delay' */
    BMS_HIL_Wrapper_DW.TappedDelay_X[0] = BMS_HIL_Wrapper_DW.TappedDelay_X[1];
    BMS_HIL_Wrapper_DW.TappedDelay_X[1] = BMS_HIL_Wrapper_DW.TappedDelay_X[2];
    BMS_HIL_Wrapper_DW.TappedDelay_X[2] = BMS_HIL_Wrapper_DW.TappedDelay_X[3];
    BMS_HIL_Wrapper_DW.TappedDelay_X[3] = BMS_HIL_Wrapper_DW.TappedDelay_X[4];
    BMS_HIL_Wrapper_DW.TappedDelay_X[4] = BMS_HIL_Wrapper_B.CastToSingle4;
  }

  /* End of Logic: '<S24>/OR' */
  /* End of Outputs for SubSystem: '<S3>/Proceed_Temp' */

  /* Lookup_n-D: '<S5>/2-D Lookup Table' incorporates:
   *  MinMax: '<S5>/Max'
   */
  bpIndices[1U] = plook_u32ff_binx(fmaxf(fmaxf(fmaxf(fmaxf
    (BMS_HIL_Wrapper_B.TappedDelay[0], BMS_HIL_Wrapper_B.TappedDelay[1]),
    BMS_HIL_Wrapper_B.TappedDelay[2]), BMS_HIL_Wrapper_B.TappedDelay[3]),
    BMS_HIL_Wrapper_B.TappedDelay[4]),
    BMS_HIL_Wrapper_ConstP.uDLookupTable_bp02Data, 4U, &rtb_Gain_p);
  fractions[1U] = rtb_Gain_p;
  for (i = 0; i < 14; i++) {
    bpIndices[0U] = plook_u32ff_binx(rtb_uDLookupTable[i],
      BMS_HIL_Wrapper_ConstP.uDLookupTable_bp01Data_d, 10U, &rtb_Gain_p);
    fractions[0U] = rtb_Gain_p;
    rtb_uDLookupTable[i] = intrp2d_fu32fl_pw(bpIndices, fractions,
      BMS_HIL_Wrapper_ConstP.uDLookupTable_tableData_e, 11U);
  }

  /* End of Lookup_n-D: '<S5>/2-D Lookup Table' */

  /* MinMax: '<S7>/Max' */
  rtb_CastToSingle_m = rtb_uDLookupTable[0];

  /* MinMax: '<S9>/Max' */
  rtb_Gain_p = BMS_HIL_Wrapper_B.TappedDelay_i[0];

  /* MinMax: '<S9>/MinMax' */
  minV = BMS_HIL_Wrapper_B.TappedDelay_i[0];

  /* MinMax: '<S8>/Max' */
  maxV = rtb_uDLookupTable[0];
  for (i = 0; i < 13; i++) {
    /* MinMax: '<S7>/Max' */
    rtb_CastToSingle_m = fmaxf(rtb_CastToSingle_m, rtb_uDLookupTable[i + 1]);

    /* MinMax: '<S9>/Max' */
    rtb_Gain_p = fmaxf(rtb_Gain_p, BMS_HIL_Wrapper_B.TappedDelay_i[i + 1]);

    /* MinMax: '<S9>/MinMax' */
    minV = fminf(minV, BMS_HIL_Wrapper_B.TappedDelay_i[i + 1]);

    /* MinMax: '<S8>/Max' */
    maxV = rtb_CastToSingle_m;
  }

  /* DataTypeConversion: '<S7>/Cast To Single' incorporates:
   *  Constant: '<S7>/Constant'
   *  MinMax: '<S7>/Max'
   *  MinMax: '<S9>/Max'
   *  Product: '<S7>/Divide'
   *  Sum: '<S7>/Sum'
   */
  rtb_CastToSingle_m = (real32_T)((4.2 - rtb_Gain_p) / rtb_CastToSingle_m);

  /* Gain: '<S8>/Gain' incorporates:
   *  Constant: '<S8>/Cutoff_Volt'
   *  MinMax: '<S8>/Max'
   *  MinMax: '<S9>/MinMax'
   *  Product: '<S8>/Divide'
   *  Sum: '<S8>/Sum'
   */
  rtb_Sum = -((minV - 3.0) / maxV);

  /* Outputs for Enabled SubSystem: '<S3>/Proceed_Current' incorporates:
   *  EnablePort: '<S28>/Enable'
   */
  /* RelationalOperator: '<S23>/Compare' incorporates:
   *  Constant: '<S23>/Constant'
   */
  if (rtb_Bias == 19) {
    /* Gain: '<S28>/Gain2' incorporates:
     *  Constant: '<S28>/Constant'
     *  DataTypeConversion: '<S28>/Cast To Single'
     *  DataTypeConversion: '<S28>/Cast To Single1'
     *  DataTypeConversion: '<S28>/Cast To Single2'
     *  DataTypeConversion: '<S28>/Cast To Single4'
     *  Gain: '<S28>/Coloumb_Count'
     *  Gain: '<S28>/Gain'
     *  Gain: '<S28>/Gain1'
     *  Product: '<S28>/Divide'
     *  Sum: '<S28>/Sum'
     */
    tmp_1 = 7205759403792793600ULL;
    tmp_2 = (uint64_T)((int64_T)floor(((real_T)((uint64_T)
      BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1[2] << 31) *
      4.76837158203125E-7 + (real_T)((uint64_T)
      BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1[3] << 31) *
      1.862645149230957E-9) + (real_T)
      BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1[4] / 64.0) *
                       1497446876LL);
    sMultiWordMul(&tmp_1, 1, &tmp_2, 1, &tmp_0.chunks[0U], 2);

    /* DataTypeConversion: '<S28>/Cast To Single3' */
    BMS_HIL_Wrapper_B.CastToSingle3 = sMultiWord2Single(&tmp_0.chunks[0U], 2, 0)
      * 1.23259516E-32F;
  }

  /* End of RelationalOperator: '<S23>/Compare' */
  /* End of Outputs for SubSystem: '<S3>/Proceed_Current' */

  /* Outputs for Enabled SubSystem: '<S3>/Proceed_Batt_Volt' incorporates:
   *  EnablePort: '<S25>/Enable'
   */
  /* RelationalOperator: '<S22>/Compare' incorporates:
   *  Constant: '<S22>/Constant'
   */
  if (rtb_Bias == 17) {
    /* DataTypeConversion: '<S25>/Cast To Single5' incorporates:
     *  DataTypeConversion: '<S25>/Cast To Single3'
     *  DataTypeConversion: '<S25>/Cast To Single4'
     *  Gain: '<S25>/Gain2'
     *  Gain: '<S25>/Gain3'
     *  Sum: '<S25>/Sum2'
     */
    BMS_HIL_Wrapper_B.CastToSingle5 = (real32_T)((((uint32_T)
      BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1[2] << 15) +
      ((uint32_T)BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1
       [3] << 7)) * 2924700930ULL) * 3.55271368E-15F;

    /* Product: '<S25>/Divide1' incorporates:
     *  Constant: '<S25>/Constant1'
     */
    BMS_HIL_Wrapper_B.V_Sum_LSB = (real_T)
      BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1[4] / 64.0;
  }

  /* End of RelationalOperator: '<S22>/Compare' */
  /* End of Outputs for SubSystem: '<S3>/Proceed_Batt_Volt' */

  /* Outputs for Enabled SubSystem: '<S3>/Proceed_Batt_Volt1' incorporates:
   *  EnablePort: '<S26>/Enable'
   */
  /* RelationalOperator: '<S21>/Compare' incorporates:
   *  Constant: '<S21>/Constant'
   */
  if (rtb_Bias == 16) {
    /* DataTypeConversion: '<S26>/Cast To Single1' */
    tmp = floor(BMS_HIL_Wrapper_B.V_Sum_LSB);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 65536.0);
    }

    /* DataTypeConversion: '<S26>/Cast To Single2' incorporates:
     *  Constant: '<S26>/Constant'
     *  DataTypeConversion: '<S26>/Cast To Double'
     *  DataTypeConversion: '<S26>/Cast To Single1'
     *  Gain: '<S26>/Gain'
     *  Gain: '<S26>/Gain1'
     *  Product: '<S26>/Divide'
     *  Sum: '<S26>/Sum'
     *  Sum: '<S26>/Sum1'
     */
    BMS_HIL_Wrapper_B.CastToSingle2_o = (real32_T)((((uint32_T)(uint8_T)
      ((uint8_T)(BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1
                 [2] +
                 BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1
                 [3]) + (uint32_T)floor((real_T)
      BMS_HIL_Wrapper_B.SPIControllerTransfer.SPIControllerTransfer1[4] / 64.0))
      << 15) + ((uint32_T)(tmp < 0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)
      -tmp : (int32_T)(uint16_T)tmp) << 13)) * 3131409116ULL) * 3.46944695E-18F;
  }

  /* End of RelationalOperator: '<S21>/Compare' */
  /* End of Outputs for SubSystem: '<S3>/Proceed_Batt_Volt1' */

  /* Test Sequence: '<Root>/Test Sequence' */
  if (BMS_HIL_Wrapper_DW.is_active_c1_BMS_HIL_Wrapper == 0) {
    BMS_HIL_Wrapper_DW.is_active_c1_BMS_HIL_Wrapper = 1U;
    BMS_HIL_Wrapper_DW.is_c1_BMS_HIL_Wrapper = BMS_HIL_Wrapper_IN_Fly;
    BMS_HIL_Wrapper_B.State_Required = Fly;
  } else if (BMS_HIL_Wrapper_DW.is_c1_BMS_HIL_Wrapper == BMS_HIL_Wrapper_IN_Fly)
  {
    BMS_HIL_Wrapper_DW.is_c1_BMS_HIL_Wrapper = BMS_HIL_Wrapper_IN_step_2;
  } else {
    /* case IN_step_2: */
  }

  /* End of Test Sequence: '<Root>/Test Sequence' */

  /* Chart: '<S6>/BMS_States' incorporates:
   *  BusCreator generated from: '<S6>/BMS_States'
   *  DataTypeConversion: '<S8>/Cast To Single'
   *  MinMax: '<S9>/Max'
   *  MinMax: '<S9>/MinMax'
   */
  if (BMS_HIL_Wrapper_DW.temporalCounter_i1 < MAX_uint32_T) {
    BMS_HIL_Wrapper_DW.temporalCounter_i1++;
  }

  if (BMS_HIL_Wrapper_DW.is_active_c6_BMS_HIL_Wrapper == 0) {
    BMS_HIL_Wrapper_DW.is_active_c6_BMS_HIL_Wrapper = 1U;
    BMS_HIL_Wrapper_DW.is_Normal_State = BMS_HIL_Wrapper_IN_Standby;
    BMS_HIL_Wrapper_DW.is_Monitor_CurrentLim = BMS_HIL__IN_No_CurrentLim_Fault;
    BMS_HIL_Wrapper_DW.is_Monitor_CellVolt = BMS_HIL_Wrapper_IN_No_OV_UV;
    BMS_HIL_Wrapper_DW.Delta = fabsf(BMS_HIL_Wrapper_B.CastToSingle2_o -
      BMS_HIL_Wrapper_B.CastToSingle5);
    BMS_HIL_Wrapper_DW.is_Monitor_CellTemp = BMS_HIL_Wrapper_IN_No_OT_UT;
    BMS_HIL_Wrapper_DW.MaxCellTemp = BMS_HIL_Wrapper_maximum
      (BMS_HIL_Wrapper_B.TappedDelay);
    BMS_HIL_Wrapper_DW.MinCellTemp = BMS_HIL_Wrapper_minimum
      (BMS_HIL_Wrapper_B.TappedDelay);
    BMS_HIL_Wrapper_DW.FaultPresent = false;
  } else {
    switch (BMS_HIL_Wrapper_DW.is_Normal_State) {
     case BMS_HIL_Wrapper_IN_Charging:
      if ((BMS_HIL_Wrapper_B.State_Required != Charge) ||
          (BMS_HIL_Wrapper_B.State_Required == Standby)) {
        BMS_HIL_Wrapper_DW.is_Normal_State = BMS_HIL_Wrapper_IN_Standby;
      } else if (BMS_HIL_Wrapper_DW.FaultPresent) {
        BMS_HIL_Wrapper_DW.is_Normal_State = BMS_HIL_Wrapper_IN_Fault;
      }
      break;

     case BMS_HIL_Wrapper_IN_Fault:
      break;

     case BMS_HIL_Wrapper_IN_Flying:
      if ((BMS_HIL_Wrapper_B.State_Required != Fly) ||
          (BMS_HIL_Wrapper_B.State_Required == Standby)) {
        BMS_HIL_Wrapper_DW.is_Normal_State = BMS_HIL_Wrapper_IN_Standby;
      } else if (BMS_HIL_Wrapper_DW.FaultPresent) {
        BMS_HIL_Wrapper_DW.is_Normal_State = BMS_HIL_Wrapper_IN_Fault;
      }
      break;

     default:
      /* case IN_Standby: */
      switch (BMS_HIL_Wrapper_B.State_Required) {
       case Fly:
        BMS_HIL_Wrapper_DW.is_Normal_State = BMS_HIL_Wrapper_IN_Flying;
        break;

       case Charge:
        BMS_HIL_Wrapper_DW.is_Normal_State = BMS_HIL_Wrapper_IN_Charging;
        break;

       default:
        if (BMS_HIL_Wrapper_DW.FaultPresent) {
          BMS_HIL_Wrapper_DW.is_Normal_State = BMS_HIL_Wrapper_IN_Fault;
        }
        break;
      }
      break;
    }

    switch (BMS_HIL_Wrapper_DW.is_Monitor_CurrentLim) {
     case BMS_HIL__IN_No_CurrentLim_Fault:
      if ((BMS_HIL_Wrapper_B.CastToSingle3 < (real32_T)rtb_Sum) ||
          (BMS_HIL_Wrapper_B.CastToSingle3 > rtb_CastToSingle_m)) {
        BMS_HIL_Wrapper_DW.temporalCounter_i1 = 0U;
        BMS_HIL_Wrapper_DW.is_Monitor_CurrentLim = BMS_HIL_Wrapper_IN_Wait;
      }
      break;

     case BMS_HIL_Wrapper_IN_OC_Fault:
      break;

     default:
      /* case IN_Wait: */
      if (BMS_HIL_Wrapper_DW.temporalCounter_i1 >= 5U) {
        BMS_HIL_Wrapper_DW.is_Monitor_CurrentLim = BMS_HIL_Wrapper_IN_OC_Fault;
        BMS_HIL_Wrapper_DW.FaultPresent = true;
      } else if ((BMS_HIL_Wrapper_B.CastToSingle3 >= (real32_T)rtb_Sum) &&
                 (BMS_HIL_Wrapper_B.CastToSingle3 <= rtb_CastToSingle_m)) {
        BMS_HIL_Wrapper_DW.is_Monitor_CurrentLim =
          BMS_HIL__IN_No_CurrentLim_Fault;
      }
      break;
    }

    switch (BMS_HIL_Wrapper_DW.is_Monitor_CellVolt) {
     case BMS_HIL_Wrapper_IN_No_OV_UV:
      if (BMS_HIL_Wrapper_DW.Delta >= 0.02F) {
        BMS_HIL_Wrapper_DW.is_Monitor_CellVolt = BMS_HIL_Wrapper_IN_Sensor_Fault;
        BMS_HIL_Wrapper_DW.FaultPresent = true;
      } else if (minV <= 3.0F) {
        BMS_HIL_Wrapper_DW.is_Monitor_CellVolt = BMS_HIL_Wrapper_IN_UV_Fault;
        BMS_HIL_Wrapper_DW.FaultPresent = true;
      } else if (rtb_Gain_p >= 4.2F) {
        BMS_HIL_Wrapper_DW.is_Monitor_CellVolt = BMS_HIL_Wrapper_IN_OV_Fault;
        BMS_HIL_Wrapper_DW.FaultPresent = true;
      } else {
        BMS_HIL_Wrapper_DW.Delta = fabsf(BMS_HIL_Wrapper_B.CastToSingle2_o -
          BMS_HIL_Wrapper_B.CastToSingle5);
      }
      break;

     case BMS_HIL_Wrapper_IN_OV_Fault:
     case BMS_HIL_Wrapper_IN_Sensor_Fault:
      break;

     default:
      /* case IN_UV_Fault: */
      if (minV > 3.0F) {
        BMS_HIL_Wrapper_DW.is_Monitor_CellVolt = BMS_HIL_Wrapper_IN_No_OV_UV;
        BMS_HIL_Wrapper_DW.Delta = fabsf(BMS_HIL_Wrapper_B.CastToSingle2_o -
          BMS_HIL_Wrapper_B.CastToSingle5);
      }
      break;
    }

    switch (BMS_HIL_Wrapper_DW.is_Monitor_CellTemp) {
     case BMS_HIL_Wrapper_IN_No_OT_UT:
      if (BMS_HIL_Wrapper_DW.MinCellTemp <= 253.0F) {
        BMS_HIL_Wrapper_DW.is_Monitor_CellTemp = BMS_HIL_Wrapper_IN_UT_Fault;
        BMS_HIL_Wrapper_DW.FaultPresent = true;
      } else if (BMS_HIL_Wrapper_DW.MaxCellTemp >= 333.0F) {
        BMS_HIL_Wrapper_DW.is_Monitor_CellTemp = BMS_HIL_Wrapper_IN_OT_Fault;
        BMS_HIL_Wrapper_DW.FaultPresent = true;
      } else {
        BMS_HIL_Wrapper_DW.MaxCellTemp = BMS_HIL_Wrapper_maximum
          (BMS_HIL_Wrapper_B.TappedDelay);
        BMS_HIL_Wrapper_DW.MinCellTemp = BMS_HIL_Wrapper_minimum
          (BMS_HIL_Wrapper_B.TappedDelay);
        BMS_HIL_Wrapper_DW.FaultPresent = false;
      }
      break;

     case BMS_HIL_Wrapper_IN_OT_Fault:
      break;

     default:
      /* case IN_UT_Fault: */
      break;
    }
  }

  /* End of Chart: '<S6>/BMS_States' */

  /* Switch: '<S18>/FixPt Switch' incorporates:
   *  Constant: '<S17>/FixPt Constant'
   *  Sum: '<S17>/FixPt Sum1'
   *  UnitDelay: '<S16>/Output'
   */
  BMS_HIL_Wrapper_DW.Output_DSTATE++;

  /* Update for DiscreteIntegrator: '<S30>/Discrete-Time Integrator' incorporates:
   *  DataTypeConversion: '<S30>/Cast To Double'
   */
  BMS_HIL_Wrapper_DW.DiscreteTimeIntegrator_DSTATE += 0.2 *
    BMS_HIL_Wrapper_B.CastToSingle3;
}

/* Model initialize function */
void BMS_HIL_Wrapper_initialize(void)
{
  /* SystemInitialize for Enabled SubSystem: '<S2>/Acquire_Temp' */
  BMS_SPIControllerTransfer1_Init(&BMS_HIL_Wrapper_DW.SPIControllerTransfer1);

  /* End of SystemInitialize for SubSystem: '<S2>/Acquire_Temp' */

  /* SystemInitialize for Enabled SubSystem: '<S2>/Acquire_Volt_Current' */
  BMS_SPIControllerTransfer1_Init(&BMS_HIL_Wrapper_DW.SPIControllerTransfer1_p);

  /* End of SystemInitialize for SubSystem: '<S2>/Acquire_Volt_Current' */
  BMS_SPIControllerTransfer1_Init(&BMS_HIL_Wrapper_DW.SPIControllerTransfer);
}

/* Model terminate function */
void BMS_HIL_Wrapper_terminate(void)
{
  /* Terminate for Enabled SubSystem: '<S2>/Acquire_Temp' */
  BMS_SPIControllerTransfer1_Term(&BMS_HIL_Wrapper_DW.SPIControllerTransfer1);

  /* End of Terminate for SubSystem: '<S2>/Acquire_Temp' */

  /* Terminate for Enabled SubSystem: '<S2>/Acquire_Volt_Current' */
  BMS_SPIControllerTransfer1_Term(&BMS_HIL_Wrapper_DW.SPIControllerTransfer1_p);

  /* End of Terminate for SubSystem: '<S2>/Acquire_Volt_Current' */
  BMS_SPIControllerTransfer1_Term(&BMS_HIL_Wrapper_DW.SPIControllerTransfer);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
