/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_HIL_Wrapper.h
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

#ifndef BMS_HIL_Wrapper_h_
#define BMS_HIL_Wrapper_h_
#ifndef BMS_HIL_Wrapper_COMMON_INCLUDES_
#define BMS_HIL_Wrapper_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "MW_SPI.h"
#include "mw_stm32_spi_ll.h"
#endif                                 /* BMS_HIL_Wrapper_COMMON_INCLUDES_ */

#include "BMS_HIL_Wrapper_types.h"
#include "rtGetNaN.h"
#include <math.h>
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S11>/SPI Controller Transfer1' */
typedef struct {
  uint8_T SPIControllerTransfer1[5];   /* '<S11>/SPI Controller Transfer1' */
} B_SPIControllerTransfer1_BMS__T;

/* Block states (default storage) for system '<S11>/SPI Controller Transfer1' */
typedef struct {
  stm32cube_blocks_SPIControlle_T obj; /* '<S11>/SPI Controller Transfer1' */
  boolean_T objisempty;                /* '<S11>/SPI Controller Transfer1' */
} DW_SPIControllerTransfer1_BMS_T;

/* Block signals (default storage) */
typedef struct {
  real_T V_Sum_LSB;                    /* '<S25>/Divide1' */
  real_T Bias;                         /* '<S11>/Bias' */
  real32_T TappedDelay[5];             /* '<S29>/Tapped Delay' */
  real32_T CastToSingle4;              /* '<S29>/Cast To Single4' */
  real32_T CastToSingle3;              /* '<S28>/Cast To Single3' */
  real32_T TappedDelay_i[14];          /* '<S27>/Tapped Delay' */
  real32_T CastToSingle2;              /* '<S27>/Cast To Single2' */
  real32_T CastToSingle2_o;            /* '<S26>/Cast To Single2' */
  real32_T CastToSingle5;              /* '<S25>/Cast To Single5' */
  SRE State_Required;                  /* '<Root>/Test Sequence' */
  B_SPIControllerTransfer1_BMS__T SPIControllerTransfer;/* '<S11>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_BMS__T SPIControllerTransfer1_p;/* '<S11>/SPI Controller Transfer1' */
  B_SPIControllerTransfer1_BMS__T SPIControllerTransfer1;/* '<S11>/SPI Controller Transfer1' */
} B_BMS_HIL_Wrapper_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S30>/Discrete-Time Integrator' */
  real32_T TappedDelay_X[5];           /* '<S29>/Tapped Delay' */
  real32_T TappedDelay_X_l[14];        /* '<S27>/Tapped Delay' */
  real32_T MaxCellTemp;                /* '<S6>/BMS_States' */
  real32_T MinCellTemp;                /* '<S6>/BMS_States' */
  real32_T Delta;                      /* '<S6>/BMS_States' */
  uint32_T temporalCounter_i1;         /* '<S6>/BMS_States' */
  uint8_T Output_DSTATE;               /* '<S16>/Output' */
  uint8_T is_active_c1_BMS_HIL_Wrapper;/* '<Root>/Test Sequence' */
  uint8_T is_c1_BMS_HIL_Wrapper;       /* '<Root>/Test Sequence' */
  uint8_T is_active_c6_BMS_HIL_Wrapper;/* '<S6>/BMS_States' */
  uint8_T is_Normal_State;             /* '<S6>/BMS_States' */
  uint8_T is_Monitor_CurrentLim;       /* '<S6>/BMS_States' */
  uint8_T is_Monitor_CellVolt;         /* '<S6>/BMS_States' */
  uint8_T is_Monitor_CellTemp;         /* '<S6>/BMS_States' */
  boolean_T FaultPresent;              /* '<S6>/BMS_States' */
  DW_SPIControllerTransfer1_BMS_T SPIControllerTransfer;/* '<S11>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_BMS_T SPIControllerTransfer1_p;/* '<S11>/SPI Controller Transfer1' */
  DW_SPIControllerTransfer1_BMS_T SPIControllerTransfer1;/* '<S11>/SPI Controller Transfer1' */
} DW_BMS_HIL_Wrapper_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: uDLookupTable_tableData
   * Referenced by: '<S30>/1-D Lookup Table'
   */
  real32_T uDLookupTable_tableData[9];

  /* Computed Parameter: uDLookupTable_bp01Data
   * Referenced by: '<S30>/1-D Lookup Table'
   */
  real32_T uDLookupTable_bp01Data[9];

  /* Computed Parameter: uDLookupTable_tableData_e
   * Referenced by: '<S5>/2-D Lookup Table'
   */
  real32_T uDLookupTable_tableData_e[55];

  /* Computed Parameter: uDLookupTable_bp01Data_d
   * Referenced by: '<S5>/2-D Lookup Table'
   */
  real32_T uDLookupTable_bp01Data_d[11];

  /* Computed Parameter: uDLookupTable_bp02Data
   * Referenced by: '<S5>/2-D Lookup Table'
   */
  real32_T uDLookupTable_bp02Data[5];

  /* Expression: uint8([160 240 0 0 2])
   * Referenced by: '<S12>/Constant'
   */
  uint8_T Constant_Value_d[5];
} ConstP_BMS_HIL_Wrapper_T;

/* Real-time Model Data Structure */
struct tag_RTM_BMS_HIL_Wrapper_T {
  const char_T * volatile errorStatus;
};

/* Block signals (default storage) */
extern B_BMS_HIL_Wrapper_T BMS_HIL_Wrapper_B;

/* Block states (default storage) */
extern DW_BMS_HIL_Wrapper_T BMS_HIL_Wrapper_DW;

/* Constant parameters (default storage) */
extern const ConstP_BMS_HIL_Wrapper_T BMS_HIL_Wrapper_ConstP;

/* Model entry point functions */
extern void BMS_HIL_Wrapper_initialize(void);
extern void BMS_HIL_Wrapper_step(void);
extern void BMS_HIL_Wrapper_terminate(void);

/* Real-time Model object */
extern RT_MODEL_BMS_HIL_Wrapper_T *const BMS_HIL_Wrapper_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S5>/Display' : Unused code path elimination
 * Block '<S5>/Display1' : Unused code path elimination
 * Block '<S1>/Scope7' : Unused code path elimination
 * Block '<S16>/FixPt Data Type Propagation' : Unused code path elimination
 * Block '<S17>/FixPt Data Type Duplicate' : Unused code path elimination
 * Block '<S18>/FixPt Data Type Duplicate1' : Unused code path elimination
 * Block '<Root>/To Workspace' : Unused code path elimination
 * Block '<Root>/To Workspace1' : Unused code path elimination
 * Block '<S7>/  ' : Eliminated nontunable gain of 1
 * Block '<S15>/Cast To Double1' : Eliminate redundant data type conversion
 * Block '<S29>/Gain3' : Eliminated nontunable gain of 1
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
 * '<Root>' : 'BMS_HIL_Wrapper'
 * '<S1>'   : 'BMS_HIL_Wrapper/BMS_Control'
 * '<S2>'   : 'BMS_HIL_Wrapper/Data_Acquisition_From_L99BM114'
 * '<S3>'   : 'BMS_HIL_Wrapper/Raw_Data_Conv'
 * '<S4>'   : 'BMS_HIL_Wrapper/Test Sequence'
 * '<S5>'   : 'BMS_HIL_Wrapper/BMS_Control/Current_Limits_Calc'
 * '<S6>'   : 'BMS_HIL_Wrapper/BMS_Control/Subsystem'
 * '<S7>'   : 'BMS_HIL_Wrapper/BMS_Control/Current_Limits_Calc/Charge_Current_Calc'
 * '<S8>'   : 'BMS_HIL_Wrapper/BMS_Control/Current_Limits_Calc/Discharge_Current_Calc'
 * '<S9>'   : 'BMS_HIL_Wrapper/BMS_Control/Current_Limits_Calc/Subsystem'
 * '<S10>'  : 'BMS_HIL_Wrapper/BMS_Control/Subsystem/BMS_States'
 * '<S11>'  : 'BMS_HIL_Wrapper/Data_Acquisition_From_L99BM114/Acquire_Temp'
 * '<S12>'  : 'BMS_HIL_Wrapper/Data_Acquisition_From_L99BM114/Acquire_Volt_Current'
 * '<S13>'  : 'BMS_HIL_Wrapper/Data_Acquisition_From_L99BM114/Compare To Constant5'
 * '<S14>'  : 'BMS_HIL_Wrapper/Data_Acquisition_From_L99BM114/Compare To Constant6'
 * '<S15>'  : 'BMS_HIL_Wrapper/Data_Acquisition_From_L99BM114/Counter'
 * '<S16>'  : 'BMS_HIL_Wrapper/Data_Acquisition_From_L99BM114/Counter/Counter Free-Running'
 * '<S17>'  : 'BMS_HIL_Wrapper/Data_Acquisition_From_L99BM114/Counter/Counter Free-Running/Increment Real World'
 * '<S18>'  : 'BMS_HIL_Wrapper/Data_Acquisition_From_L99BM114/Counter/Counter Free-Running/Wrap To Zero'
 * '<S19>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/Compare To Constant'
 * '<S20>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/Compare To Constant1'
 * '<S21>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/Compare To Constant2'
 * '<S22>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/Compare To Constant3'
 * '<S23>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/Compare To Constant4'
 * '<S24>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/GPIOs_Frames'
 * '<S25>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/Proceed_Batt_Volt'
 * '<S26>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/Proceed_Batt_Volt1'
 * '<S27>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/Proceed_Cell_Volt'
 * '<S28>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/Proceed_Current'
 * '<S29>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/Proceed_Temp'
 * '<S30>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/Subsystem'
 * '<S31>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/GPIOs_Frames/Compare To Constant'
 * '<S32>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/GPIOs_Frames/Compare To Constant1'
 * '<S33>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/GPIOs_Frames/Compare To Constant2'
 * '<S34>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/GPIOs_Frames/Compare To Constant3'
 * '<S35>'  : 'BMS_HIL_Wrapper/Raw_Data_Conv/GPIOs_Frames/Compare To Constant4'
 */
#endif                                 /* BMS_HIL_Wrapper_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
