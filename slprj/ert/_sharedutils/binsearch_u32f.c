/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: binsearch_u32f.c
 *
 * Code generated for Simulink model 'BMS_MCU_CODE'.
 *
 * Model version                  : 1.59
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Thu Jun  4 17:01:57 2026
 */

#include "binsearch_u32f.h"
#include "rtwtypes.h"

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

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
