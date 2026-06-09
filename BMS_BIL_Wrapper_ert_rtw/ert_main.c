/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
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
#include "MW_target_hardware_resources.h"

volatile int IsrOverrun = 0;
static boolean_T OverrunFlag = 0;
void rt_OneStep(void)
{
  /* Check for overrun. Protect OverrunFlag against preemption */
  if (OverrunFlag++) {
    IsrOverrun = 1;
    OverrunFlag--;
    return;
  }

  __enable_irq();
  BMS_BIL_Wrapper_step();

  /* Get model outputs here */
  __disable_irq();
  OverrunFlag--;
}

volatile boolean_T stopRequested;
volatile boolean_T runModel;
int main(int argc, char **argv)
{
  float modelBaseRate = 0.001;
  float systemClock = 84.0;

  /* Initialize variables */
  stopRequested = false;
  runModel = false;

#if !defined(MW_FREERTOS) && defined(MW_MULTI_TASKING_MODE) && (MW_MULTI_TASKING_MODE == 1)

  MW_ASM (" SVC #1");

#endif

  ;

  // Start Peripheral initialization imported from STM32CubeMX project;
  HAL_Init();
  SystemClock_Config();
  PeriphCommonClock_Config();
  MX_DMA_Init();
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  MX_SPI1_Init();

  // End Peripheral initialization imported from STM32CubeMX project;
  rtmSetErrorStatus(BMS_BIL_Wrapper_M, 0);
  BMS_BIL_Wrapper_initialize();
  __disable_irq();
  ARMCM_SysTick_Config(modelBaseRate);
  runModel =
    rtmGetErrorStatus(BMS_BIL_Wrapper_M) == (NULL);
  __enable_irq();
  __enable_irq();
  while (runModel) {
    stopRequested = !(
                      rtmGetErrorStatus(BMS_BIL_Wrapper_M) == (NULL));
    if (stopRequested) {
      SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;
    }

    ;
  }

  /* Terminate model */
  BMS_BIL_Wrapper_terminate();

#if !defined(MW_FREERTOS) && !defined(USE_RTX)

  (void) systemClock;

#endif

  ;
  __disable_irq();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
