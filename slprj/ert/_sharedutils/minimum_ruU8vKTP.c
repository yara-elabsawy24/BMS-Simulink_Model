/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: minimum_ruU8vKTP.c
 *
 * Code generated for Simulink model 'BMS_MCU_CODE'.
 *
 * Model version                  : 1.59
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Thu Jun  4 17:01:57 2026
 */

#include "rtwtypes.h"
#include "minimum_ruU8vKTP.h"
#include "rt_nonfinite.h"

/* Function for Chart: '<S6>/BMS_States' */
real32_T minimum_ruU8vKTP(const real32_T x[12])
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
    while ((!exitg1) && (k < 13)) {
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
    for (k = idx + 1; k < 13; k++) {
      real32_T x_0;
      x_0 = x[k - 1];
      if (ex > x_0) {
        ex = x_0;
      }
    }
  }

  return ex;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
