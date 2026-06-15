/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_MCU_CODE.h
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

#ifndef BMS_MCU_CODE_h_
#define BMS_MCU_CODE_h_
#ifndef BMS_MCU_CODE_COMMON_INCLUDES_
#define BMS_MCU_CODE_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "math.h"
#include "MW_SPI.h"
#include "mw_stm32_spi_ll.h"
#include "main.h"
#include "mw_stm32_utils.h"
#endif                                 /* BMS_MCU_CODE_COMMON_INCLUDES_ */

#include "BMS_MCU_CODE_types.h"
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
} B_BMS_MCU_CODE_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<Root>/SPI Controller Transfer' */
  stm32cube_blocks_DigitalPortW_T obj_l;/* '<S15>/Digital Port Write' */
  struct {
    void *LoggedData;
  } Scope5_PWORK;                      /* '<Root>/Scope5' */

  uint16_T Output_DSTATE;              /* '<S7>/Output' */
  uint8_T Output_DSTATE_e;             /* '<S9>/Output' */
} DW_BMS_MCU_CODE_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T Counter;                     /* '<Root>/Counter' */
  uint8_T SPI_Frames[5];               /* '<Root>/SPI_Frames' */
} ExtY_BMS_MCU_CODE_T;

/* Parameters (default storage) */
struct P_BMS_MCU_CODE_T_ {
  real_T CompareToConstant4_const;   /* Mask Parameter: CompareToConstant4_const
                                      * Referenced by: '<S6>/Constant'
                                      */
  uint16_T WrapToZero_Threshold;       /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S13>/FixPt Switch'
                                        */
  uint8_T WrapToZero_Threshold_l;      /* Mask Parameter: WrapToZero_Threshold_l
                                        * Referenced by: '<S11>/FixPt Switch'
                                        */
  uint8_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S2>/Constant'
                                       */
  uint8_T CompareToConstant1_const;  /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S3>/Constant'
                                      */
  uint8_T CompareToConstant2_const;  /* Mask Parameter: CompareToConstant2_const
                                      * Referenced by: '<S4>/Constant'
                                      */
  uint8_T CompareToConstant3_const;  /* Mask Parameter: CompareToConstant3_const
                                      * Referenced by: '<S5>/Constant'
                                      */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 1
                                        * Referenced by: '<Root>/Constant1'
                                        */
  uint16_T Constant_Value_m;           /* Computed Parameter: Constant_Value_m
                                        * Referenced by: '<S13>/Constant'
                                        */
  uint16_T Bias_Bias;                  /* Computed Parameter: Bias_Bias
                                        * Referenced by: '<Root>/Bias'
                                        */
  uint16_T Output_InitialCondition;
                                  /* Computed Parameter: Output_InitialCondition
                                   * Referenced by: '<S7>/Output'
                                   */
  uint16_T FixPtConstant_Value;       /* Computed Parameter: FixPtConstant_Value
                                       * Referenced by: '<S12>/FixPt Constant'
                                       */
  uint8_T Constant_Value_k;            /* Computed Parameter: Constant_Value_k
                                        * Referenced by: '<S11>/Constant'
                                        */
  uint8_T Constant8_Value[5];          /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant8'
                                        */
  uint8_T Constant9_Value[5];          /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant9'
                                        */
  uint8_T Constant10_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant10'
                                        */
  uint8_T Constant11_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant11'
                                        */
  uint8_T Constant12_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant12'
                                        */
  uint8_T Constant32_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant32'
                                        */
  uint8_T Constant33_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant33'
                                        */
  uint8_T Constant13_Value[5];         /* Expression: uint8([131 224 0 0 22])
                                        * Referenced by: '<S1>/Constant13'
                                        */
  uint8_T Constant14_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant14'
                                        */
  uint8_T Constant24_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant24'
                                        */
  uint8_T Constant_Value_mr[5];        /* Expression: uint8([131 236 0 0 16])
                                        * Referenced by: '<S1>/Constant'
                                        */
  uint8_T Constant25_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant25'
                                        */
  uint8_T Constant26_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant26'
                                        */
  uint8_T Constant27_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant27'
                                        */
  uint8_T Constant28_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant28'
                                        */
  uint8_T Constant29_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant29'
                                        */
  uint8_T Constant30_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant30'
                                        */
  uint8_T Constant31_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant31'
                                        */
  uint8_T Constant15_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant15'
                                        */
  uint8_T Constant16_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant16'
                                        */
  uint8_T Constant17_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant17'
                                        */
  uint8_T Constant1_Value_f[5];        /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant1'
                                        */
  uint8_T Constant18_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant18'
                                        */
  uint8_T Constant19_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant19'
                                        */
  uint8_T Constant20_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant20'
                                        */
  uint8_T Constant21_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant21'
                                        */
  uint8_T Constant22_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant22'
                                        */
  uint8_T Constant23_Value[5];         /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant23'
                                        */
  uint8_T Constant2_Value[5];          /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant2'
                                        */
  uint8_T Constant3_Value[5];          /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant3'
                                        */
  uint8_T Constant4_Value[5];          /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant4'
                                        */
  uint8_T Constant5_Value[5];          /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant5'
                                        */
  uint8_T Constant6_Value[5];          /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant6'
                                        */
  uint8_T Constant7_Value[5];          /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<S1>/Constant7'
                                        */
  uint8_T Constant2_Value_k[5];        /* Expression: uint8([192 4 8 0 21])
                                        * Referenced by: '<Root>/Constant2'
                                        */
  uint8_T Constant3_Value_m[5];        /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<Root>/Constant3'
                                        */
  uint8_T Constant4_Value_e[5];        /* Expression: uint8([130 4 0 0 23])
                                        * Referenced by: '<Root>/Constant4'
                                        */
  uint8_T Constant5_Value_p[5];        /* Expression: uint8([0 0 0 0 0])
                                        * Referenced by: '<Root>/Constant5'
                                        */
  uint8_T Output_InitialCondition_n;
                                /* Computed Parameter: Output_InitialCondition_n
                                 * Referenced by: '<S9>/Output'
                                 */
  uint8_T Bias_Bias_b;                 /* Computed Parameter: Bias_Bias_b
                                        * Referenced by: '<S1>/Bias'
                                        */
  uint8_T FixPtConstant_Value_l;    /* Computed Parameter: FixPtConstant_Value_l
                                     * Referenced by: '<S10>/FixPt Constant'
                                     */
};

/* Real-time Model Data Structure */
struct tag_RTM_BMS_MCU_CODE_T {
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
extern P_BMS_MCU_CODE_T BMS_MCU_CODE_P;

/* Block signals (default storage) */
extern B_BMS_MCU_CODE_T BMS_MCU_CODE_B;

/* Block states (default storage) */
extern DW_BMS_MCU_CODE_T BMS_MCU_CODE_DW;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_BMS_MCU_CODE_T BMS_MCU_CODE_Y;

/* Model entry point functions */
extern void BMS_MCU_CODE_initialize(void);
extern void BMS_MCU_CODE_step(void);
extern void BMS_MCU_CODE_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BMS_MCU_CODE_T *const BMS_MCU_CODE_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S9>/Data Type Propagation' : Unused code path elimination
 * Block '<S10>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S11>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<S7>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S12>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S13>/FixPt Data Type Duplicate1' : Unused code path elimination
 */

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
 * '<Root>' : 'BMS_MCU_CODE'
 * '<S1>'   : 'BMS_MCU_CODE/All_Frames'
 * '<S2>'   : 'BMS_MCU_CODE/Compare To Constant'
 * '<S3>'   : 'BMS_MCU_CODE/Compare To Constant1'
 * '<S4>'   : 'BMS_MCU_CODE/Compare To Constant2'
 * '<S5>'   : 'BMS_MCU_CODE/Compare To Constant3'
 * '<S6>'   : 'BMS_MCU_CODE/Compare To Constant4'
 * '<S7>'   : 'BMS_MCU_CODE/Counter Free-Running'
 * '<S8>'   : 'BMS_MCU_CODE/TXEN'
 * '<S9>'   : 'BMS_MCU_CODE/All_Frames/Counter Limited'
 * '<S10>'  : 'BMS_MCU_CODE/All_Frames/Counter Limited/Increment Real World'
 * '<S11>'  : 'BMS_MCU_CODE/All_Frames/Counter Limited/Wrap To Zero'
 * '<S12>'  : 'BMS_MCU_CODE/Counter Free-Running/Increment Real World'
 * '<S13>'  : 'BMS_MCU_CODE/Counter Free-Running/Wrap To Zero'
 * '<S14>'  : 'BMS_MCU_CODE/TXEN/ECSoC'
 * '<S15>'  : 'BMS_MCU_CODE/TXEN/ECSoC/ECSimCodegen'
 */
#endif                                 /* BMS_MCU_CODE_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
