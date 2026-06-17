/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Debug_STEVAL_BMS_114.h
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

#ifndef Debug_STEVAL_BMS_114_h_
#define Debug_STEVAL_BMS_114_h_
#ifndef Debug_STEVAL_BMS_114_COMMON_INCLUDES_
#define Debug_STEVAL_BMS_114_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "math.h"
#include "MW_SPI.h"
#include "mw_stm32_spi_ll.h"
#endif                               /* Debug_STEVAL_BMS_114_COMMON_INCLUDES_ */

#include "Debug_STEVAL_BMS_114_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  uint8_T SOCmod[5];                   /* '<Root>/SPI Controller Transfer' */
} B_Debug_STEVAL_BMS_114_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<Root>/SPI Controller Transfer' */
  struct {
    void *LoggedData;
  } Scope5_PWORK;                      /* '<Root>/Scope5' */
} DW_Debug_STEVAL_BMS_114_T;

/* Parameters (default storage) */
struct P_Debug_STEVAL_BMS_114_T_ {
  uint8_T Constant2_Value[5];          /* Expression: uint8([131 236 0 0 16])
                                        * Referenced by: '<Root>/Constant2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Debug_STEVAL_BMS_114_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_Debug_STEVAL_BMS_114_T Debug_STEVAL_BMS_114_P;

/* Block signals (default storage) */
extern B_Debug_STEVAL_BMS_114_T Debug_STEVAL_BMS_114_B;

/* Block states (default storage) */
extern DW_Debug_STEVAL_BMS_114_T Debug_STEVAL_BMS_114_DW;

/* Model entry point functions */
extern void Debug_STEVAL_BMS_114_initialize(void);
extern void Debug_STEVAL_BMS_114_step(void);
extern void Debug_STEVAL_BMS_114_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Debug_STEVAL_BMS_114_T *const Debug_STEVAL_BMS_114_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Debug_STEVAL_BMS_114'
 */
#endif                                 /* Debug_STEVAL_BMS_114_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
