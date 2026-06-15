/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_MCU_CODE.c
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
#include "BMS_MCU_CODE_types.h"
#include "rtwtypes.h"
#include "mw_stm32_spi_ll.h"
#include "BMS_MCU_CODE_private.h"

/* Block signals (default storage) */
B_BMS_MCU_CODE_T BMS_MCU_CODE_B;

/* Block states (default storage) */
DW_BMS_MCU_CODE_T BMS_MCU_CODE_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_BMS_MCU_CODE_T BMS_MCU_CODE_Y;

/* Real-time model */
static RT_MODEL_BMS_MCU_CODE_T BMS_MCU_CODE_M_;
RT_MODEL_BMS_MCU_CODE_T *const BMS_MCU_CODE_M = &BMS_MCU_CODE_M_;

/* Forward declaration for local functions */
static void BMS_MCU_C_SPIDrvBlock_setupImpl(stm32cube_blocks_SPIControlle_T *obj);
static void BMS_MCU_C_SPIDrvBlock_setupImpl(stm32cube_blocks_SPIControlle_T *obj)
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
  obj->MW_SPI_BlockStruct.gpioPort = GPIOB;
  b_dataType = FIFO_ACCESS_8BIT;

  /* Start for MATLABSystem: '<Root>/SPI Controller Transfer' */
  obj->MW_SPI_BlockStruct.gpioPin = 6U;
  obj->MW_SPI_BlockStruct.chipSelectActiveLow = true;
  obj->MW_SPI_BlockStruct.dataType = b_dataType;
  obj->MW_SPI_BlockStruct.dataLength = 1.0;
  spiBlock = (STM32_SPI_Struct_T *)(&obj->MW_SPI_BlockStruct);
  obj->MW_SPI_HANDLE = SPI_STM32_Init(&c, spiBlock);
  MW_STM32_SPI_SetFormat(obj->MW_SPI_HANDLE, 0U, 1792U, MW_SPI_MODE_2);
}

/* Model step function */
void BMS_MCU_CODE_step(void)
{
  GPIO_TypeDef * portNameLoc;
  uint32_T shiftVal;
  real_T tmp;
  int32_T i;
  uint32_T pinMask;
  uint32_T pinWriteLoc;
  uint16_T status;
  uint8_T rtb_Switch1[5];

  /* Bias: '<S1>/Bias' incorporates:
   *  UnitDelay: '<S9>/Output'
   */
  BMS_MCU_CODE_Y.Counter = (uint8_T)(BMS_MCU_CODE_DW.Output_DSTATE_e +
    BMS_MCU_CODE_P.Bias_Bias_b);

  /* MultiPortSwitch: '<S1>/Multiport Switch' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Constant: '<S1>/Constant10'
   *  Constant: '<S1>/Constant11'
   *  Constant: '<S1>/Constant12'
   *  Constant: '<S1>/Constant13'
   *  Constant: '<S1>/Constant14'
   *  Constant: '<S1>/Constant15'
   *  Constant: '<S1>/Constant16'
   *  Constant: '<S1>/Constant17'
   *  Constant: '<S1>/Constant18'
   *  Constant: '<S1>/Constant19'
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Constant20'
   *  Constant: '<S1>/Constant21'
   *  Constant: '<S1>/Constant22'
   *  Constant: '<S1>/Constant23'
   *  Constant: '<S1>/Constant24'
   *  Constant: '<S1>/Constant25'
   *  Constant: '<S1>/Constant26'
   *  Constant: '<S1>/Constant27'
   *  Constant: '<S1>/Constant28'
   *  Constant: '<S1>/Constant29'
   *  Constant: '<S1>/Constant3'
   *  Constant: '<S1>/Constant30'
   *  Constant: '<S1>/Constant31'
   *  Constant: '<S1>/Constant32'
   *  Constant: '<S1>/Constant33'
   *  Constant: '<S1>/Constant4'
   *  Constant: '<S1>/Constant5'
   *  Constant: '<S1>/Constant6'
   *  Constant: '<S1>/Constant7'
   *  Constant: '<S1>/Constant8'
   *  Constant: '<S1>/Constant9'
   */
  switch (BMS_MCU_CODE_Y.Counter) {
   case 1:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant_Value_mr[i];
    }
    break;

   case 2:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant1_Value_f[i];
    }
    break;

   case 3:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant2_Value[i];
    }
    break;

   case 4:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant3_Value[i];
    }
    break;

   case 5:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant4_Value[i];
    }
    break;

   case 6:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant5_Value[i];
    }
    break;

   case 7:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant6_Value[i];
    }
    break;

   case 8:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant7_Value[i];
    }
    break;

   case 9:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant8_Value[i];
    }
    break;

   case 10:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant9_Value[i];
    }
    break;

   case 11:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant10_Value[i];
    }
    break;

   case 12:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant11_Value[i];
    }
    break;

   case 13:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant12_Value[i];
    }
    break;

   case 14:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant32_Value[i];
    }
    break;

   case 15:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant33_Value[i];
    }
    break;

   case 16:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant13_Value[i];
    }
    break;

   case 17:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant14_Value[i];
    }
    break;

   case 18:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant24_Value[i];
    }
    break;

   case 19:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant25_Value[i];
    }
    break;

   case 20:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant26_Value[i];
    }
    break;

   case 21:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant27_Value[i];
    }
    break;

   case 22:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant28_Value[i];
    }
    break;

   case 23:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant29_Value[i];
    }
    break;

   case 24:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant30_Value[i];
    }
    break;

   case 25:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant31_Value[i];
    }
    break;

   case 26:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant15_Value[i];
    }
    break;

   case 27:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant16_Value[i];
    }
    break;

   case 28:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant17_Value[i];
    }
    break;

   case 29:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant18_Value[i];
    }
    break;

   case 30:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant19_Value[i];
    }
    break;

   case 31:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant20_Value[i];
    }
    break;

   case 32:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant21_Value[i];
    }
    break;

   case 33:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant22_Value[i];
    }
    break;

   default:
    for (i = 0; i < 5; i++) {
      BMS_MCU_CODE_Y.SPI_Frames[i] = BMS_MCU_CODE_P.Constant23_Value[i];
    }
    break;
  }

  /* End of MultiPortSwitch: '<S1>/Multiport Switch' */

  /* Switch: '<Root>/Switch1' incorporates:
   *  Constant: '<S6>/Constant'
   *  DataTypeConversion: '<Root>/Cast To Double'
   *  RelationalOperator: '<S6>/Compare'
   *  UnitDelay: '<S7>/Output'
   */
  if (BMS_MCU_CODE_DW.Output_DSTATE <= BMS_MCU_CODE_P.CompareToConstant4_const)
  {
    /* MultiPortSwitch: '<Root>/Multiport Switch' incorporates:
     *  Bias: '<Root>/Bias'
     *  Constant: '<Root>/Constant2'
     *  Constant: '<Root>/Constant3'
     *  Constant: '<Root>/Constant4'
     *  Constant: '<Root>/Constant5'
     */
    switch ((uint16_T)(BMS_MCU_CODE_DW.Output_DSTATE + BMS_MCU_CODE_P.Bias_Bias))
    {
     case 1:
      for (i = 0; i < 5; i++) {
        rtb_Switch1[i] = BMS_MCU_CODE_P.Constant2_Value_k[i];
      }
      break;

     case 2:
      for (i = 0; i < 5; i++) {
        rtb_Switch1[i] = BMS_MCU_CODE_P.Constant3_Value_m[i];
      }
      break;

     case 3:
      for (i = 0; i < 5; i++) {
        rtb_Switch1[i] = BMS_MCU_CODE_P.Constant4_Value_e[i];
      }
      break;

     default:
      for (i = 0; i < 5; i++) {
        rtb_Switch1[i] = BMS_MCU_CODE_P.Constant5_Value_p[i];
      }
      break;
    }

    /* End of MultiPortSwitch: '<Root>/Multiport Switch' */
  } else {
    for (i = 0; i < 5; i++) {
      rtb_Switch1[i] = BMS_MCU_CODE_Y.SPI_Frames[i];
    }
  }

  /* End of Switch: '<Root>/Switch1' */

  /* MATLABSystem: '<Root>/SPI Controller Transfer' */
  status = MW_STM32_SPI_SetFormat(BMS_MCU_CODE_DW.obj.MW_SPI_HANDLE, 0U, 1792U,
    MW_SPI_MODE_2);
  if (status == 0) {
    portNameLoc = GPIOB;
    LL_GPIO_ResetOutputPin(portNameLoc, 64U);
    MW_SPI_ControllerWriteRead_Databits(BMS_MCU_CODE_DW.obj.MW_SPI_HANDLE,
      &rtb_Switch1[0], &BMS_MCU_CODE_B.SOCmod[0], 0, 5U, 0, 1U);
    LL_GPIO_SetOutputPin(portNameLoc, 64U);
  }

  /* End of MATLABSystem: '<Root>/SPI Controller Transfer' */
  /* Sum: '<S12>/FixPt Sum1' incorporates:
   *  Constant: '<S12>/FixPt Constant'
   *  UnitDelay: '<S7>/Output'
   */
  BMS_MCU_CODE_DW.Output_DSTATE += BMS_MCU_CODE_P.FixPtConstant_Value;

  /* Switch: '<S13>/FixPt Switch' */
  if (BMS_MCU_CODE_DW.Output_DSTATE > BMS_MCU_CODE_P.WrapToZero_Threshold) {
    /* Sum: '<S12>/FixPt Sum1' incorporates:
     *  Constant: '<S13>/Constant'
     */
    BMS_MCU_CODE_DW.Output_DSTATE = BMS_MCU_CODE_P.Constant_Value_m;
  }

  /* End of Switch: '<S13>/FixPt Switch' */

  /* MATLABSystem: '<S15>/Digital Port Write' */
  portNameLoc = GPIOB;
  shiftVal = MW_GPIO_BIT_SHIFT;

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Constant1'
   *  Constant: '<S2>/Constant'
   *  Constant: '<S3>/Constant'
   *  Constant: '<S4>/Constant'
   *  Constant: '<S5>/Constant'
   *  Logic: '<Root>/AND'
   *  Logic: '<Root>/AND1'
   *  Logic: '<Root>/OR'
   *  RelationalOperator: '<S2>/Compare'
   *  RelationalOperator: '<S3>/Compare'
   *  RelationalOperator: '<S4>/Compare'
   *  RelationalOperator: '<S5>/Compare'
   */
  if (((BMS_MCU_CODE_Y.Counter > BMS_MCU_CODE_P.CompareToConstant_const) &&
       (BMS_MCU_CODE_Y.Counter <= BMS_MCU_CODE_P.CompareToConstant1_const)) ||
      ((BMS_MCU_CODE_Y.Counter > BMS_MCU_CODE_P.CompareToConstant2_const) &&
       (BMS_MCU_CODE_Y.Counter <= BMS_MCU_CODE_P.CompareToConstant3_const))) {
    tmp = BMS_MCU_CODE_P.Constant_Value;
  } else {
    tmp = BMS_MCU_CODE_P.Constant1_Value;
  }

  /* MATLABSystem: '<S15>/Digital Port Write' incorporates:
   *  Switch: '<Root>/Switch'
   */
  if (tmp != 0.0) {
    pinWriteLoc = 32U;
  } else {
    pinWriteLoc = 0U;
  }

  pinWriteLoc = mw_shift(pinWriteLoc, shiftVal);
  pinMask = mw_shift(32U, shiftVal);
  LL_GPIO_SetOutputPin(portNameLoc, pinWriteLoc);
  LL_GPIO_ResetOutputPin(portNameLoc, ~pinWriteLoc & pinMask);

  /* Sum: '<S10>/FixPt Sum1' incorporates:
   *  Constant: '<S10>/FixPt Constant'
   *  UnitDelay: '<S9>/Output'
   */
  BMS_MCU_CODE_DW.Output_DSTATE_e += BMS_MCU_CODE_P.FixPtConstant_Value_l;

  /* Switch: '<S11>/FixPt Switch' */
  if (BMS_MCU_CODE_DW.Output_DSTATE_e > BMS_MCU_CODE_P.WrapToZero_Threshold_l) {
    /* Sum: '<S10>/FixPt Sum1' incorporates:
     *  Constant: '<S11>/Constant'
     */
    BMS_MCU_CODE_DW.Output_DSTATE_e = BMS_MCU_CODE_P.Constant_Value_k;
  }

  /* End of Switch: '<S11>/FixPt Switch' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  BMS_MCU_CODE_M->Timing.taskTime0 =
    ((time_T)(++BMS_MCU_CODE_M->Timing.clockTick0)) *
    BMS_MCU_CODE_M->Timing.stepSize0;
}

/* Model initialize function */
void BMS_MCU_CODE_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(BMS_MCU_CODE_M, -1);
  BMS_MCU_CODE_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  BMS_MCU_CODE_M->Sizes.checksums[0] = (1601454358U);
  BMS_MCU_CODE_M->Sizes.checksums[1] = (851236251U);
  BMS_MCU_CODE_M->Sizes.checksums[2] = (2366854642U);
  BMS_MCU_CODE_M->Sizes.checksums[3] = (3364207336U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[46];
    BMS_MCU_CODE_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    systemRan[6] = &rtAlwaysEnabled;
    systemRan[7] = &rtAlwaysEnabled;
    systemRan[8] = &rtAlwaysEnabled;
    systemRan[9] = &rtAlwaysEnabled;
    systemRan[10] = &rtAlwaysEnabled;
    systemRan[11] = &rtAlwaysEnabled;
    systemRan[12] = &rtAlwaysEnabled;
    systemRan[13] = &rtAlwaysEnabled;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = &rtAlwaysEnabled;
    systemRan[16] = &rtAlwaysEnabled;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = &rtAlwaysEnabled;
    systemRan[20] = &rtAlwaysEnabled;
    systemRan[21] = &rtAlwaysEnabled;
    systemRan[22] = &rtAlwaysEnabled;
    systemRan[23] = &rtAlwaysEnabled;
    systemRan[24] = &rtAlwaysEnabled;
    systemRan[25] = &rtAlwaysEnabled;
    systemRan[26] = &rtAlwaysEnabled;
    systemRan[27] = &rtAlwaysEnabled;
    systemRan[28] = &rtAlwaysEnabled;
    systemRan[29] = &rtAlwaysEnabled;
    systemRan[30] = &rtAlwaysEnabled;
    systemRan[31] = &rtAlwaysEnabled;
    systemRan[32] = &rtAlwaysEnabled;
    systemRan[33] = &rtAlwaysEnabled;
    systemRan[34] = &rtAlwaysEnabled;
    systemRan[35] = &rtAlwaysEnabled;
    systemRan[36] = &rtAlwaysEnabled;
    systemRan[37] = &rtAlwaysEnabled;
    systemRan[38] = &rtAlwaysEnabled;
    systemRan[39] = &rtAlwaysEnabled;
    systemRan[40] = &rtAlwaysEnabled;
    systemRan[41] = &rtAlwaysEnabled;
    systemRan[42] = &rtAlwaysEnabled;
    systemRan[43] = &rtAlwaysEnabled;
    systemRan[44] = &rtAlwaysEnabled;
    systemRan[45] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(BMS_MCU_CODE_M->extModeInfo,
      &BMS_MCU_CODE_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(BMS_MCU_CODE_M->extModeInfo,
                        BMS_MCU_CODE_M->Sizes.checksums);
    rteiSetTPtr(BMS_MCU_CODE_M->extModeInfo, rtmGetTPtr(BMS_MCU_CODE_M));
  }

  /* InitializeConditions for Sum: '<S10>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S9>/Output'
   */
  BMS_MCU_CODE_DW.Output_DSTATE_e = BMS_MCU_CODE_P.Output_InitialCondition_n;

  /* InitializeConditions for Sum: '<S12>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S7>/Output'
   */
  BMS_MCU_CODE_DW.Output_DSTATE = BMS_MCU_CODE_P.Output_InitialCondition;

  /* Start for MATLABSystem: '<Root>/SPI Controller Transfer' */
  BMS_MCU_CODE_DW.obj.matlabCodegenIsDeleted = false;
  BMS_MCU_CODE_DW.obj.isSetupComplete = false;
  BMS_MCU_CODE_DW.obj.isInitialized = 1;
  BMS_MCU_C_SPIDrvBlock_setupImpl(&BMS_MCU_CODE_DW.obj);
  BMS_MCU_CODE_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<S15>/Digital Port Write' */
  BMS_MCU_CODE_DW.obj_l.matlabCodegenIsDeleted = false;
  BMS_MCU_CODE_DW.obj_l.isInitialized = 1;
  BMS_MCU_CODE_DW.obj_l.isSetupComplete = true;
}

/* Model terminate function */
void BMS_MCU_CODE_terminate(void)
{
  uint32_T SPIPinsLoc;

  /* Terminate for MATLABSystem: '<Root>/SPI Controller Transfer' */
  if (!BMS_MCU_CODE_DW.obj.matlabCodegenIsDeleted) {
    BMS_MCU_CODE_DW.obj.matlabCodegenIsDeleted = true;
    if ((BMS_MCU_CODE_DW.obj.isInitialized == 1) &&
        BMS_MCU_CODE_DW.obj.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(BMS_MCU_CODE_DW.obj.MW_SPI_HANDLE, SPIPinsLoc, SPIPinsLoc,
                   SPIPinsLoc, 6U);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/SPI Controller Transfer' */
  /* Terminate for MATLABSystem: '<S15>/Digital Port Write' */
  if (!BMS_MCU_CODE_DW.obj_l.matlabCodegenIsDeleted) {
    BMS_MCU_CODE_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S15>/Digital Port Write' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
