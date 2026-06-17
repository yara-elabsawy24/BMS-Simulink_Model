/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Debug_STEVAL_BMS_114.c
 *
 * Code generated for Simulink model 'Debug_STEVAL_BMS_114'.
 *
 * Model version                  : 1.67
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Mon Jun 15 19:57:48 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Debug_STEVAL_BMS_114.h"
#include "Debug_STEVAL_BMS_114_types.h"
#include "rtwtypes.h"
#include "mw_stm32_spi_ll.h"
#include "Debug_STEVAL_BMS_114_private.h"

/* Block signals (default storage) */
B_Debug_STEVAL_BMS_114_T Debug_STEVAL_BMS_114_B;

/* Block states (default storage) */
DW_Debug_STEVAL_BMS_114_T Debug_STEVAL_BMS_114_DW;

/* Real-time model */
static RT_MODEL_Debug_STEVAL_BMS_114_T Debug_STEVAL_BMS_114_M_;
RT_MODEL_Debug_STEVAL_BMS_114_T *const Debug_STEVAL_BMS_114_M =
  &Debug_STEVAL_BMS_114_M_;

/* Forward declaration for local functions */
static void Debug_STE_SPIDrvBlock_setupImpl(stm32cube_blocks_SPIControlle_T *obj);
static void Debug_STE_SPIDrvBlock_setupImpl(stm32cube_blocks_SPIControlle_T *obj)
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
void Debug_STEVAL_BMS_114_step(void)
{
  GPIO_TypeDef * portNameLoc;
  uint16_T status;

  /* MATLABSystem: '<Root>/SPI Controller Transfer' incorporates:
   *  Constant: '<Root>/Constant2'
   * */
  status = MW_STM32_SPI_SetFormat(Debug_STEVAL_BMS_114_DW.obj.MW_SPI_HANDLE, 0U,
    1792U, MW_SPI_MODE_2);
  if (status == 0) {
    portNameLoc = GPIOB;
    LL_GPIO_ResetOutputPin(portNameLoc, 64U);
    MW_SPI_ControllerWriteRead_Databits
      (Debug_STEVAL_BMS_114_DW.obj.MW_SPI_HANDLE,
       &Debug_STEVAL_BMS_114_P.Constant2_Value[0],
       &Debug_STEVAL_BMS_114_B.SOCmod[0], 0, 5U, 0, 1U);
    LL_GPIO_SetOutputPin(portNameLoc, 64U);
  }

  /* End of MATLABSystem: '<Root>/SPI Controller Transfer' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  Debug_STEVAL_BMS_114_M->Timing.taskTime0 =
    ((time_T)(++Debug_STEVAL_BMS_114_M->Timing.clockTick0)) *
    Debug_STEVAL_BMS_114_M->Timing.stepSize0;
}

/* Model initialize function */
void Debug_STEVAL_BMS_114_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(Debug_STEVAL_BMS_114_M, -1);
  Debug_STEVAL_BMS_114_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  Debug_STEVAL_BMS_114_M->Sizes.checksums[0] = (1574599589U);
  Debug_STEVAL_BMS_114_M->Sizes.checksums[1] = (2031266885U);
  Debug_STEVAL_BMS_114_M->Sizes.checksums[2] = (572191313U);
  Debug_STEVAL_BMS_114_M->Sizes.checksums[3] = (4245626914U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    Debug_STEVAL_BMS_114_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(Debug_STEVAL_BMS_114_M->extModeInfo,
      &Debug_STEVAL_BMS_114_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(Debug_STEVAL_BMS_114_M->extModeInfo,
                        Debug_STEVAL_BMS_114_M->Sizes.checksums);
    rteiSetTPtr(Debug_STEVAL_BMS_114_M->extModeInfo, rtmGetTPtr
                (Debug_STEVAL_BMS_114_M));
  }

  /* Start for MATLABSystem: '<Root>/SPI Controller Transfer' */
  Debug_STEVAL_BMS_114_DW.obj.matlabCodegenIsDeleted = false;
  Debug_STEVAL_BMS_114_DW.obj.isSetupComplete = false;
  Debug_STEVAL_BMS_114_DW.obj.isInitialized = 1;
  Debug_STE_SPIDrvBlock_setupImpl(&Debug_STEVAL_BMS_114_DW.obj);
  Debug_STEVAL_BMS_114_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void Debug_STEVAL_BMS_114_terminate(void)
{
  uint32_T SPIPinsLoc;

  /* Terminate for MATLABSystem: '<Root>/SPI Controller Transfer' */
  if (!Debug_STEVAL_BMS_114_DW.obj.matlabCodegenIsDeleted) {
    Debug_STEVAL_BMS_114_DW.obj.matlabCodegenIsDeleted = true;
    if ((Debug_STEVAL_BMS_114_DW.obj.isInitialized == 1) &&
        Debug_STEVAL_BMS_114_DW.obj.isSetupComplete) {
      SPIPinsLoc = MW_UNDEFINED_VALUE;
      MW_SPI_Close(Debug_STEVAL_BMS_114_DW.obj.MW_SPI_HANDLE, SPIPinsLoc,
                   SPIPinsLoc, SPIPinsLoc, 6U);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/SPI Controller Transfer' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
