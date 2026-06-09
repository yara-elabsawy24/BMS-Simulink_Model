/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_BIL_Wrapper.c
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
#include "rtwtypes.h"
#include "BMS_BIL_Wrapper_types.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "multiword_types.h"
#include "mw_stm32_spi_ll.h"
#include "BMS_BIL_Wrapper_private.h"

/* Named constants for Chart: '<S7>/BMS_States' */
#define BMS_BIL_Wrapper_IN_Charging    ((uint8_T)1U)
#define BMS_BIL_Wrapper_IN_Fault       ((uint8_T)2U)
#define BMS_BIL_Wrapper_IN_Flying      ((uint8_T)3U)
#define BMS_BIL_Wrapper_IN_No_OT_UT    ((uint8_T)1U)
#define BMS_BIL_Wrapper_IN_No_OV_UV    ((uint8_T)1U)
#define BMS_BIL_Wrapper_IN_OC_Fault    ((uint8_T)2U)
#define BMS_BIL_Wrapper_IN_OT_Fault    ((uint8_T)2U)
#define BMS_BIL_Wrapper_IN_OV_Fault    ((uint8_T)2U)
#define BMS_BIL_Wrapper_IN_Sensor_Fault ((uint8_T)3U)
#define BMS_BIL_Wrapper_IN_Standby     ((uint8_T)4U)
#define BMS_BIL_Wrapper_IN_UT_Fault    ((uint8_T)3U)
#define BMS_BIL_Wrapper_IN_UV_Fault    ((uint8_T)4U)
#define BMS_BIL_Wrapper_IN_Wait        ((uint8_T)3U)
#define BMS_BIL__IN_No_CurrentLim_Fault ((uint8_T)1U)

/* Named constants for Chart: '<S8>/Chart' */
#define BMS_BIL_W_IN_Balance_Not_Active ((uint8_T)2U)
#define BMS_BIL_Wrapp_IN_Balance_Active ((uint8_T)1U)
#define BMS_BIL_Wrappe_IN_Balancing_Off ((uint8_T)1U)
#define BMS_BIL_Wrapper_IN_Balancing_On ((uint8_T)2U)

/* Named constants for Test Sequence: '<Root>/Test Sequence' */
#define BMS_BIL_Wrapper_IN_Fly         ((uint8_T)1U)
#define BMS_BIL_Wrapper_IN_step_2      ((uint8_T)2U)

/* Block signals (default storage) */
B_BMS_BIL_Wrapper_T BMS_BIL_Wrapper_B;

/* Block states (default storage) */
DW_BMS_BIL_Wrapper_T BMS_BIL_Wrapper_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_BMS_BIL_Wrapper_T BMS_BIL_Wrapper_Y;

/* Real-time model */
static RT_MODEL_BMS_BIL_Wrapper_T BMS_BIL_Wrapper_M_;
RT_MODEL_BMS_BIL_Wrapper_T *const BMS_BIL_Wrapper_M = &BMS_BIL_Wrapper_M_;

/* Forward declaration for local functions */
static real32_T BMS_BIL_Wrapper_maximum(const real32_T x[5]);
static real32_T BMS_BIL_Wrapper_minimum(const real32_T x[5]);
static void BMS_BIL_W_SPIDrvBlock_setupImpl(stm32cube_blocks_SPIControlle_T *obj);
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

/* Function for Chart: '<S7>/BMS_States' */
static real32_T BMS_BIL_Wrapper_maximum(const real32_T x[5])
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

/* Function for Chart: '<S7>/BMS_States' */
static real32_T BMS_BIL_Wrapper_minimum(const real32_T x[5])
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

static void BMS_BIL_W_SPIDrvBlock_setupImpl(stm32cube_blocks_SPIControlle_T *obj)
{
  MW_STM32_SPI_FIFO_Access_type b_dataType;
  STM32_SPI_Struct_T * spiBlock;
  STM32_SPI_ModuleStruct_T c;

  /* Start for MATLABSystem: '<Root>/SPI Controller Transfer' */
  c.buffer.rxBufferPtr = NULL;
  c.buffer.txBufferPtr = NULL;
  c.PeripheralPtr = SPI1;
  c.enableRxOrTx = 0U;
  c.buffer.rxBufferSize = 0U;
  c.buffer.txBufferSize = 0U;

  /* Start for MATLABSystem: '<Root>/SPI Controller Transfer' */
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

  /* Start for MATLABSystem: '<Root>/SPI Controller Transfer' */
  obj->MW_SPI_BlockStruct.chipSelectActiveLow = true;
  obj->MW_SPI_BlockStruct.dataType = b_dataType;
  obj->MW_SPI_BlockStruct.dataLength = 1.0;
  spiBlock = (STM32_SPI_Struct_T *)(&obj->MW_SPI_BlockStruct);
  obj->MW_SPI_HANDLE = SPI_STM32_Init(&c, spiBlock);
  MW_STM32_SPI_SetFormat(obj->MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
}

/* Model step function */
void BMS_BIL_Wrapper_step(void)
{
  GPIO_TypeDef * portNameLoc;
  uint32_T shiftVal;
  int128m_T tmp;
  real_T rtb_VectorConcatenate3[34];
  real_T rtb_DiscreteTimeIntegrator5;
  uint64_T tmp_0;
  uint64_T tmp_1;
  int32_T i;
  int32_T i_0;
  int32_T rtb_Bal_11_idx_0;
  real32_T rtb_Tmod[5];
  real32_T fractions[2];
  real32_T frac;
  real32_T maxV;
  real32_T rtb_DiscreteTimeIntegrator1;
  real32_T rtb_Gain_p;
  uint32_T rtb_VectorConcatenate1[5];
  uint32_T bpIndices[2];
  uint32_T intVal;
  uint32_T pinMask;
  uint32_T pinWriteLoc;
  uint16_T status;
  int8_T rtb_VectorConcatenate[8];
  int8_T rtb_VectorConcatenate2[8];
  int8_T rtb_VectorConcatenate4[8];
  int8_T rtb_VectorConcatenate6[8];
  uint8_T rdDataRaw[6];
  uint8_T wrDataRaw1[6];
  uint8_T rtb_MultiportSwitch[5];
  boolean_T rtb_crc[6];
  boolean_T rtb_crc_1[6];
  boolean_T s;
  static const boolean_T b[6] = { true, true, true, false, false, false };

  static const boolean_T varargin_2[6] = { false, true, true, false, false, true
  };

  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T exitg3;

  /* MinMax: '<S11>/Max' incorporates:
   *  UnitDelay generated from: '<Root>/Unit Delay'
   */
  maxV = BMS_BIL_Wrapper_DW.UnitDelay_1_DSTATE[0];
  for (i = 0; i < 13; i++) {
    maxV = fmaxf(maxV, BMS_BIL_Wrapper_DW.UnitDelay_1_DSTATE[i + 1]);
  }

  /* UnitDelay generated from: '<Root>/Unit Delay' */
  for (i = 0; i < 5; i++) {
    rtb_Tmod[i] = BMS_BIL_Wrapper_DW.UnitDelay_5_DSTATE[i];
  }

  /* MinMax: '<S11>/MinMax' incorporates:
   *  UnitDelay generated from: '<Root>/Unit Delay'
   */
  rtb_Gain_p = BMS_BIL_Wrapper_DW.UnitDelay_1_DSTATE[0];
  for (i = 0; i < 13; i++) {
    rtb_Gain_p = fminf(rtb_Gain_p, BMS_BIL_Wrapper_DW.UnitDelay_1_DSTATE[i + 1]);
  }

  /* Lookup_n-D: '<S5>/2-D Lookup Table' incorporates:
   *  MinMax: '<S5>/Max'
   *  UnitDelay generated from: '<Root>/Unit Delay'
   */
  bpIndices[1U] = plook_u32ff_binx(fmaxf(fmaxf(fmaxf(fmaxf
    (BMS_BIL_Wrapper_DW.UnitDelay_5_DSTATE[0],
     BMS_BIL_Wrapper_DW.UnitDelay_5_DSTATE[1]),
    BMS_BIL_Wrapper_DW.UnitDelay_5_DSTATE[2]),
    BMS_BIL_Wrapper_DW.UnitDelay_5_DSTATE[3]),
    BMS_BIL_Wrapper_DW.UnitDelay_5_DSTATE[4]),
    BMS_BIL_Wrapper_ConstP.uDLookupTable_bp02Data, 4U, &frac);
  fractions[1U] = frac;
  for (i = 0; i < 14; i++) {
    bpIndices[0U] = plook_u32ff_binx(BMS_BIL_Wrapper_DW.UnitDelay_6_DSTATE[i],
      BMS_BIL_Wrapper_ConstP.uDLookupTable_bp01Data, 10U, &frac);
    fractions[0U] = frac;
    BMS_BIL_Wrapper_DW.UnitDelay_6_DSTATE[i] = intrp2d_fu32fl_pw(bpIndices,
      fractions, BMS_BIL_Wrapper_ConstP.uDLookupTable_tableData, 11U);
  }

  /* End of Lookup_n-D: '<S5>/2-D Lookup Table' */

  /* MinMax: '<S9>/Max' */
  rtb_DiscreteTimeIntegrator1 = BMS_BIL_Wrapper_DW.UnitDelay_6_DSTATE[0];

  /* MinMax: '<S10>/Max' */
  frac = BMS_BIL_Wrapper_DW.UnitDelay_6_DSTATE[0];
  for (i = 0; i < 13; i++) {
    /* MinMax: '<S9>/Max' */
    rtb_DiscreteTimeIntegrator1 = fmaxf(rtb_DiscreteTimeIntegrator1,
      BMS_BIL_Wrapper_DW.UnitDelay_6_DSTATE[i + 1]);

    /* MinMax: '<S10>/Max' */
    frac = rtb_DiscreteTimeIntegrator1;
  }

  /* DataTypeConversion: '<S9>/Cast To Single' incorporates:
   *  Constant: '<S9>/Constant'
   *  MinMax: '<S11>/Max'
   *  MinMax: '<S9>/Max'
   *  Product: '<S9>/Divide'
   *  Sum: '<S9>/Sum'
   */
  rtb_DiscreteTimeIntegrator1 = (real32_T)((4.2 - maxV) /
    rtb_DiscreteTimeIntegrator1);

  /* Gain: '<S10>/Gain' incorporates:
   *  Constant: '<S10>/Cutoff_Volt'
   *  MinMax: '<S10>/Max'
   *  MinMax: '<S11>/MinMax'
   *  Product: '<S10>/Divide'
   *  Sum: '<S10>/Sum'
   */
  rtb_DiscreteTimeIntegrator5 = -((rtb_Gain_p - 3.0) / frac);

  /* Test Sequence: '<Root>/Test Sequence' */
  if (BMS_BIL_Wrapper_DW.is_active_c1_BMS_BIL_Wrapper == 0) {
    BMS_BIL_Wrapper_DW.is_active_c1_BMS_BIL_Wrapper = 1U;
    BMS_BIL_Wrapper_DW.is_c1_BMS_BIL_Wrapper = BMS_BIL_Wrapper_IN_Fly;
    BMS_BIL_Wrapper_B.State_Required = Fly;
  } else if (BMS_BIL_Wrapper_DW.is_c1_BMS_BIL_Wrapper == BMS_BIL_Wrapper_IN_Fly)
  {
    BMS_BIL_Wrapper_DW.is_c1_BMS_BIL_Wrapper = BMS_BIL_Wrapper_IN_step_2;
  } else {
    /* case IN_step_2: */
  }

  /* End of Test Sequence: '<Root>/Test Sequence' */

  /* Chart: '<S7>/BMS_States' incorporates:
   *  BusCreator generated from: '<S7>/BMS_States'
   *  DataTypeConversion: '<S10>/Cast To Single'
   *  MinMax: '<S11>/Max'
   *  MinMax: '<S11>/MinMax'
   *  UnitDelay generated from: '<Root>/Unit Delay'
   */
  if (BMS_BIL_Wrapper_DW.temporalCounter_i1_n < MAX_uint32_T) {
    BMS_BIL_Wrapper_DW.temporalCounter_i1_n++;
  }

  if (BMS_BIL_Wrapper_DW.is_active_c6_BMS_BIL_Wrapper == 0) {
    BMS_BIL_Wrapper_DW.is_active_c6_BMS_BIL_Wrapper = 1U;
    BMS_BIL_Wrapper_DW.is_Normal_State = BMS_BIL_Wrapper_IN_Standby;
    BMS_BIL_Wrapper_B.BMS_State_Out = Standbying;
    BMS_BIL_Wrapper_DW.is_Monitor_CurrentLim = BMS_BIL__IN_No_CurrentLim_Fault;
    BMS_BIL_Wrapper_DW.is_Monitor_CellVolt = BMS_BIL_Wrapper_IN_No_OV_UV;
    BMS_BIL_Wrapper_DW.Delta = fabsf(BMS_BIL_Wrapper_DW.UnitDelay_3_DSTATE -
      BMS_BIL_Wrapper_DW.UnitDelay_2_DSTATE);
    BMS_BIL_Wrapper_DW.FaultPresent = false;
    BMS_BIL_Wrapper_DW.is_Monitor_CellTemp = BMS_BIL_Wrapper_IN_No_OT_UT;
    BMS_BIL_Wrapper_DW.MaxCellTemp = BMS_BIL_Wrapper_maximum
      (BMS_BIL_Wrapper_DW.UnitDelay_5_DSTATE);
    BMS_BIL_Wrapper_DW.MinCellTemp = BMS_BIL_Wrapper_minimum
      (BMS_BIL_Wrapper_DW.UnitDelay_5_DSTATE);
  } else {
    switch (BMS_BIL_Wrapper_DW.is_Normal_State) {
     case BMS_BIL_Wrapper_IN_Charging:
      if ((BMS_BIL_Wrapper_B.State_Required != Charge) ||
          (BMS_BIL_Wrapper_B.State_Required == Standby)) {
        BMS_BIL_Wrapper_DW.is_Normal_State = BMS_BIL_Wrapper_IN_Standby;
        BMS_BIL_Wrapper_B.BMS_State_Out = Standbying;
      } else if (BMS_BIL_Wrapper_DW.FaultPresent) {
        BMS_BIL_Wrapper_DW.is_Normal_State = BMS_BIL_Wrapper_IN_Fault;
        BMS_BIL_Wrapper_B.BMS_State_Out = Fault;
      }
      break;

     case BMS_BIL_Wrapper_IN_Fault:
      BMS_BIL_Wrapper_B.BMS_State_Out = Fault;
      break;

     case BMS_BIL_Wrapper_IN_Flying:
      if ((BMS_BIL_Wrapper_B.State_Required != Fly) ||
          (BMS_BIL_Wrapper_B.State_Required == Standby)) {
        BMS_BIL_Wrapper_DW.is_Normal_State = BMS_BIL_Wrapper_IN_Standby;
        BMS_BIL_Wrapper_B.BMS_State_Out = Standbying;
      } else if (BMS_BIL_Wrapper_DW.FaultPresent) {
        BMS_BIL_Wrapper_DW.is_Normal_State = BMS_BIL_Wrapper_IN_Fault;
        BMS_BIL_Wrapper_B.BMS_State_Out = Fault;
      }
      break;

     default:
      /* case IN_Standby: */
      switch (BMS_BIL_Wrapper_B.State_Required) {
       case Fly:
        BMS_BIL_Wrapper_DW.is_Normal_State = BMS_BIL_Wrapper_IN_Flying;
        BMS_BIL_Wrapper_B.BMS_State_Out = Flying;
        break;

       case Charge:
        BMS_BIL_Wrapper_DW.is_Normal_State = BMS_BIL_Wrapper_IN_Charging;
        BMS_BIL_Wrapper_B.BMS_State_Out = Charging;
        break;

       default:
        if (BMS_BIL_Wrapper_DW.FaultPresent) {
          BMS_BIL_Wrapper_DW.is_Normal_State = BMS_BIL_Wrapper_IN_Fault;
          BMS_BIL_Wrapper_B.BMS_State_Out = Fault;
        }
        break;
      }
      break;
    }

    switch (BMS_BIL_Wrapper_DW.is_Monitor_CurrentLim) {
     case BMS_BIL__IN_No_CurrentLim_Fault:
      if ((BMS_BIL_Wrapper_DW.UnitDelay_4_DSTATE < (real32_T)
           rtb_DiscreteTimeIntegrator5) ||
          (BMS_BIL_Wrapper_DW.UnitDelay_4_DSTATE > rtb_DiscreteTimeIntegrator1))
      {
        BMS_BIL_Wrapper_DW.temporalCounter_i1_n = 0U;
        BMS_BIL_Wrapper_DW.is_Monitor_CurrentLim = BMS_BIL_Wrapper_IN_Wait;
      }
      break;

     case BMS_BIL_Wrapper_IN_OC_Fault:
      break;

     default:
      /* case IN_Wait: */
      if (BMS_BIL_Wrapper_DW.temporalCounter_i1_n >= 1000U) {
        BMS_BIL_Wrapper_DW.is_Monitor_CurrentLim = BMS_BIL_Wrapper_IN_OC_Fault;
        BMS_BIL_Wrapper_DW.FaultPresent = true;
      } else if ((BMS_BIL_Wrapper_DW.UnitDelay_4_DSTATE >= (real32_T)
                  rtb_DiscreteTimeIntegrator5) &&
                 (BMS_BIL_Wrapper_DW.UnitDelay_4_DSTATE <=
                  rtb_DiscreteTimeIntegrator1)) {
        BMS_BIL_Wrapper_DW.is_Monitor_CurrentLim =
          BMS_BIL__IN_No_CurrentLim_Fault;
      }
      break;
    }

    switch (BMS_BIL_Wrapper_DW.is_Monitor_CellVolt) {
     case BMS_BIL_Wrapper_IN_No_OV_UV:
      if (BMS_BIL_Wrapper_DW.Delta >= 0.02F) {
        BMS_BIL_Wrapper_DW.is_Monitor_CellVolt = BMS_BIL_Wrapper_IN_Sensor_Fault;
        BMS_BIL_Wrapper_DW.FaultPresent = true;
      } else if (rtb_Gain_p <= 3.0F) {
        BMS_BIL_Wrapper_DW.is_Monitor_CellVolt = BMS_BIL_Wrapper_IN_UV_Fault;
        BMS_BIL_Wrapper_DW.FaultPresent = true;
      } else if (maxV >= 4.2F) {
        BMS_BIL_Wrapper_DW.is_Monitor_CellVolt = BMS_BIL_Wrapper_IN_OV_Fault;
        BMS_BIL_Wrapper_DW.FaultPresent = true;
      } else {
        BMS_BIL_Wrapper_DW.Delta = fabsf(BMS_BIL_Wrapper_DW.UnitDelay_3_DSTATE -
          BMS_BIL_Wrapper_DW.UnitDelay_2_DSTATE);
      }
      break;

     case BMS_BIL_Wrapper_IN_OV_Fault:
     case BMS_BIL_Wrapper_IN_Sensor_Fault:
      break;

     default:
      /* case IN_UV_Fault: */
      break;
    }

    switch (BMS_BIL_Wrapper_DW.is_Monitor_CellTemp) {
     case BMS_BIL_Wrapper_IN_No_OT_UT:
      if (BMS_BIL_Wrapper_DW.MinCellTemp <= 253.0F) {
        BMS_BIL_Wrapper_DW.is_Monitor_CellTemp = BMS_BIL_Wrapper_IN_UT_Fault;
        BMS_BIL_Wrapper_DW.FaultPresent = true;
      } else if (BMS_BIL_Wrapper_DW.MaxCellTemp >= 333.0F) {
        BMS_BIL_Wrapper_DW.is_Monitor_CellTemp = BMS_BIL_Wrapper_IN_OT_Fault;
        BMS_BIL_Wrapper_DW.FaultPresent = true;
      } else {
        BMS_BIL_Wrapper_DW.MaxCellTemp = BMS_BIL_Wrapper_maximum
          (BMS_BIL_Wrapper_DW.UnitDelay_5_DSTATE);
        BMS_BIL_Wrapper_DW.MinCellTemp = BMS_BIL_Wrapper_minimum
          (BMS_BIL_Wrapper_DW.UnitDelay_5_DSTATE);
      }
      break;

     case BMS_BIL_Wrapper_IN_OT_Fault:
      break;

     default:
      /* case IN_UT_Fault: */
      break;
    }
  }

  /* End of Chart: '<S7>/BMS_States' */

  /* Chart: '<S8>/Chart' incorporates:
   *  MinMax: '<S11>/Max'
   *  UnitDelay generated from: '<Root>/Unit Delay'
   */
  if (BMS_BIL_Wrapper_DW.temporalCounter_i1 < MAX_uint32_T) {
    BMS_BIL_Wrapper_DW.temporalCounter_i1++;
  }

  if (BMS_BIL_Wrapper_DW.is_active_c8_BMS_BIL_Wrapper == 0) {
    BMS_BIL_Wrapper_DW.is_active_c8_BMS_BIL_Wrapper = 1U;
    BMS_BIL_Wrapper_DW.flgBalCompl = true;
    BMS_BIL_Wrapper_DW.temporalCounter_i1 = 0U;
    BMS_BIL_Wrapper_DW.is_c8_BMS_BIL_Wrapper = BMS_BIL_Wrappe_IN_Balancing_Off;
    for (i = 0; i < 14; i++) {
      BMS_BIL_Wrapper_B.Bal_Cmd[i] = false;
    }

    BMS_BIL_Wrapper_DW.DeltaCellVolt = maxV - maxV;
  } else if (BMS_BIL_Wrapper_DW.is_c8_BMS_BIL_Wrapper ==
             BMS_BIL_Wrappe_IN_Balancing_Off) {
    if (BMS_BIL_Wrapper_DW.flgBalInt && (BMS_BIL_Wrapper_B.BMS_State_Out ==
         Charging) && (BMS_BIL_Wrapper_DW.temporalCounter_i1 >= 5000.0F) &&
        (BMS_BIL_Wrapper_DW.DeltaCellVolt > 0.04F)) {
      BMS_BIL_Wrapper_DW.is_c8_BMS_BIL_Wrapper = BMS_BIL_Wrapper_IN_Balancing_On;
      BMS_BIL_Wrapper_DW.DeltaCellVolt = maxV - maxV;
      BMS_BIL_Wrapper_DW.is_Balancing_On = BMS_BIL_Wrapp_IN_Balance_Active;
      for (i = 0; i < 14; i++) {
        BMS_BIL_Wrapper_B.Bal_Cmd[i] = (BMS_BIL_Wrapper_DW.UnitDelay_1_DSTATE[i]
          - maxV > 0.02F);
      }

      BMS_BIL_Wrapper_DW.flgBalCompl = true;
      i = 0;
      exitg3 = false;
      while ((!exitg3) && (i < 14)) {
        if (BMS_BIL_Wrapper_B.Bal_Cmd[i]) {
          BMS_BIL_Wrapper_DW.flgBalCompl = false;
          exitg3 = true;
        } else {
          i++;
        }
      }
    } else {
      BMS_BIL_Wrapper_DW.DeltaCellVolt = maxV - maxV;
    }

    /* case IN_Balancing_On: */
  } else if (BMS_BIL_Wrapper_B.BMS_State_Out == Flying) {
    BMS_BIL_Wrapper_DW.is_Balancing_On = 0;
    BMS_BIL_Wrapper_DW.temporalCounter_i1 = 0U;
    BMS_BIL_Wrapper_DW.is_c8_BMS_BIL_Wrapper = BMS_BIL_Wrappe_IN_Balancing_Off;
    for (i = 0; i < 14; i++) {
      BMS_BIL_Wrapper_B.Bal_Cmd[i] = false;
    }

    BMS_BIL_Wrapper_DW.DeltaCellVolt = maxV - maxV;
  } else {
    BMS_BIL_Wrapper_DW.DeltaCellVolt = maxV - maxV;
    switch (BMS_BIL_Wrapper_DW.is_Balancing_On) {
     case BMS_BIL_Wrapp_IN_Balance_Active:
      if (BMS_BIL_Wrapper_DW.flgBalCompl) {
        BMS_BIL_Wrapper_DW.temporalCounter_i1 = 0U;
        BMS_BIL_Wrapper_DW.is_Balancing_On = BMS_BIL_W_IN_Balance_Not_Active;
      } else {
        for (i = 0; i < 14; i++) {
          BMS_BIL_Wrapper_B.Bal_Cmd[i] =
            (BMS_BIL_Wrapper_DW.UnitDelay_1_DSTATE[i] - maxV > 0.02F);
        }

        BMS_BIL_Wrapper_DW.flgBalCompl = true;
        i = 0;
        exitg2 = false;
        while ((!exitg2) && (i < 14)) {
          if (BMS_BIL_Wrapper_B.Bal_Cmd[i]) {
            BMS_BIL_Wrapper_DW.flgBalCompl = false;
            exitg2 = true;
          } else {
            i++;
          }
        }
      }
      break;

     default:
      /* case IN_Balance_Not_Active: */
      if ((BMS_BIL_Wrapper_DW.temporalCounter_i1 >= 10000.0F) &&
          (BMS_BIL_Wrapper_DW.DeltaCellVolt > 0.04F)) {
        BMS_BIL_Wrapper_DW.is_Balancing_On = BMS_BIL_Wrapp_IN_Balance_Active;
        for (i = 0; i < 14; i++) {
          BMS_BIL_Wrapper_B.Bal_Cmd[i] =
            (BMS_BIL_Wrapper_DW.UnitDelay_1_DSTATE[i] - maxV > 0.02F);
        }

        BMS_BIL_Wrapper_DW.flgBalCompl = true;
        i = 0;
        exitg1 = false;
        while ((!exitg1) && (i < 14)) {
          if (BMS_BIL_Wrapper_B.Bal_Cmd[i]) {
            BMS_BIL_Wrapper_DW.flgBalCompl = false;
            exitg1 = true;
          } else {
            i++;
          }
        }
      } else if (BMS_BIL_Wrapper_DW.temporalCounter_i1 >= 30000.0F) {
        BMS_BIL_Wrapper_DW.is_Balancing_On = 0;
        BMS_BIL_Wrapper_DW.temporalCounter_i1 = 0U;
        BMS_BIL_Wrapper_DW.is_c8_BMS_BIL_Wrapper =
          BMS_BIL_Wrappe_IN_Balancing_Off;
        for (i = 0; i < 14; i++) {
          BMS_BIL_Wrapper_B.Bal_Cmd[i] = false;
        }
      }
      break;
    }
  }

  /* End of Chart: '<S8>/Chart' */

  /* Gain: '<S74>/Gain' incorporates:
   *  DataTypeConversion: '<S74>/Cast To Single'
   *  DiscreteIntegrator: '<S74>/Discrete-Time Integrator'
   */
  rtb_Gain_p = 5.34188039E-5F * (real32_T)
    BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator_DSTATE;

  /* SignalConversion generated from: '<S58>/Vector Concatenate' incorporates:
   *  Constant: '<S58>/Noreg_17'
   */
  rtb_VectorConcatenate[0] = 0;

  /* SignalConversion generated from: '<S58>/Vector Concatenate' incorporates:
   *  Constant: '<S58>/Noreg_16'
   */
  rtb_VectorConcatenate[1] = 0;

  /* Switch: '<S58>/Bal_12' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S58>/Constant1'
   */
  if (BMS_BIL_Wrapper_B.Bal_Cmd[11]) {
    rtb_VectorConcatenate[6] = 1;
  } else {
    rtb_VectorConcatenate[6] = 0;
  }

  /* Switch: '<S58>/Bal_10' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S58>/Constant1'
   */
  if (BMS_BIL_Wrapper_B.Bal_Cmd[9]) {
    rtb_VectorConcatenate2[0] = 1;
  } else {
    rtb_VectorConcatenate2[0] = 0;
  }

  /* Switch: '<S58>/Bal_9' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S58>/Constant1'
   */
  if (BMS_BIL_Wrapper_B.Bal_Cmd[8]) {
    rtb_VectorConcatenate2[2] = 1;
  } else {
    rtb_VectorConcatenate2[2] = 0;
  }

  /* Switch: '<S58>/Bal_8' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S58>/Constant1'
   */
  if (BMS_BIL_Wrapper_B.Bal_Cmd[7]) {
    rtb_VectorConcatenate2[4] = 1;
  } else {
    rtb_VectorConcatenate2[4] = 0;
  }

  /* Switch: '<S58>/Bal_7' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S58>/Constant1'
   */
  if (BMS_BIL_Wrapper_B.Bal_Cmd[6]) {
    rtb_VectorConcatenate2[6] = 1;
  } else {
    rtb_VectorConcatenate2[6] = 0;
  }

  /* Switch: '<S58>/Bal_6' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S58>/Constant1'
   */
  if (BMS_BIL_Wrapper_B.Bal_Cmd[5]) {
    rtb_VectorConcatenate6[2] = 1;
  } else {
    rtb_VectorConcatenate6[2] = 0;
  }

  /* Switch: '<S58>/Bal_5' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S58>/Constant1'
   */
  if (BMS_BIL_Wrapper_B.Bal_Cmd[4]) {
    rtb_VectorConcatenate6[4] = 1;
  } else {
    rtb_VectorConcatenate6[4] = 0;
  }

  /* Switch: '<S58>/Bal_4' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S58>/Constant1'
   */
  if (BMS_BIL_Wrapper_B.Bal_Cmd[3]) {
    rtb_VectorConcatenate6[6] = 1;
  } else {
    rtb_VectorConcatenate6[6] = 0;
  }

  /* Switch: '<S58>/Bal_3' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S58>/Constant1'
   */
  if (BMS_BIL_Wrapper_B.Bal_Cmd[2]) {
    rtb_VectorConcatenate4[0] = 1;
  } else {
    rtb_VectorConcatenate4[0] = 0;
  }

  /* Switch: '<S58>/Bal_2' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S58>/Constant1'
   */
  if (BMS_BIL_Wrapper_B.Bal_Cmd[1]) {
    rtb_VectorConcatenate4[2] = 1;
  } else {
    rtb_VectorConcatenate4[2] = 0;
  }

  /* Switch: '<S58>/Bal_1' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S58>/Constant1'
   */
  if (BMS_BIL_Wrapper_B.Bal_Cmd[0]) {
    rtb_VectorConcatenate4[4] = 1;
  } else {
    rtb_VectorConcatenate4[4] = 0;
  }

  /* SignalConversion generated from: '<S58>/Vector Concatenate' incorporates:
   *  Constant: '<S58>/Bal_14'
   */
  rtb_VectorConcatenate[2] = 0;

  /* SignalConversion generated from: '<S58>/Vector Concatenate' incorporates:
   *  Constant: '<S58>/Bal_13'
   */
  rtb_VectorConcatenate[4] = 0;

  /* Switch: '<S58>/Bal_11' incorporates:
   *  Constant: '<S58>/Constant'
   *  Constant: '<S58>/Constant1'
   */
  if (BMS_BIL_Wrapper_B.Bal_Cmd[10]) {
    rtb_Bal_11_idx_0 = 1;
  } else {
    rtb_Bal_11_idx_0 = 0;
  }

  /* End of Switch: '<S58>/Bal_11' */

  /* Switch: '<S58>/Bal_12' incorporates:
   *  Constant: '<S58>/Constant'
   */
  rtb_VectorConcatenate[7] = 0;

  /* Switch: '<S58>/Bal_10' incorporates:
   *  Constant: '<S58>/Constant'
   */
  rtb_VectorConcatenate2[1] = 0;

  /* Switch: '<S58>/Bal_9' incorporates:
   *  Constant: '<S58>/Constant'
   */
  rtb_VectorConcatenate2[3] = 0;

  /* Switch: '<S58>/Bal_8' incorporates:
   *  Constant: '<S58>/Constant'
   */
  rtb_VectorConcatenate2[5] = 0;

  /* Switch: '<S58>/Bal_7' incorporates:
   *  Constant: '<S58>/Constant'
   */
  rtb_VectorConcatenate2[7] = 0;

  /* Switch: '<S58>/Bal_6' incorporates:
   *  Constant: '<S58>/Constant'
   */
  rtb_VectorConcatenate6[3] = 0;

  /* Switch: '<S58>/Bal_5' incorporates:
   *  Constant: '<S58>/Constant'
   */
  rtb_VectorConcatenate6[5] = 0;

  /* Switch: '<S58>/Bal_4' incorporates:
   *  Constant: '<S58>/Constant'
   */
  rtb_VectorConcatenate6[7] = 0;

  /* Switch: '<S58>/Bal_3' incorporates:
   *  Constant: '<S58>/Constant'
   */
  rtb_VectorConcatenate4[1] = 0;

  /* Switch: '<S58>/Bal_2' incorporates:
   *  Constant: '<S58>/Constant'
   */
  rtb_VectorConcatenate4[3] = 0;

  /* Switch: '<S58>/Bal_1' incorporates:
   *  Constant: '<S58>/Constant'
   */
  rtb_VectorConcatenate4[5] = 0;

  /* SignalConversion generated from: '<S58>/Vector Concatenate' incorporates:
   *  Constant: '<S58>/Bal_14'
   */
  rtb_VectorConcatenate[3] = 0;

  /* SignalConversion generated from: '<S58>/Vector Concatenate' incorporates:
   *  Constant: '<S58>/Bal_13'
   */
  rtb_VectorConcatenate[5] = 0;
  for (i = 0; i < 8; i++) {
    /* SignalConversion generated from: '<S58>/Vector Concatenate3' */
    rtb_VectorConcatenate3[i] = BMS_BIL_Wrapper_ConstB.IntegertoBitConverter15[i];

    /* SignalConversion generated from: '<S58>/Vector Concatenate3' */
    rtb_VectorConcatenate3[i + 8] =
      BMS_BIL_Wrapper_ConstB.IntegertoBitConverter1[i];

    /* SignalConversion generated from: '<S58>/Vector Concatenate3' */
    rtb_VectorConcatenate3[i + 16] = rtb_VectorConcatenate[i];

    /* SignalConversion generated from: '<S58>/Vector Concatenate3' */
    rtb_VectorConcatenate3[i + 24] = rtb_VectorConcatenate2[i];
  }

  /* SignalConversion generated from: '<S58>/Vector Concatenate3' */
  rtb_VectorConcatenate3[32] = rtb_Bal_11_idx_0;
  rtb_VectorConcatenate3[33] = 0.0;

  /* MATLAB Function: '<S58>/MATLAB Function' incorporates:
   *  Concatenate: '<S58>/Vector Concatenate3'
   */
  for (i_0 = 0; i_0 < 6; i_0++) {
    rtb_crc[i_0] = b[i_0];
  }

  for (i = 0; i < 34; i++) {
    s = rtb_crc[0];
    for (i_0 = 0; i_0 < 5; i_0++) {
      rtb_crc[i_0] = rtb_crc[i_0 + 1];
    }

    rtb_crc[5] = false;
    if ((rtb_VectorConcatenate3[i] != 0.0) != (int32_T)s) {
      for (i_0 = 0; i_0 < 6; i_0++) {
        rtb_crc[i_0] = rtb_crc[i_0] ^ varargin_2[i_0];
      }
    }
  }

  /* SignalConversion generated from: '<S58>/Vector Concatenate6' incorporates:
   *  Constant: '<S58>/Constant4'
   */
  rtb_VectorConcatenate6[0] = 0;

  /* SignalConversion generated from: '<S58>/Vector Concatenate6' incorporates:
   *  Constant: '<S58>/Constant5'
   */
  rtb_VectorConcatenate6[1] = 0;

  /* SignalConversion generated from: '<S58>/Vector Concatenate4' incorporates:
   *  Constant: '<S58>/Noreg_3'
   */
  rtb_VectorConcatenate4[6] = 0;

  /* SignalConversion generated from: '<S58>/Vector Concatenate4' incorporates:
   *  Constant: '<S58>/Noreg_2'
   */
  rtb_VectorConcatenate4[7] = 0;
  for (i = 0; i < 8; i++) {
    /* SignalConversion generated from: '<S58>/Vector Concatenate7' */
    rtb_VectorConcatenate3[i] = BMS_BIL_Wrapper_ConstB.IntegertoBitConverter[i];

    /* SignalConversion generated from: '<S58>/Vector Concatenate7' */
    rtb_VectorConcatenate3[i + 8] =
      BMS_BIL_Wrapper_ConstB.IntegertoBitConverter16[i];

    /* SignalConversion generated from: '<S58>/Vector Concatenate7' */
    rtb_VectorConcatenate3[i + 16] = rtb_VectorConcatenate6[i];

    /* SignalConversion generated from: '<S58>/Vector Concatenate7' */
    rtb_VectorConcatenate3[i + 24] = rtb_VectorConcatenate4[i];
  }

  /* SignalConversion generated from: '<S58>/Vector Concatenate7' incorporates:
   *  Constant: '<S58>/bal_on'
   */
  rtb_VectorConcatenate3[32] = 0.0;

  /* SignalConversion generated from: '<S58>/Vector Concatenate7' incorporates:
   *  Constant: '<S58>/eof_bal'
   */
  rtb_VectorConcatenate3[33] = 0.0;

  /* MATLAB Function: '<S58>/MATLAB Function1' incorporates:
   *  Concatenate: '<S58>/Vector Concatenate7'
   *  MATLAB Function: '<S58>/MATLAB Function'
   */
  for (i_0 = 0; i_0 < 6; i_0++) {
    rtb_crc_1[i_0] = b[i_0];
  }

  for (i = 0; i < 34; i++) {
    s = rtb_crc_1[0];
    for (i_0 = 0; i_0 < 5; i_0++) {
      rtb_crc_1[i_0] = rtb_crc_1[i_0 + 1];
    }

    rtb_crc_1[5] = false;
    if ((rtb_VectorConcatenate3[i] != 0.0) != (int32_T)s) {
      for (i_0 = 0; i_0 < 6; i_0++) {
        rtb_crc_1[i_0] = rtb_crc_1[i_0] ^ varargin_2[i_0];
      }
    }
  }

  /* End of MATLAB Function: '<S58>/MATLAB Function1' */

  /* MultiPortSwitch: '<S48>/Multiport Switch' incorporates:
   *  Bias: '<S48>/Bias'
   *  Constant: '<S48>/Bal_Mode'
   *  Constant: '<S48>/Bal_On'
   *  Constant: '<S48>/Constant'
   *  Constant: '<S48>/Constant13'
   *  DataTypeConversion: '<S55>/Data Type Conversion'
   *  DataTypeConversion: '<S55>/Data Type Conversion1'
   *  UnitDelay: '<S54>/Output'
   */
  switch ((uint16_T)(BMS_BIL_Wrapper_DW.Output_DSTATE + 1)) {
   case 1:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = BMS_BIL_Wrapper_ConstP.Constant_Value_by[i];
    }
    break;

   case 2:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 3:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 4:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 5:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 6:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 7:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 8:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 9:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 10:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 11:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 12:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 13:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 14:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 15:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 16:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = BMS_BIL_Wrapper_ConstP.Constant13_Value[i];
    }
    break;

   case 17:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 18:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 19:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 20:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 21:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 22:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 23:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 24:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 25:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 26:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 27:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 28:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 29:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 30:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 31:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 32:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 33:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 34:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = 0U;
    }
    break;

   case 35:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = BMS_BIL_Wrapper_ConstP.Bal_On_Value[i];
    }
    break;

   case 36:
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = BMS_BIL_Wrapper_ConstP.Bal_Mode_Value[i];
    }
    break;

   case 37:
    /* SignalConversion generated from: '<S55>/Vector Concatenate' incorporates:
     *  Constant: '<S58>/Constant2'
     */
    rtb_VectorConcatenate1[1] = 64U;

    /* SignalConversion generated from: '<S55>/Vector Concatenate' incorporates:
     *  Constant: '<S58>/Constant3'
     */
    rtb_VectorConcatenate1[0] = 194U;

    /* DataTypeConversion: '<S58>/Cast To Double' */
    for (i = 0; i < 6; i++) {
      rtb_VectorConcatenate6[i + 2] = (int8_T)rtb_crc[i];
    }

    /* End of DataTypeConversion: '<S58>/Cast To Double' */

    /* SignalConversion generated from: '<S58>/Vector Concatenate1' */
    rtb_VectorConcatenate6[0] = (int8_T)rtb_Bal_11_idx_0;
    rtb_VectorConcatenate6[1] = 0;

    /* S-Function (scominttobit): '<S58>/Bit to Integer Converter1' */
    /* Bit to Integer Conversion */
    pinWriteLoc = 0U;

    /* S-Function (scominttobit): '<S58>/Bit to Integer Converter5' */
    /* Bit to Integer Conversion */
    pinMask = 0U;

    /* S-Function (scominttobit): '<S58>/Bit to Integer Converter' */
    /* Bit to Integer Conversion */
    intVal = 0U;
    for (i = 0; i < 8; i++) {
      /* S-Function (scominttobit): '<S58>/Bit to Integer Converter1' incorporates:
       *  Concatenate: '<S58>/Vector Concatenate1'
       */
      /* Input bit order is MSB first */
      pinWriteLoc = pinWriteLoc << 1U | (uint32_T)rtb_VectorConcatenate6[i];

      /* S-Function (scominttobit): '<S58>/Bit to Integer Converter5' incorporates:
       *  Concatenate: '<S58>/Vector Concatenate2'
       */
      /* Input bit order is MSB first */
      pinMask = pinMask << 1U | (uint32_T)rtb_VectorConcatenate2[i];

      /* S-Function (scominttobit): '<S58>/Bit to Integer Converter' incorporates:
       *  Concatenate: '<S58>/Vector Concatenate'
       */
      /* Input bit order is MSB first */
      intVal = intVal << 1U | (uint32_T)rtb_VectorConcatenate[i];
    }

    /* S-Function (scominttobit): '<S58>/Bit to Integer Converter1' */
    rtb_VectorConcatenate1[4] = pinWriteLoc;

    /* S-Function (scominttobit): '<S58>/Bit to Integer Converter5' */
    rtb_VectorConcatenate1[3] = pinMask;

    /* S-Function (scominttobit): '<S58>/Bit to Integer Converter' */
    rtb_VectorConcatenate1[2] = intVal;
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = (uint8_T)(int32_T)fmod(rtb_VectorConcatenate1[i],
        256.0);
    }
    break;

   default:
    /* SignalConversion generated from: '<S55>/Vector Concatenate1' incorporates:
     *  Constant: '<S58>/Constant7'
     */
    rtb_VectorConcatenate1[1] = 68U;

    /* SignalConversion generated from: '<S55>/Vector Concatenate1' incorporates:
     *  Constant: '<S58>/Constant6'
     */
    rtb_VectorConcatenate1[0] = 194U;

    /* DataTypeConversion: '<S58>/Cast To Double1' */
    for (i = 0; i < 6; i++) {
      rtb_VectorConcatenate[i + 2] = (int8_T)rtb_crc_1[i];
    }

    /* End of DataTypeConversion: '<S58>/Cast To Double1' */

    /* SignalConversion generated from: '<S58>/Vector Concatenate5' incorporates:
     *  Constant: '<S58>/eof_bal'
     */
    rtb_VectorConcatenate[1] = 0;

    /* SignalConversion generated from: '<S58>/Vector Concatenate5' incorporates:
     *  Constant: '<S58>/bal_on'
     */
    rtb_VectorConcatenate[0] = 0;

    /* S-Function (scominttobit): '<S58>/Bit to Integer Converter4' */
    /* Bit to Integer Conversion */
    pinWriteLoc = 0U;

    /* S-Function (scominttobit): '<S58>/Bit to Integer Converter3' */
    /* Bit to Integer Conversion */
    pinMask = 0U;

    /* S-Function (scominttobit): '<S58>/Bit to Integer Converter2' */
    /* Bit to Integer Conversion */
    intVal = 0U;
    for (i = 0; i < 8; i++) {
      /* S-Function (scominttobit): '<S58>/Bit to Integer Converter4' incorporates:
       *  Concatenate: '<S58>/Vector Concatenate5'
       */
      /* Input bit order is MSB first */
      pinWriteLoc = pinWriteLoc << 1U | (uint32_T)rtb_VectorConcatenate[i];

      /* S-Function (scominttobit): '<S58>/Bit to Integer Converter3' incorporates:
       *  Concatenate: '<S58>/Vector Concatenate4'
       */
      /* Input bit order is MSB first */
      pinMask = pinMask << 1U | (uint32_T)rtb_VectorConcatenate4[i];

      /* S-Function (scominttobit): '<S58>/Bit to Integer Converter2' incorporates:
       *  Concatenate: '<S58>/Vector Concatenate6'
       */
      /* Input bit order is MSB first */
      intVal = intVal << 1U | (uint32_T)rtb_VectorConcatenate6[i];
    }

    /* S-Function (scominttobit): '<S58>/Bit to Integer Converter4' */
    rtb_VectorConcatenate1[4] = pinWriteLoc;

    /* S-Function (scominttobit): '<S58>/Bit to Integer Converter3' */
    rtb_VectorConcatenate1[3] = pinMask;

    /* S-Function (scominttobit): '<S58>/Bit to Integer Converter2' */
    rtb_VectorConcatenate1[2] = intVal;
    for (i = 0; i < 5; i++) {
      rtb_MultiportSwitch[i] = (uint8_T)(int32_T)fmod(rtb_VectorConcatenate1[i],
        256.0);
    }
    break;
  }

  /* End of MultiPortSwitch: '<S48>/Multiport Switch' */

  /* MATLABSystem: '<Root>/SPI Controller Transfer' */
  wrDataRaw1[0] = 0U;
  for (i = 0; i < 5; i++) {
    wrDataRaw1[i + 1] = rtb_MultiportSwitch[i];
  }

  MW_SPI_SetSlaveSelect(BMS_BIL_Wrapper_DW.obj.MW_SPI_HANDLE, 0, true);
  status = MW_STM32_SPI_SetFormat(BMS_BIL_Wrapper_DW.obj.MW_SPI_HANDLE, 0U,
    1792U, MW_SPI_MODE_2);
  if (status == 0) {
    MW_SPI_ControllerWriteRead_Databits(BMS_BIL_Wrapper_DW.obj.MW_SPI_HANDLE,
      &wrDataRaw1[0], &rdDataRaw[0], 0, 6U, 0, 1U);
  }

  /* Outputs for Enabled SubSystem: '<S3>/Proceed_Cell_Volt' incorporates:
   *  EnablePort: '<S71>/Enable'
   */
  /* Logic: '<S3>/AND' incorporates:
   *  Bias: '<S48>/Bias'
   *  Constant: '<S63>/Constant'
   *  Constant: '<S64>/Constant'
   *  RelationalOperator: '<S63>/Compare'
   *  RelationalOperator: '<S64>/Compare'
   *  UnitDelay: '<S54>/Output'
   */
  if (((uint16_T)(BMS_BIL_Wrapper_DW.Output_DSTATE + 1) > 1) && ((uint16_T)
       (BMS_BIL_Wrapper_DW.Output_DSTATE + 1) <= 15)) {
    /* S-Function (sfix_udelay): '<S71>/Tapped Delay' incorporates:
     *  UnitDelay generated from: '<Root>/Unit Delay'
     */
    for (i = 0; i < 14; i++) {
      BMS_BIL_Wrapper_DW.UnitDelay_1_DSTATE[i] =
        BMS_BIL_Wrapper_DW.TappedDelay_X_l[i];
    }

    /* End of S-Function (sfix_udelay): '<S71>/Tapped Delay' */

    /* DataTypeConversion: '<S71>/Cast To Single2' incorporates:
     *  Gain: '<S71>/Gain'
     *  Gain: '<S71>/Gain1'
     *  MATLABSystem: '<Root>/SPI Controller Transfer'
     *  Sum: '<S71>/Sum'
     * */
    BMS_BIL_Wrapper_B.CastToSingle2 = (real32_T)((((uint32_T)rdDataRaw[3] << 15)
      + ((uint32_T)rdDataRaw[4] << 7)) * 3131409116ULL) * 2.22044605E-16F;

    /* Update for S-Function (sfix_udelay): '<S71>/Tapped Delay' */
    for (i = 0; i < 13; i++) {
      BMS_BIL_Wrapper_DW.TappedDelay_X_l[i] =
        BMS_BIL_Wrapper_DW.TappedDelay_X_l[i + 1];
    }

    BMS_BIL_Wrapper_DW.TappedDelay_X_l[13] = BMS_BIL_Wrapper_B.CastToSingle2;

    /* End of Update for S-Function (sfix_udelay): '<S71>/Tapped Delay' */
  }

  /* End of Logic: '<S3>/AND' */
  /* End of Outputs for SubSystem: '<S3>/Proceed_Cell_Volt' */
  for (i = 0; i < 14; i++) {
    /* Sum: '<S74>/Sum' incorporates:
     *  Lookup_n-D: '<S74>/1-D Lookup Table'
     *  UnitDelay generated from: '<Root>/Unit Delay'
     */
    BMS_BIL_Wrapper_DW.UnitDelay_6_DSTATE[i] = look1_iflf_binlxpw
      (BMS_BIL_Wrapper_DW.UnitDelay_1_DSTATE[i],
       BMS_BIL_Wrapper_ConstP.uDLookupTable_bp01Data_d,
       BMS_BIL_Wrapper_ConstP.uDLookupTable_tableData_o, 8U) - rtb_Gain_p;
  }

  /* Outputs for Enabled SubSystem: '<S3>/Proceed_Temp' incorporates:
   *  EnablePort: '<S73>/Enable'
   */
  /* Logic: '<S68>/OR' incorporates:
   *  Bias: '<S48>/Bias'
   *  Constant: '<S75>/Constant'
   *  Constant: '<S76>/Constant'
   *  Constant: '<S77>/Constant'
   *  Constant: '<S78>/Constant'
   *  Constant: '<S79>/Constant'
   *  RelationalOperator: '<S75>/Compare'
   *  RelationalOperator: '<S76>/Compare'
   *  RelationalOperator: '<S77>/Compare'
   *  RelationalOperator: '<S78>/Compare'
   *  RelationalOperator: '<S79>/Compare'
   *  UnitDelay: '<S54>/Output'
   */
  if (((uint16_T)(BMS_BIL_Wrapper_DW.Output_DSTATE + 1) == 7) || ((uint16_T)
       (BMS_BIL_Wrapper_DW.Output_DSTATE + 1) == 8) || ((uint16_T)
       (BMS_BIL_Wrapper_DW.Output_DSTATE + 1) == 9) || ((uint16_T)
       (BMS_BIL_Wrapper_DW.Output_DSTATE + 1) == 10) || ((uint16_T)
       (BMS_BIL_Wrapper_DW.Output_DSTATE + 1) == 13)) {
    /* S-Function (sfix_udelay): '<S73>/Tapped Delay' incorporates:
     *  UnitDelay generated from: '<Root>/Unit Delay'
     */
    for (i = 0; i < 5; i++) {
      BMS_BIL_Wrapper_DW.UnitDelay_5_DSTATE[i] =
        BMS_BIL_Wrapper_DW.TappedDelay_X[i];
    }

    /* End of S-Function (sfix_udelay): '<S73>/Tapped Delay' */

    /* Product: '<S73>/Divide1' incorporates:
     *  Constant: '<S73>/Constant'
     *  DataTypeConversion: '<S73>/Cast To Double'
     *  Gain: '<S73>/Gain'
     *  Gain: '<S73>/Gain1'
     *  Gain: '<S73>/Gain2'
     *  MATLABSystem: '<Root>/SPI Controller Transfer'
     *  Product: '<S73>/Divide'
     *  S-Function (sfix_bitop): '<S73>/Bitwise AND'
     *  Sum: '<S73>/Sum'
     *  Sum: '<S73>/Sum1'
     * */
    rtb_DiscreteTimeIntegrator5 = (real_T)(((((((uint32_T)rdDataRaw[4] << 15) >>
      8) + ((uint32_T)rdDataRaw[3] << 15)) + ((uint32_T)floor((real_T)rdDataRaw
      [5] / 64.0) << 5)) & 65535U) * 3131409116ULL) * 8.8817841970012523E-16;

    /* DataTypeConversion: '<S73>/Cast To Single4' incorporates:
     *  Constant: '<S73>/Constant1'
     *  Constant: '<S73>/Constant2'
     *  Gain: '<S73>/Gain4'
     *  Math: '<S73>/Math Function'
     *  Math: '<S73>/Math Reciprocal'
     *  Product: '<S73>/Divide1'
     *  Sum: '<S73>/Sum1'
     *  Sum: '<S73>/Sum2'
     *
     * About '<S73>/Math Function':
     *  Operator: log
     *
     * About '<S73>/Math Reciprocal':
     *  Operator: reciprocal
     */
    BMS_BIL_Wrapper_B.CastToSingle4 = (real32_T)(1.0 / (log
      (rtb_DiscreteTimeIntegrator5 / (5.0 - rtb_DiscreteTimeIntegrator5)) *
      0.00025316455696202533 + 0.0033540164346805303));

    /* Update for S-Function (sfix_udelay): '<S73>/Tapped Delay' */
    BMS_BIL_Wrapper_DW.TappedDelay_X[0] = BMS_BIL_Wrapper_DW.TappedDelay_X[1];
    BMS_BIL_Wrapper_DW.TappedDelay_X[1] = BMS_BIL_Wrapper_DW.TappedDelay_X[2];
    BMS_BIL_Wrapper_DW.TappedDelay_X[2] = BMS_BIL_Wrapper_DW.TappedDelay_X[3];
    BMS_BIL_Wrapper_DW.TappedDelay_X[3] = BMS_BIL_Wrapper_DW.TappedDelay_X[4];
    BMS_BIL_Wrapper_DW.TappedDelay_X[4] = BMS_BIL_Wrapper_B.CastToSingle4;
  }

  /* End of Logic: '<S68>/OR' */
  /* End of Outputs for SubSystem: '<S3>/Proceed_Temp' */

  /* Outputs for Enabled SubSystem: '<S3>/Proceed_Batt_Volt_Monitor' incorporates:
   *  EnablePort: '<S69>/Enable'
   */
  /* RelationalOperator: '<S66>/Compare' incorporates:
   *  Bias: '<S48>/Bias'
   *  Constant: '<S66>/Constant'
   *  UnitDelay: '<S54>/Output'
   */
  if ((uint16_T)(BMS_BIL_Wrapper_DW.Output_DSTATE + 1) == 33) {
    /* DataTypeConversion: '<S69>/Cast To Single5' incorporates:
     *  Gain: '<S69>/Gain2'
     *  Gain: '<S69>/Gain3'
     *  MATLABSystem: '<Root>/SPI Controller Transfer'
     *  Sum: '<S69>/Sum2'
     *  UnitDelay generated from: '<Root>/Unit Delay'
     * */
    BMS_BIL_Wrapper_DW.UnitDelay_2_DSTATE = (real32_T)((((uint32_T)rdDataRaw[3] <<
      15) + ((uint32_T)rdDataRaw[4] << 7)) * 2924700930ULL) * 3.55271368E-15F;

    /* Product: '<S69>/Divide1' incorporates:
     *  Constant: '<S69>/Constant1'
     *  MATLABSystem: '<Root>/SPI Controller Transfer'
     * */
    BMS_BIL_Wrapper_B.V_Sum_LSB = (real_T)rdDataRaw[5] / 64.0;
  }

  /* End of RelationalOperator: '<S66>/Compare' */
  /* End of Outputs for SubSystem: '<S3>/Proceed_Batt_Volt_Monitor' */

  /* Outputs for Enabled SubSystem: '<S3>/Proceed_Batt_Volt_Sum' incorporates:
   *  EnablePort: '<S70>/Enable'
   */
  /* RelationalOperator: '<S65>/Compare' incorporates:
   *  Bias: '<S48>/Bias'
   *  Constant: '<S65>/Constant'
   *  UnitDelay: '<S54>/Output'
   */
  if ((uint16_T)(BMS_BIL_Wrapper_DW.Output_DSTATE + 1) == 32) {
    /* DataTypeConversion: '<S70>/Cast To Single1' */
    rtb_DiscreteTimeIntegrator5 = floor(BMS_BIL_Wrapper_B.V_Sum_LSB);
    if (rtIsNaN(rtb_DiscreteTimeIntegrator5) || rtIsInf
        (rtb_DiscreteTimeIntegrator5)) {
      rtb_DiscreteTimeIntegrator5 = 0.0;
    } else {
      rtb_DiscreteTimeIntegrator5 = fmod(rtb_DiscreteTimeIntegrator5, 65536.0);
    }

    /* DataTypeConversion: '<S70>/Cast To Single2' incorporates:
     *  Constant: '<S70>/Constant'
     *  DataTypeConversion: '<S70>/Cast To Double'
     *  DataTypeConversion: '<S70>/Cast To Single1'
     *  Gain: '<S70>/Gain'
     *  Gain: '<S70>/Gain1'
     *  MATLABSystem: '<Root>/SPI Controller Transfer'
     *  Product: '<S70>/Divide'
     *  Sum: '<S70>/Sum'
     *  Sum: '<S70>/Sum1'
     *  UnitDelay generated from: '<Root>/Unit Delay'
     * */
    BMS_BIL_Wrapper_DW.UnitDelay_3_DSTATE = (real32_T)((((uint32_T)(uint8_T)
      ((uint8_T)(rdDataRaw[3] + rdDataRaw[4]) + (uint32_T)floor((real_T)
      rdDataRaw[5] / 64.0)) << 15) + ((uint32_T)(rtb_DiscreteTimeIntegrator5 <
      0.0 ? (int32_T)(uint16_T)-(int16_T)(uint16_T)-rtb_DiscreteTimeIntegrator5 :
      (int32_T)(uint16_T)rtb_DiscreteTimeIntegrator5) << 13)) * 3131409116ULL) *
      3.46944695E-18F;
  }

  /* End of RelationalOperator: '<S65>/Compare' */
  /* End of Outputs for SubSystem: '<S3>/Proceed_Batt_Volt_Sum' */

  /* Outputs for Enabled SubSystem: '<S3>/Proceed_Current' incorporates:
   *  EnablePort: '<S72>/Enable'
   */
  /* RelationalOperator: '<S67>/Compare' incorporates:
   *  Bias: '<S48>/Bias'
   *  Constant: '<S67>/Constant'
   *  UnitDelay: '<S54>/Output'
   */
  if ((uint16_T)(BMS_BIL_Wrapper_DW.Output_DSTATE + 1) == 34) {
    /* Gain: '<S72>/Gain2' incorporates:
     *  Constant: '<S72>/Constant'
     *  DataTypeConversion: '<S72>/Cast To Single4'
     *  Gain: '<S72>/Coloumb_Count'
     *  Gain: '<S72>/Gain'
     *  Gain: '<S72>/Gain1'
     *  MATLABSystem: '<Root>/SPI Controller Transfer'
     *  Product: '<S72>/Divide'
     *  Sum: '<S72>/Sum'
     * */
    tmp_0 = 7205759403792793600ULL;
    tmp_1 = (uint64_T)((int64_T)floor(((real_T)((uint64_T)rdDataRaw[3] << 31) *
      4.76837158203125E-7 + (real_T)((uint64_T)rdDataRaw[4] << 31) *
      1.862645149230957E-9) + (real_T)rdDataRaw[5] / 64.0) * 1497446876LL);
    sMultiWordMul(&tmp_0, 1, &tmp_1, 1, &tmp.chunks[0U], 2);

    /* DataTypeConversion: '<S72>/Cast To Single3' incorporates:
     *  UnitDelay generated from: '<Root>/Unit Delay'
     */
    BMS_BIL_Wrapper_DW.UnitDelay_4_DSTATE = sMultiWord2Single(&tmp.chunks[0U], 2,
      0) * 1.23259516E-32F;
  }

  /* End of RelationalOperator: '<S67>/Compare' */
  /* End of Outputs for SubSystem: '<S3>/Proceed_Current' */

  /* MATLABSystem: '<S62>/Digital Port Write' incorporates:
   *  Bias: '<S48>/Bias'
   *  Constant: '<S49>/Constant'
   *  Constant: '<S50>/Constant'
   *  Constant: '<S51>/Constant'
   *  Constant: '<S52>/Constant'
   *  Logic: '<S2>/AND'
   *  Logic: '<S2>/AND1'
   *  Logic: '<S2>/OR'
   *  RelationalOperator: '<S49>/Compare'
   *  RelationalOperator: '<S50>/Compare'
   *  RelationalOperator: '<S51>/Compare'
   *  RelationalOperator: '<S52>/Compare'
   *  UnitDelay: '<S54>/Output'
   */
  portNameLoc = GPIOB;
  shiftVal = MW_GPIO_BIT_SHIFT;
  pinWriteLoc = mw_shift((uint32_T)((((uint16_T)
    (BMS_BIL_Wrapper_DW.Output_DSTATE + 1) <= 1) || ((uint16_T)
    (BMS_BIL_Wrapper_DW.Output_DSTATE + 1) > 15)) && (((uint16_T)
    (BMS_BIL_Wrapper_DW.Output_DSTATE + 1) <= 16) || ((uint16_T)
    (BMS_BIL_Wrapper_DW.Output_DSTATE + 1) > 34))), shiftVal);
  pinMask = mw_shift(1U, shiftVal);
  LL_GPIO_SetOutputPin(portNameLoc, pinWriteLoc);
  LL_GPIO_ResetOutputPin(portNameLoc, ~pinWriteLoc & pinMask);

  /* Switch: '<S57>/FixPt Switch' incorporates:
   *  Constant: '<S56>/FixPt Constant'
   *  Sum: '<S56>/FixPt Sum1'
   *  UnitDelay: '<S54>/Output'
   */
  BMS_BIL_Wrapper_DW.Output_DSTATE++;

  /* MinMax: '<S6>/Max' */
  rtb_DiscreteTimeIntegrator1 = fmaxf(fmaxf(fmaxf(fmaxf(rtb_Tmod[0], rtb_Tmod[1]),
    rtb_Tmod[2]), rtb_Tmod[3]), rtb_Tmod[4]);

  /* MinMax: '<S6>/Max1' incorporates:
   *  MinMax: '<S6>/Max'
   */
  rtb_Gain_p = fminf(fminf(fminf(fminf(rtb_Tmod[0], rtb_Tmod[1]), rtb_Tmod[2]),
    rtb_Tmod[3]), rtb_Tmod[4]);

  /* Chart: '<S6>/Chart' incorporates:
   *  Constant: '<S40>/Constant'
   *  Constant: '<S41>/Constant'
   *  Constant: '<S42>/Constant'
   *  Constant: '<S43>/Constant'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator1'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator2'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator3'
   *  RelationalOperator: '<S40>/Compare'
   *  RelationalOperator: '<S41>/Compare'
   *  RelationalOperator: '<S42>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   */
  if (BMS_BIL_Wrapper_DW.is_active_c2_BMS_BIL_Wrapper == 0) {
    BMS_BIL_Wrapper_DW.is_active_c2_BMS_BIL_Wrapper = 1U;
  } else if (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator3_DSTATE >= 0.1F) {
    BMS_BIL_Wrapper_B.Fault_Level_l.UV = 4.0;
  } else if (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator2_DSTATE >= 2.0F) {
    BMS_BIL_Wrapper_B.Fault_Level_l.UV = 3.0;
  } else if (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator1_DSTATE >= 1.0F) {
    BMS_BIL_Wrapper_B.Fault_Level_l.UV = 2.0;
  } else {
    BMS_BIL_Wrapper_B.Fault_Level_l.UV =
      (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator_DSTATE_g >= 0.5F);
  }

  /* End of Chart: '<S6>/Chart' */

  /* Chart: '<S6>/Chart1' incorporates:
   *  Constant: '<S21>/Constant'
   *  Constant: '<S22>/Constant'
   *  Constant: '<S23>/Constant'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator5'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator6'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator7'
   *  RelationalOperator: '<S21>/Compare'
   *  RelationalOperator: '<S22>/Compare'
   *  RelationalOperator: '<S23>/Compare'
   */
  if (BMS_BIL_Wrapper_DW.is_active_c4_BMS_BIL_Wrapper == 0) {
    BMS_BIL_Wrapper_DW.is_active_c4_BMS_BIL_Wrapper = 1U;
  } else if (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator7_DSTATE >= 0.1) {
    BMS_BIL_Wrapper_B.Fault_Level_o.OV = 3.0;
  } else if (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator6_DSTATE >= 2.0) {
    BMS_BIL_Wrapper_B.Fault_Level_o.OV = 2.0;
  } else {
    BMS_BIL_Wrapper_B.Fault_Level_o.OV =
      (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator5_DSTATE >= 1.0);
  }

  /* End of Chart: '<S6>/Chart1' */

  /* Chart: '<S6>/Chart2' incorporates:
   *  Constant: '<S26>/Constant'
   *  Constant: '<S27>/Constant'
   *  Constant: '<S29>/Constant'
   *  Constant: '<S30>/Constant'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator10'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator4'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator8'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator9'
   *  RelationalOperator: '<S26>/Compare'
   *  RelationalOperator: '<S27>/Compare'
   *  RelationalOperator: '<S29>/Compare'
   *  RelationalOperator: '<S30>/Compare'
   */
  if (BMS_BIL_Wrapper_DW.is_active_c5_BMS_BIL_Wrapper == 0) {
    BMS_BIL_Wrapper_DW.is_active_c5_BMS_BIL_Wrapper = 1U;
  } else if (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator10_DSTATE >= 0.1F) {
    BMS_BIL_Wrapper_B.Fault_Level_m.OT = 4.0;
  } else if (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator9_DSTATE >= 2.0) {
    BMS_BIL_Wrapper_B.Fault_Level_m.OT = 3.0;
  } else if (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator8_DSTATE >= 1.0) {
    BMS_BIL_Wrapper_B.Fault_Level_m.OT = 2.0;
  } else {
    BMS_BIL_Wrapper_B.Fault_Level_m.OT =
      (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator4_DSTATE >= 0.5);
  }

  /* End of Chart: '<S6>/Chart2' */

  /* Chart: '<S6>/Chart3' incorporates:
   *  Constant: '<S34>/Constant'
   *  Constant: '<S35>/Constant'
   *  Constant: '<S36>/Constant'
   *  Constant: '<S37>/Constant'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator11'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator12'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator13'
   *  DiscreteIntegrator: '<S6>/Discrete-Time Integrator14'
   *  RelationalOperator: '<S34>/Compare'
   *  RelationalOperator: '<S35>/Compare'
   *  RelationalOperator: '<S36>/Compare'
   *  RelationalOperator: '<S37>/Compare'
   */
  if (BMS_BIL_Wrapper_DW.is_active_c3_BMS_BIL_Wrapper == 0) {
    BMS_BIL_Wrapper_DW.is_active_c3_BMS_BIL_Wrapper = 1U;
  } else if (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator11_DSTATE >= 0.1F) {
    BMS_BIL_Wrapper_B.Fault_Level_e.UT = 4.0;
  } else if (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator14_DSTATE >= 2.0) {
    BMS_BIL_Wrapper_B.Fault_Level_e.UT = 3.0;
  } else if (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator13_DSTATE >= 1.0) {
    BMS_BIL_Wrapper_B.Fault_Level_e.UT = 2.0;
  } else {
    BMS_BIL_Wrapper_B.Fault_Level_e.UT =
      (BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator12_DSTATE >= 0.5);
  }

  /* End of Chart: '<S6>/Chart3' */

  /* Outport: '<Root>/Bal_Cmd1' */
  BMS_BIL_Wrapper_Y.Bal_Cmd1[0] = BMS_BIL_Wrapper_B.Fault_Level_l.OT;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[1] = BMS_BIL_Wrapper_B.Fault_Level_l.UT;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[2] = BMS_BIL_Wrapper_B.Fault_Level_l.UV;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[3] = BMS_BIL_Wrapper_B.Fault_Level_l.OV;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[4] = BMS_BIL_Wrapper_B.Fault_Level_o.OT;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[5] = BMS_BIL_Wrapper_B.Fault_Level_o.UT;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[6] = BMS_BIL_Wrapper_B.Fault_Level_o.UV;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[7] = BMS_BIL_Wrapper_B.Fault_Level_o.OV;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[8] = BMS_BIL_Wrapper_B.Fault_Level_m.OT;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[9] = BMS_BIL_Wrapper_B.Fault_Level_m.UT;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[10] = BMS_BIL_Wrapper_B.Fault_Level_m.UV;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[11] = BMS_BIL_Wrapper_B.Fault_Level_m.OV;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[12] = BMS_BIL_Wrapper_B.Fault_Level_e.OT;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[13] = BMS_BIL_Wrapper_B.Fault_Level_e.UT;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[14] = BMS_BIL_Wrapper_B.Fault_Level_e.UV;
  BMS_BIL_Wrapper_Y.Bal_Cmd1[15] = BMS_BIL_Wrapper_B.Fault_Level_e.OV;

  /* Update for DiscreteIntegrator: '<S74>/Discrete-Time Integrator' incorporates:
   *  DataTypeConversion: '<S74>/Cast To Double'
   *  UnitDelay generated from: '<Root>/Unit Delay'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator_DSTATE += 0.001 *
    BMS_BIL_Wrapper_DW.UnitDelay_4_DSTATE;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S16>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single'
   *  MinMax: '<S11>/Max'
   *  RelationalOperator: '<S16>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator_DSTATE_g += (real32_T)(maxV <= 3.4F)
    * 0.001F;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S17>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single1'
   *  MinMax: '<S11>/Max'
   *  RelationalOperator: '<S17>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator1_DSTATE += (real32_T)(maxV <= 3.3F) *
    0.001F;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator2' incorporates:
   *  Constant: '<S28>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single2'
   *  MinMax: '<S11>/Max'
   *  RelationalOperator: '<S28>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator2_DSTATE += (real32_T)(maxV <= 3.1F) *
    0.001F;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator3' incorporates:
   *  Constant: '<S39>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single3'
   *  MinMax: '<S11>/Max'
   *  RelationalOperator: '<S39>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator3_DSTATE += (real32_T)(maxV <= 3.0F) *
    0.001F;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator5' incorporates:
   *  Constant: '<S45>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single5'
   *  MinMax: '<S11>/Max'
   *  RelationalOperator: '<S45>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator5_DSTATE += (real_T)(maxV >= 4.15F) *
    0.001;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator6' incorporates:
   *  Constant: '<S18>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single6'
   *  MinMax: '<S11>/Max'
   *  RelationalOperator: '<S18>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator6_DSTATE += (real_T)(maxV >= 4.2F) *
    0.001;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator7' incorporates:
   *  Constant: '<S19>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single7'
   *  MinMax: '<S11>/Max'
   *  RelationalOperator: '<S19>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator7_DSTATE += (real_T)(maxV >= 4.25F) *
    0.001;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator4' incorporates:
   *  Constant: '<S44>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single4'
   *  MinMax: '<S6>/Max'
   *  RelationalOperator: '<S44>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator4_DSTATE += (real_T)
    (rtb_DiscreteTimeIntegrator1 >= 318.0F) * 0.001;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator8' incorporates:
   *  Constant: '<S20>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single8'
   *  MinMax: '<S6>/Max'
   *  RelationalOperator: '<S20>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator8_DSTATE += (real_T)
    (rtb_DiscreteTimeIntegrator1 >= 323.0F) * 0.001;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator9' incorporates:
   *  Constant: '<S24>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single9'
   *  MinMax: '<S6>/Max'
   *  RelationalOperator: '<S24>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator9_DSTATE += (real_T)
    (rtb_DiscreteTimeIntegrator1 >= 333.0F) * 0.001;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator10' incorporates:
   *  Constant: '<S25>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single10'
   *  MinMax: '<S6>/Max'
   *  RelationalOperator: '<S25>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator10_DSTATE += (real32_T)
    (rtb_DiscreteTimeIntegrator1 >= 343.0F) * 0.001F;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator12' incorporates:
   *  Constant: '<S38>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single12'
   *  MinMax: '<S6>/Max1'
   *  RelationalOperator: '<S38>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator12_DSTATE += (real_T)(rtb_Gain_p <=
    273.0F) * 0.001;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator13' incorporates:
   *  Constant: '<S31>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single13'
   *  MinMax: '<S6>/Max1'
   *  RelationalOperator: '<S31>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator13_DSTATE += (real_T)(rtb_Gain_p <=
    263.0F) * 0.001;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator14' incorporates:
   *  Constant: '<S32>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single14'
   *  MinMax: '<S6>/Max1'
   *  RelationalOperator: '<S32>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator14_DSTATE += (real_T)(rtb_Gain_p <=
    260.0F) * 0.001;

  /* Update for DiscreteIntegrator: '<S6>/Discrete-Time Integrator11' incorporates:
   *  Constant: '<S33>/Constant'
   *  DataTypeConversion: '<S6>/Cast To Single11'
   *  MinMax: '<S6>/Max1'
   *  RelationalOperator: '<S33>/Compare'
   */
  BMS_BIL_Wrapper_DW.DiscreteTimeIntegrator11_DSTATE += (real32_T)(rtb_Gain_p <=
    253.0F) * 0.001F;
}

/* Model initialize function */
void BMS_BIL_Wrapper_initialize(void)
{
  /* SystemInitialize for Chart: '<S8>/Chart' */
  BMS_BIL_Wrapper_DW.flgBalInt = true;

  /* Start for MATLABSystem: '<Root>/SPI Controller Transfer' */
  BMS_BIL_Wrapper_DW.obj.matlabCodegenIsDeleted = false;
  BMS_BIL_Wrapper_DW.obj.isSetupComplete = false;
  BMS_BIL_Wrapper_DW.obj.isInitialized = 1;
  BMS_BIL_W_SPIDrvBlock_setupImpl(&BMS_BIL_Wrapper_DW.obj);
  BMS_BIL_Wrapper_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<S62>/Digital Port Write' */
  BMS_BIL_Wrapper_DW.obj_j.matlabCodegenIsDeleted = false;
  BMS_BIL_Wrapper_DW.obj_j.isInitialized = 1;
  BMS_BIL_Wrapper_DW.obj_j.isSetupComplete = true;
}

/* Model terminate function */
void BMS_BIL_Wrapper_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/SPI Controller Transfer' */
  if (!BMS_BIL_Wrapper_DW.obj.matlabCodegenIsDeleted) {
    BMS_BIL_Wrapper_DW.obj.matlabCodegenIsDeleted = true;
    if ((BMS_BIL_Wrapper_DW.obj.isInitialized == 1) &&
        BMS_BIL_Wrapper_DW.obj.isSetupComplete) {
      uint32_T SPIPinsLoc;
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(BMS_BIL_Wrapper_DW.obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, MW_UNDEFINED_VALUE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/SPI Controller Transfer' */

  /* Terminate for MATLABSystem: '<S62>/Digital Port Write' */
  if (!BMS_BIL_Wrapper_DW.obj_j.matlabCodegenIsDeleted) {
    BMS_BIL_Wrapper_DW.obj_j.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S62>/Digital Port Write' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
