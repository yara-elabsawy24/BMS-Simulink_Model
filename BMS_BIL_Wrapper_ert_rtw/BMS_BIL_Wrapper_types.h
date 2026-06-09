/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: BMS_BIL_Wrapper_types.h
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

#ifndef BMS_BIL_Wrapper_types_h_
#define BMS_BIL_Wrapper_types_h_
#include "rtwtypes.h"
#include "mw_stm32_spi_ll.h"
#ifndef DEFINED_TYPEDEF_FOR_Fault_Level_
#define DEFINED_TYPEDEF_FOR_Fault_Level_

typedef struct {
  real_T OT;
  real_T UT;
  real_T UV;
  real_T OV;
} Fault_Level;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Current_Limits_
#define DEFINED_TYPEDEF_FOR_Current_Limits_

typedef struct {
  real32_T Discharge_Current_Limit;
  real32_T Charge_Current_Limit;
} Current_Limits;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SRE_
#define DEFINED_TYPEDEF_FOR_SRE_

typedef enum {
  Charge = 0,                          /* Default value */
  Fly,
  Standby
} SRE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Fault_out_
#define DEFINED_TYPEDEF_FOR_Fault_out_

typedef struct {
  boolean_T VoltSensor;
  boolean_T UV;
  boolean_T OT;
  boolean_T UT;
  boolean_T OC;
  boolean_T OV;
} Fault_out;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BMS_State_
#define DEFINED_TYPEDEF_FOR_BMS_State_

typedef enum {
  Standbying = 0,                      /* Default value */
  Flying = 2,
  Fault = 3,
  Charging = 1
} BMS_State;

#endif

#ifndef struct_tag_92DzsjXuaF7c99tFkgTmuB
#define struct_tag_92DzsjXuaF7c99tFkgTmuB

struct tag_92DzsjXuaF7c99tFkgTmuB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /* struct_tag_92DzsjXuaF7c99tFkgTmuB */

#ifndef typedef_stm32cube_blocks_DigitalPortW_T
#define typedef_stm32cube_blocks_DigitalPortW_T

typedef struct tag_92DzsjXuaF7c99tFkgTmuB stm32cube_blocks_DigitalPortW_T;

#endif                             /* typedef_stm32cube_blocks_DigitalPortW_T */

/* Custom Type definition for MATLABSystem: '<Root>/SPI Controller Transfer' */
#include "mw_stm32_spi_ll.h"

/* Custom Type definition for MATLABSystem: '<Root>/SPI Controller Transfer' */
#include "mw_stm32_spi_ll.h"
#include "mw_stm32_spi_ll.h"
#ifndef struct_tag_JhEZJVFUWFTNyxxGuprhyG
#define struct_tag_JhEZJVFUWFTNyxxGuprhyG

struct tag_JhEZJVFUWFTNyxxGuprhyG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  STM32_SPI_Struct_T * MW_SPI_HANDLE;
  STM32_SPI_Struct_T MW_SPI_BlockStruct;
};

#endif                                 /* struct_tag_JhEZJVFUWFTNyxxGuprhyG */

#ifndef typedef_stm32cube_blocks_SPIControlle_T
#define typedef_stm32cube_blocks_SPIControlle_T

typedef struct tag_JhEZJVFUWFTNyxxGuprhyG stm32cube_blocks_SPIControlle_T;

#endif                             /* typedef_stm32cube_blocks_SPIControlle_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_BMS_BIL_Wrapper_T RT_MODEL_BMS_BIL_Wrapper_T;

#endif                                 /* BMS_BIL_Wrapper_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
