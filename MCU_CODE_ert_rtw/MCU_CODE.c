/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MCU_CODE.c
 *
 * Code generated for Simulink model 'MCU_CODE'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Wed May 20 18:44:17 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex-M
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "MCU_CODE.h"
#include "rtwtypes.h"
#include "MCU_CODE_private.h"

/* Block states (default storage) */
DW_MCU_CODE_T MCU_CODE_DW;

/* Real-time model */
static RT_MODEL_MCU_CODE_T MCU_CODE_M_;
RT_MODEL_MCU_CODE_T *const MCU_CODE_M = &MCU_CODE_M_;

/* Model step function */
void MCU_CODE_step(void)
{
  GPIO_TypeDef * portNameLoc;
  uint32_T shiftVal;
  uint32_T pinMask;
  uint32_T pinWriteLoc;

  /* MATLABSystem: '<S4>/Digital Port Write' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<S1>/Constant'
   *  RelationalOperator: '<S1>/Compare'
   */
  portNameLoc = GPIOA;
  shiftVal = MW_GPIO_BIT_SHIFT;
  if (MCU_CODE_P.Constant_Value <= MCU_CODE_P.CompareToConstant_const) {
    pinWriteLoc = 32U;
  } else {
    pinWriteLoc = 0U;
  }

  pinWriteLoc = mw_shift(pinWriteLoc, shiftVal);
  pinMask = mw_shift(32U, shiftVal);
  LL_GPIO_SetOutputPin(portNameLoc, pinWriteLoc);
  LL_GPIO_ResetOutputPin(portNameLoc, ~pinWriteLoc & pinMask);

  /* End of MATLABSystem: '<S4>/Digital Port Write' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  MCU_CODE_M->Timing.taskTime0 =
    ((time_T)(++MCU_CODE_M->Timing.clockTick0)) * MCU_CODE_M->Timing.stepSize0;
}

/* Model initialize function */
void MCU_CODE_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(MCU_CODE_M, -1);
  MCU_CODE_M->Timing.stepSize0 = 0.2;

  /* External mode info */
  MCU_CODE_M->Sizes.checksums[0] = (1945729450U);
  MCU_CODE_M->Sizes.checksums[1] = (3472109844U);
  MCU_CODE_M->Sizes.checksums[2] = (922852221U);
  MCU_CODE_M->Sizes.checksums[3] = (2553325847U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    MCU_CODE_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(MCU_CODE_M->extModeInfo,
      &MCU_CODE_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(MCU_CODE_M->extModeInfo, MCU_CODE_M->Sizes.checksums);
    rteiSetTPtr(MCU_CODE_M->extModeInfo, rtmGetTPtr(MCU_CODE_M));
  }

  /* Start for MATLABSystem: '<S4>/Digital Port Write' */
  MCU_CODE_DW.obj.matlabCodegenIsDeleted = false;
  MCU_CODE_DW.obj.isInitialized = 1;
  MCU_CODE_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void MCU_CODE_terminate(void)
{
  /* Terminate for MATLABSystem: '<S4>/Digital Port Write' */
  if (!MCU_CODE_DW.obj.matlabCodegenIsDeleted) {
    MCU_CODE_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S4>/Digital Port Write' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
