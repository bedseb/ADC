//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Supercluster_Math_ADCtypes.h
//
// Code generated for Simulink model 'Supercluster_AD'.
//
// Model version                  : 1.10
// Simulink Coder version         : 9.6 (R2021b) 14-May-2021
// C/C++ source code generated on : Wed Oct  4 19:46:18 2023
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Supercluster_Math_ADCtypes_h_
#define RTW_HEADER_Supercluster_Math_ADCtypes_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef struct_tag_OGFBnYPwQbNlNAn7MtokTE
#define struct_tag_OGFBnYPwQbNlNAn7MtokTE

struct tag_OGFBnYPwQbNlNAn7MtokTE
{
  int32_T S0_isInitialized;
  real_T W0_ZERO_STATES[4];
  real_T W1_POLE_STATES[4];
  int32_T W2_PreviousNumChannels;
  real_T P0_ICRTP;
  real_T P1_RTP1COEFF[6];
  real_T P2_RTP2COEFF[4];
  real_T P3_RTP3COEFF[3];
  boolean_T P4_RTP_COEFF3_BOOL[3];
  real_T P5_IC2RTP;
};

#endif                                 // struct_tag_OGFBnYPwQbNlNAn7MtokTE

#ifndef typedef_Supercluster_b_dsp_BiquadFilt_T
#define typedef_Supercluster_b_dsp_BiquadFilt_T

typedef struct tag_OGFBnYPwQbNlNAn7MtokTE Supercluster_b_dsp_BiquadFilt_T;

#endif                               // typedef_Supercluster_b_dsp_BiquadFilt_T

#ifndef struct_tag_7wDJ3rcaeyKaH8CnsYToMD
#define struct_tag_7wDJ3rcaeyKaH8CnsYToMD

struct tag_7wDJ3rcaeyKaH8CnsYToMD
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  Supercluster_b_dsp_BiquadFilt_T cSFunObject;
};

#endif                                 // struct_tag_7wDJ3rcaeyKaH8CnsYToMD

#ifndef typedef_Supercluster_b_dspcodegen_Biq_T
#define typedef_Supercluster_b_dspcodegen_Biq_T

typedef struct tag_7wDJ3rcaeyKaH8CnsYToMD Supercluster_b_dspcodegen_Biq_T;

#endif                               // typedef_Supercluster_b_dspcodegen_Biq_T

#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE

struct tag_BlgwLpgj2bjudmbmVKWwDE
{
  uint32_T f1[8];
};

#endif                                 // struct_tag_BlgwLpgj2bjudmbmVKWwDE

#ifndef typedef_Supercluster_cell_wrap_T
#define typedef_Supercluster_cell_wrap_T

typedef struct tag_BlgwLpgj2bjudmbmVKWwDE Supercluster_cell_wrap_T;

#endif                                 // typedef_Supercluster_cell_wrap_T

#ifndef struct_tag_GF3gxuhC3gLgvGX3yyc1w
#define struct_tag_GF3gxuhC3gLgvGX3yyc1w

struct tag_GF3gxuhC3gLgvGX3yyc1w
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  Supercluster_cell_wrap_T inputVarSize;
  int32_T NumChannels;
  Supercluster_b_dspcodegen_Biq_T *FilterObj;
  Supercluster_b_dspcodegen_Biq_T _pobj0;
};

#endif                                 // struct_tag_GF3gxuhC3gLgvGX3yyc1w

#ifndef typedef_Supercluster_dsp_LowpassFilte_T
#define typedef_Supercluster_dsp_LowpassFilte_T

typedef struct tag_GF3gxuhC3gLgvGX3yyc1w Supercluster_dsp_LowpassFilte_T;

#endif                               // typedef_Supercluster_dsp_LowpassFilte_T
#endif                              // RTW_HEADER_Supercluster_Math_ADCtypes_h_

//
// File trailer for generated code.
//
// [EOF]
//
