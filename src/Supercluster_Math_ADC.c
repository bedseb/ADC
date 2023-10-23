//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Supercluster_Math_ADC.c
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
#include "Supercluster_Math_ADC.h"
#include "Supercluster_Math_ADCprivate.h"

// Block signals (default storage)
Supercluster_BlockIO_T Supercluster_B;

// Block states (default storage)
Supercluster_D_Work_T Supercluster_DWork;

// External inputs (root inport signals with default storage)
Supercluster_ExternalInputs_T Supercluster_U;

// External outputs (root outports fed by signals with default storage)
Supercluster_ExternalOutputs_T Supercluster_Y;

//
// Output and update for atomic system:
//    '<S55>/SqrtUsedFcn'
//    '<S109>/SqrtUsedFcn'
//    '<S163>/SqrtUsedFcn'
//
void Supercluster_Supercluster_AD_i(real_T rt_u_u, boolean_T rt_u_isSqrtUsed,
  real_T *rt_y_P)
{
  //  Determine if the Square-Root algorithm was used
  if (rt_u_isSqrtUsed) {
    *rt_y_P = rt_u_u * rt_u_u;
  } else {
    *rt_y_P = rt_u_u;
  }
}

//
// Disable for enable system:
//    '<S26>/MeasurementUpdate'
//    '<S134>/MeasurementUpdate'
//
void Supercluster_Supercluster_AD_pn(real_T *rt_y_Lykyhatkk1,
  Supercluster_rtDW_Measurement_T *localDW)
{
  // Outputs for Enabled SubSystem: '<S26>/MeasurementUpdate' incorporates:
  //   EnablePort: '<S57>/Enable'

  // Disable for Outport: '<S57>/L*(y[k]-yhat[k|k-1])'
  *rt_y_Lykyhatkk1 = 0.0;

  // End of Outputs for SubSystem: '<S26>/MeasurementUpdate'
  localDW->MeasurementUpdate_MODE = false;
}

//
// Output and update for enable system:
//    '<S26>/MeasurementUpdate'
//    '<S134>/MeasurementUpdate'
//
void Supercluster_Supercluster_AD_gf(boolean_T rt_u_Enable, real_T rt_u_Lk,
  real_T rt_u_yk, real_T rt_u_Ck, real_T rt_u_xhatkk1, real_T rt_u_Dk, real_T
  rt_u_uk, real_T *rt_y_Lykyhatkk1, Supercluster_rtDW_Measurement_T *localDW)
{
  // Outputs for Enabled SubSystem: '<S26>/MeasurementUpdate' incorporates:
  //   EnablePort: '<S57>/Enable'

  if (rt_u_Enable) {
    localDW->MeasurementUpdate_MODE = true;

    // Product: '<S57>/Product3' incorporates:
    //   Product: '<S57>/C[k]*xhat[k|k-1]'
    //   Product: '<S57>/D[k]*u[k]'
    //   Sum: '<S57>/Add1'
    //   Sum: '<S57>/Sum'

    *rt_y_Lykyhatkk1 = (rt_u_yk - (rt_u_Ck * rt_u_xhatkk1 + rt_u_Dk * rt_u_uk)) *
      rt_u_Lk;
  } else if (localDW->MeasurementUpdate_MODE) {
    Supercluster_Supercluster_AD_pn(rt_y_Lykyhatkk1, localDW);
  }

  // End of Outputs for SubSystem: '<S26>/MeasurementUpdate'
}

//
// Disable for enable system:
//    '<S33>/Enabled Subsystem'
//    '<S87>/Enabled Subsystem'
//    '<S141>/Enabled Subsystem'
//
void Supercluster_Supercluster_AD_c3(real_T *rt_y_deltax,
  Supercluster_rtDW_EnabledSubs_T *localDW)
{
  // Outputs for Enabled SubSystem: '<S33>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S59>/Enable'

  // Disable for Outport: '<S59>/deltax'
  *rt_y_deltax = 0.0;

  // End of Outputs for SubSystem: '<S33>/Enabled Subsystem'
  localDW->EnabledSubsystem_MODE = false;
}

//
// Output and update for enable system:
//    '<S33>/Enabled Subsystem'
//    '<S87>/Enabled Subsystem'
//    '<S141>/Enabled Subsystem'
//
void Supercluster_Supercluster_AD_h4(boolean_T rt_u_Enable, real_T rt_u_Mk,
  real_T rt_u_Ck, real_T rt_u_yk, real_T rt_u_xhatkk1, real_T *rt_y_deltax,
  Supercluster_rtDW_EnabledSubs_T *localDW)
{
  // Outputs for Enabled SubSystem: '<S33>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S59>/Enable'

  if (rt_u_Enable) {
    localDW->EnabledSubsystem_MODE = true;

    // Product: '<S59>/Product2' incorporates:
    //   Product: '<S59>/Product'
    //   Sum: '<S59>/Add1'

    *rt_y_deltax = (rt_u_yk - rt_u_Ck * rt_u_xhatkk1) * rt_u_Mk;
  } else if (localDW->EnabledSubsystem_MODE) {
    Supercluster_Supercluster_AD_c3(rt_y_deltax, localDW);
  }

  // End of Outputs for SubSystem: '<S33>/Enabled Subsystem'
}

// Model step function
void Supercluster_ADC_task(void)
{
  Supercluster_b_dspcodegen_Biq_T *obj;
  real_T diff_alt;
  real_T numAccum;
  real_T rtb_;
  real_T rtb_f;

  // Delay: '<S4>/MemoryX' incorporates:
  //   Constant: '<S4>/X0'

  if (Supercluster_DWork.icLoad) {
    Supercluster_DWork.MemoryX_DSTATE = 0.0;
  }

  // Outputs for Enabled SubSystem: '<S141>/Enabled Subsystem'
  // Constant: '<S4>/Enable' incorporates:
  //   Constant: '<S114>/KalmanGainM'
  //   Constant: '<S4>/C'
  //   Delay: '<S4>/MemoryX'
  //   Inport: '<Root>/press'

  Supercluster_Supercluster_AD_h4(true, 0.7320508075688773, 1.0,
    Supercluster_U.press, Supercluster_DWork.MemoryX_DSTATE,
    &Supercluster_B.Product2, &Supercluster_DWork.EnabledSubsystem_i);

  // End of Outputs for SubSystem: '<S141>/Enabled Subsystem'

  // Sum: '<S141>/Add' incorporates:
  //   Delay: '<S4>/MemoryX'

  rtb_ = Supercluster_B.Product2 + Supercluster_DWork.MemoryX_DSTATE;

  // MATLAB Function: '<Root>/press_to_alt' incorporates:
  //   Inport: '<Root>/press_ground'
  //
  //  Block description for '<Root>/press_to_alt':
  //   General block computing the QNE and QFE altitude
  //   Inputs: press_ground, press
  //
  //   Outputs: QNE, QFE


  // [Pa]
  // [N*m/mol*K]
  // [K]
  // [m/s2]
  // [kg/mol]
  diff_alt = (-pow(Supercluster_U.press_ground / 101325.0, 0.19025875190258751)
              + 1.0) * 44300.0;
  if (rtb_ >= 22632.06) {
    rtb_f = (-pow(rtb_ / 101325.0, 0.19025875190258751) + 1.0) * 44300.0;

    // Outport: '<Root>/QFE'
    Supercluster_Y.QFE = rtb_f - diff_alt;
  } else if ((rtb_ < 22632.06) && (rtb_ >= 5474.89)) {
    rtb_f = log(rtb_ / 101325.0) * 2395.771308 / -0.28404373326;

    // Outport: '<Root>/QFE'
    Supercluster_Y.QFE = rtb_f - diff_alt;
  } else {
    rtb_f = 0.0;

    // Outport: '<Root>/QFE'
    Supercluster_Y.QFE = 0.0;
  }

  // Outport: '<Root>/QNE' incorporates:
  //   MATLAB Function: '<Root>/press_to_alt'
  //
  //  Block description for '<Root>/press_to_alt':
  //   General block computing the QNE and QFE altitude
  //   Inputs: press_ground, press
  //
  //   Outputs: QNE, QFE


  Supercluster_Y.QNE = rtb_f;

  // SampleTimeMath: '<S1>/TSamp' incorporates:
  //   MATLAB Function: '<Root>/press_to_alt'
  //
  //  About '<S1>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )
  //
  //  Block description for '<Root>/press_to_alt':
  //   General block computing the QNE and QFE altitude
  //   Inputs: press_ground, press
  //
  //   Outputs: QNE, QFE


  diff_alt = rtb_f * 20.0;

  // Sum: '<S1>/Diff' incorporates:
  //   UnitDelay: '<S1>/UD'
  //
  //  Block description for '<S1>/Diff':
  //
  //   Add in CPU
  //
  //  Block description for '<S1>/UD':
  //
  //   Store in Global RAM

  rtb_f = diff_alt - Supercluster_DWork.UD_DSTATE;

  // MATLABSystem: '<Root>/Lowpass Filter2'
  obj = Supercluster_DWork.obj.FilterObj;
  if (obj->isInitialized != 1) {
    obj->isSetupComplete = false;
    obj->isInitialized = 1;
    obj->isSetupComplete = true;

    // System object Initialization function: dsp.BiquadFilter
    obj->cSFunObject.W0_ZERO_STATES[0] = obj->cSFunObject.P0_ICRTP;
    obj->cSFunObject.W0_ZERO_STATES[1] = obj->cSFunObject.P0_ICRTP;
    obj->cSFunObject.W0_ZERO_STATES[2] = obj->cSFunObject.P0_ICRTP;
    obj->cSFunObject.W0_ZERO_STATES[3] = obj->cSFunObject.P0_ICRTP;
    obj->cSFunObject.W1_POLE_STATES[0] = obj->cSFunObject.P5_IC2RTP;
    obj->cSFunObject.W1_POLE_STATES[1] = obj->cSFunObject.P5_IC2RTP;
    obj->cSFunObject.W1_POLE_STATES[2] = obj->cSFunObject.P5_IC2RTP;
    obj->cSFunObject.W1_POLE_STATES[3] = obj->cSFunObject.P5_IC2RTP;
  }

  // System object Outputs function: dsp.BiquadFilter
  numAccum = obj->cSFunObject.P1_RTP1COEFF[0] * rtb_f;
  numAccum += obj->cSFunObject.W0_ZERO_STATES[0] * obj->
    cSFunObject.P1_RTP1COEFF[1];
  numAccum += obj->cSFunObject.W0_ZERO_STATES[1] * obj->
    cSFunObject.P1_RTP1COEFF[2];
  numAccum -= obj->cSFunObject.P2_RTP2COEFF[0] * obj->
    cSFunObject.W1_POLE_STATES[0];
  numAccum -= obj->cSFunObject.P2_RTP2COEFF[1] * obj->
    cSFunObject.W1_POLE_STATES[1];
  obj->cSFunObject.W0_ZERO_STATES[1] = obj->cSFunObject.W0_ZERO_STATES[0];
  obj->cSFunObject.W0_ZERO_STATES[0] = rtb_f;
  obj->cSFunObject.W1_POLE_STATES[1] = obj->cSFunObject.W1_POLE_STATES[0];
  obj->cSFunObject.W1_POLE_STATES[0] = numAccum;
  rtb_f = numAccum;
  numAccum *= obj->cSFunObject.P1_RTP1COEFF[3];
  numAccum += obj->cSFunObject.W0_ZERO_STATES[2] * obj->
    cSFunObject.P1_RTP1COEFF[4];
  numAccum += obj->cSFunObject.W0_ZERO_STATES[3] * obj->
    cSFunObject.P1_RTP1COEFF[5];
  numAccum -= obj->cSFunObject.P2_RTP2COEFF[2] * obj->
    cSFunObject.W1_POLE_STATES[2];
  numAccum -= obj->cSFunObject.P2_RTP2COEFF[3] * obj->
    cSFunObject.W1_POLE_STATES[3];
  obj->cSFunObject.W0_ZERO_STATES[3] = obj->cSFunObject.W0_ZERO_STATES[2];
  obj->cSFunObject.W0_ZERO_STATES[2] = rtb_f;
  obj->cSFunObject.W1_POLE_STATES[3] = obj->cSFunObject.W1_POLE_STATES[2];
  obj->cSFunObject.W1_POLE_STATES[2] = numAccum;

  // Outport: '<Root>/w' incorporates:
  //   MATLABSystem: '<Root>/Lowpass Filter2'

  Supercluster_Y.w = numAccum;

  // Outport: '<Root>/press_filtered'
  Supercluster_Y.press_filtered = rtb_;

  // MATLAB Function: '<S163>/SqrtUsedFcn' incorporates:
  //   Constant: '<S114>/CovarianceZ'
  //   Constant: '<S163>/isSqrtUsed'

  Supercluster_Supercluster_AD_i(0.036602540378443869, false, &rtb_);

  // Outputs for Enabled SubSystem: '<S134>/MeasurementUpdate'
  // Constant: '<S4>/Enable' incorporates:
  //   Constant: '<S114>/KalmanGainL'
  //   Constant: '<S4>/C'
  //   Constant: '<S4>/D'
  //   Constant: '<S4>/u'
  //   Delay: '<S4>/MemoryX'
  //   Inport: '<Root>/press'

  Supercluster_Supercluster_AD_gf(true, 0.73205080756887764,
    Supercluster_U.press, 1.0, Supercluster_DWork.MemoryX_DSTATE, 0.0, 0.0,
    &Supercluster_B.Product3, &Supercluster_DWork.MeasurementUpdate_g);

  // End of Outputs for SubSystem: '<S134>/MeasurementUpdate'

  // Delay: '<S2>/MemoryX' incorporates:
  //   Constant: '<S2>/X0'

  if (Supercluster_DWork.icLoad_j) {
    Supercluster_DWork.MemoryX_DSTATE_n = 0.0;
  }

  // Outputs for Enabled SubSystem: '<S33>/Enabled Subsystem'
  // Constant: '<S2>/Enable' incorporates:
  //   Constant: '<S2>/C'
  //   Constant: '<S6>/KalmanGainM'
  //   Delay: '<S2>/MemoryX'
  //   Inport: '<Root>/temp'

  Supercluster_Supercluster_AD_h4(true, 0.872983346207417, 1.0,
    Supercluster_U.temp, Supercluster_DWork.MemoryX_DSTATE_n,
    &Supercluster_B.Product2_f, &Supercluster_DWork.EnabledSubsystem);

  // End of Outputs for SubSystem: '<S33>/Enabled Subsystem'

  // Outport: '<Root>/temp_filtered' incorporates:
  //   Delay: '<S2>/MemoryX'
  //   Sum: '<S33>/Add'

  Supercluster_Y.temp_filtered = Supercluster_B.Product2_f +
    Supercluster_DWork.MemoryX_DSTATE_n;

  // MATLAB Function: '<S55>/SqrtUsedFcn' incorporates:
  //   Constant: '<S55>/isSqrtUsed'
  //   Constant: '<S6>/CovarianceZ'

  Supercluster_Supercluster_AD_i(0.043649167310370857, false, &rtb_);

  // Outputs for Enabled SubSystem: '<S26>/MeasurementUpdate'
  // Constant: '<S2>/Enable' incorporates:
  //   Constant: '<S2>/C'
  //   Constant: '<S2>/D'
  //   Constant: '<S2>/u'
  //   Constant: '<S6>/KalmanGainL'
  //   Delay: '<S2>/MemoryX'
  //   Inport: '<Root>/temp'

  Supercluster_Supercluster_AD_gf(true, 0.872983346207418, Supercluster_U.temp,
    1.0, Supercluster_DWork.MemoryX_DSTATE_n, 0.0, 0.0,
    &Supercluster_B.Product3_k, &Supercluster_DWork.MeasurementUpdate);

  // End of Outputs for SubSystem: '<S26>/MeasurementUpdate'

  // Delay: '<S3>/MemoryX' incorporates:
  //   Constant: '<S3>/X0'

  if (Supercluster_DWork.icLoad_m) {
    Supercluster_DWork.MemoryX_DSTATE_p = 0.0;
  }

  // Outputs for Enabled SubSystem: '<S87>/Enabled Subsystem'
  // Constant: '<S3>/Enable' incorporates:
  //   Constant: '<S3>/C'
  //   Constant: '<S60>/KalmanGainM'
  //   Delay: '<S3>/MemoryX'
  //   Inport: '<Root>/humidity'

  Supercluster_Supercluster_AD_h4(true, 0.04373253849269, 1.0,
    Supercluster_U.humidity, Supercluster_DWork.MemoryX_DSTATE_p,
    &Supercluster_B.Product2_g, &Supercluster_DWork.EnabledSubsystem_j);

  // End of Outputs for SubSystem: '<S87>/Enabled Subsystem'

  // Outport: '<Root>/humidity_filtered' incorporates:
  //   Delay: '<S3>/MemoryX'
  //   Sum: '<S87>/Add'

  Supercluster_Y.humidity_filtered = Supercluster_B.Product2_g +
    Supercluster_DWork.MemoryX_DSTATE_p;

  // MATLAB Function: '<S109>/SqrtUsedFcn' incorporates:
  //   Constant: '<S109>/isSqrtUsed'
  //   Constant: '<S60>/CovarianceZ'

  Supercluster_Supercluster_AD_i(0.0021866269246345006, false, &rtb_);

  // Update for Delay: '<S4>/MemoryX' incorporates:
  //   Sum: '<S134>/Add'

  Supercluster_DWork.icLoad = false;
  Supercluster_DWork.MemoryX_DSTATE += Supercluster_B.Product3;

  // Update for UnitDelay: '<S1>/UD'
  //
  //  Block description for '<S1>/UD':
  //
  //   Store in Global RAM

  Supercluster_DWork.UD_DSTATE = diff_alt;

  // Update for Delay: '<S2>/MemoryX' incorporates:
  //   Sum: '<S26>/Add'

  Supercluster_DWork.icLoad_j = false;
  Supercluster_DWork.MemoryX_DSTATE_n += Supercluster_B.Product3_k;

  // Update for Delay: '<S3>/MemoryX' incorporates:
  //   Constant: '<S60>/KalmanGainL'
  //   Inport: '<Root>/humidity'
  //   Product: '<S111>/Product3'
  //   Sum: '<S111>/Add1'
  //   Sum: '<S111>/Sum'
  //   Sum: '<S80>/Add'

  Supercluster_DWork.icLoad_m = false;

  // Outputs for Enabled SubSystem: '<S80>/MeasurementUpdate' incorporates:
  //   EnablePort: '<S111>/Enable'

  Supercluster_DWork.MemoryX_DSTATE_p = (Supercluster_U.humidity -
    (Supercluster_DWork.MemoryX_DSTATE_p + Supercluster_ConstB.Dkuk)) *
    0.043732538492690008 + (Supercluster_ConstB.Bkuk +
    Supercluster_DWork.MemoryX_DSTATE_p);

  // End of Outputs for SubSystem: '<S80>/MeasurementUpdate'
}

// Model initialize function
void Supercluster_ADC_init(void)
{
  {
    Supercluster_b_dspcodegen_Biq_T *iobj_0;
    int32_T i;
    static const real_T tmp[6] = { 0.0276188388237803, -0.0013303899175911033,
      0.0276188388237803, 0.033772616948456076, 0.046740831581825064,
      0.033772616948456076 };

    // InitializeConditions for Delay: '<S4>/MemoryX'
    Supercluster_DWork.icLoad = true;

    // InitializeConditions for Delay: '<S2>/MemoryX'
    Supercluster_DWork.icLoad_j = true;

    // InitializeConditions for Delay: '<S3>/MemoryX'
    Supercluster_DWork.icLoad_m = true;

    // Start for MATLABSystem: '<Root>/Lowpass Filter2'
    Supercluster_DWork.obj._pobj0.matlabCodegenIsDeleted = true;
    Supercluster_DWork.obj.matlabCodegenIsDeleted = true;
    Supercluster_DWork.obj.isInitialized = 0;
    Supercluster_DWork.obj.NumChannels = -1;
    Supercluster_DWork.obj.matlabCodegenIsDeleted = false;
    Supercluster_DWork.obj.isSetupComplete = false;
    Supercluster_DWork.obj.isInitialized = 1;
    iobj_0 = &Supercluster_DWork.obj._pobj0;
    iobj_0->isInitialized = 0;
    iobj_0->isInitialized = 0;

    // System object Constructor function: dsp.BiquadFilter
    iobj_0->cSFunObject.P0_ICRTP = 0.0;
    for (i = 0; i < 6; i++) {
      iobj_0->cSFunObject.P1_RTP1COEFF[i] = tmp[i];
    }

    iobj_0->cSFunObject.P2_RTP2COEFF[0] = -1.7337681032547754;
    iobj_0->cSFunObject.P2_RTP2COEFF[1] = 0.85308647027644791;
    iobj_0->cSFunObject.P2_RTP2COEFF[2] = -1.6144091719081628;
    iobj_0->cSFunObject.P2_RTP2COEFF[3] = 0.66664078781649616;
    iobj_0->cSFunObject.P3_RTP3COEFF[0] = 0.0;
    iobj_0->cSFunObject.P3_RTP3COEFF[1] = 0.0;
    iobj_0->cSFunObject.P3_RTP3COEFF[2] = 0.0;
    iobj_0->cSFunObject.P4_RTP_COEFF3_BOOL[0] = false;
    iobj_0->cSFunObject.P4_RTP_COEFF3_BOOL[1] = false;
    iobj_0->cSFunObject.P4_RTP_COEFF3_BOOL[2] = false;
    iobj_0->cSFunObject.P5_IC2RTP = 0.0;
    iobj_0->matlabCodegenIsDeleted = false;
    Supercluster_DWork.obj.FilterObj = iobj_0;
    Supercluster_DWork.obj.NumChannels = 1;
    Supercluster_DWork.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Lowpass Filter2'

    // InitializeConditions for MATLABSystem: '<Root>/Lowpass Filter2'
    iobj_0 = Supercluster_DWork.obj.FilterObj;
    if (iobj_0->isInitialized == 1) {
      // System object Initialization function: dsp.BiquadFilter
      iobj_0->cSFunObject.W0_ZERO_STATES[0] = iobj_0->cSFunObject.P0_ICRTP;
      iobj_0->cSFunObject.W0_ZERO_STATES[1] = iobj_0->cSFunObject.P0_ICRTP;
      iobj_0->cSFunObject.W0_ZERO_STATES[2] = iobj_0->cSFunObject.P0_ICRTP;
      iobj_0->cSFunObject.W0_ZERO_STATES[3] = iobj_0->cSFunObject.P0_ICRTP;
      iobj_0->cSFunObject.W1_POLE_STATES[0] = iobj_0->cSFunObject.P5_IC2RTP;
      iobj_0->cSFunObject.W1_POLE_STATES[1] = iobj_0->cSFunObject.P5_IC2RTP;
      iobj_0->cSFunObject.W1_POLE_STATES[2] = iobj_0->cSFunObject.P5_IC2RTP;
      iobj_0->cSFunObject.W1_POLE_STATES[3] = iobj_0->cSFunObject.P5_IC2RTP;
    }

    // End of InitializeConditions for MATLABSystem: '<Root>/Lowpass Filter2'
  }
}

// Model terminate function
void Supercluster_AD_terminate(void)
{
  Supercluster_b_dspcodegen_Biq_T *obj;

  // Terminate for MATLABSystem: '<Root>/Lowpass Filter2'
  if (!Supercluster_DWork.obj.matlabCodegenIsDeleted) {
    Supercluster_DWork.obj.matlabCodegenIsDeleted = true;
    if ((Supercluster_DWork.obj.isInitialized == 1) &&
        Supercluster_DWork.obj.isSetupComplete) {
      obj = Supercluster_DWork.obj.FilterObj;
      if (obj->isInitialized == 1) {
        obj->isInitialized = 2;
      }

      Supercluster_DWork.obj.NumChannels = -1;
    }
  }

  obj = &Supercluster_DWork.obj._pobj0;
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }

  // End of Terminate for MATLABSystem: '<Root>/Lowpass Filter2'
}

//
// File trailer for generated code.
//
// [EOF]
//
