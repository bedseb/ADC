//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Supercluster_Math_ADC.h
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
#ifndef RTW_HEADER_Supercluster_Math_ADC_h_
#define RTW_HEADER_Supercluster_Math_ADC_h_
#include <math.h>
#ifndef Supercluster_AD_COMMON_INCLUDES_
#define Supercluster_AD_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 // Supercluster_AD_COMMON_INCLUDES_

#include "Supercluster_Math_ADCtypes.h"

// Macros for accessing real-time model data structure

// Block states (default storage) for system '<S26>/MeasurementUpdate'
typedef struct {
  boolean_T MeasurementUpdate_MODE;    // '<S26>/MeasurementUpdate'
} Supercluster_rtDW_Measurement_T;

// Block states (default storage) for system '<S33>/Enabled Subsystem'
typedef struct {
  boolean_T EnabledSubsystem_MODE;     // '<S33>/Enabled Subsystem'
} Supercluster_rtDW_EnabledSubs_T;

// Block signals (default storage)
typedef struct {
  real_T Product2;                     // '<S167>/Product2'
  real_T Product3;                     // '<S165>/Product3'
  real_T Product2_g;                   // '<S113>/Product2'
  real_T Product2_f;                   // '<S59>/Product2'
  real_T Product3_k;                   // '<S57>/Product3'
} Supercluster_BlockIO_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  Supercluster_dsp_LowpassFilte_T obj; // '<Root>/Lowpass Filter2'
  real_T MemoryX_DSTATE;               // '<S4>/MemoryX'
  real_T UD_DSTATE;                    // '<S1>/UD'
  real_T MemoryX_DSTATE_n;             // '<S2>/MemoryX'
  real_T MemoryX_DSTATE_p;             // '<S3>/MemoryX'
  boolean_T icLoad;                    // '<S4>/MemoryX'
  boolean_T icLoad_j;                  // '<S2>/MemoryX'
  boolean_T icLoad_m;                  // '<S3>/MemoryX'
  boolean_T isInitialized;             // '<Root>/Lowpass Filter2'
  Supercluster_rtDW_EnabledSubs_T EnabledSubsystem_i;// '<S141>/Enabled Subsystem' 
  Supercluster_rtDW_Measurement_T MeasurementUpdate_g;// '<S134>/MeasurementUpdate' 
  Supercluster_rtDW_EnabledSubs_T EnabledSubsystem_j;// '<S87>/Enabled Subsystem' 
  Supercluster_rtDW_EnabledSubs_T EnabledSubsystem;// '<S33>/Enabled Subsystem'
  Supercluster_rtDW_Measurement_T MeasurementUpdate;// '<S26>/MeasurementUpdate' 
} Supercluster_D_Work_T;

// Invariant block signals (default storage)
typedef struct {
  const real_T Bkuk;                   // '<S80>/B[k]*u[k]'
  const real_T Dkuk;                   // '<S111>/D[k]*u[k]'
} Supercluster_ConstBlockIO_T;

// External inputs (root inport signals with default storage)
typedef struct {
  real_T press;                        // '<Root>/press'
  real_T TIME;                         // '<Root>/TIME'
  real_T press_ground;                 // '<Root>/press_ground'
  real_T temp;                         // '<Root>/temp'
  real_T humidity;                     // '<Root>/humidity'
} Supercluster_ExternalInputs_T;

// External outputs (root outports fed by signals with default storage)
typedef struct {
  real_T QNE;                          // '<Root>/QNE'
  real_T QFE;                          // '<Root>/QFE'
  real_T w;                            // '<Root>/w'
  real_T press_filtered;               // '<Root>/press_filtered'
  real_T temp_filtered;                // '<Root>/temp_filtered'
  real_T humidity_filtered;            // '<Root>/humidity_filtered'
} Supercluster_ExternalOutputs_T;

// Block signals (default storage)
extern Supercluster_BlockIO_T Supercluster_B;

// Block states (default storage)
extern Supercluster_D_Work_T Supercluster_DWork;

// External inputs (root inport signals with default storage)
extern Supercluster_ExternalInputs_T Supercluster_U;

// External outputs (root outports fed by signals with default storage)
extern Supercluster_ExternalOutputs_T Supercluster_Y;
extern const Supercluster_ConstBlockIO_T Supercluster_ConstB;// constant block i/o 

// Model entry point functions
extern void Supercluster_ADC_init(void);
extern void Supercluster_ADC_task(void);
extern void Supercluster_AD_terminate(void);

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Data Type Duplicate' : Unused code path elimination
//  Block '<S49>/Data Type Duplicate' : Unused code path elimination
//  Block '<S50>/Data Type Duplicate' : Unused code path elimination
//  Block '<S51>/Conversion' : Unused code path elimination
//  Block '<S51>/Data Type Duplicate' : Unused code path elimination
//  Block '<S52>/Data Type Duplicate' : Unused code path elimination
//  Block '<S9>/Data Type Duplicate' : Unused code path elimination
//  Block '<S10>/Data Type Duplicate' : Unused code path elimination
//  Block '<S11>/Data Type Duplicate' : Unused code path elimination
//  Block '<S12>/Data Type Duplicate' : Unused code path elimination
//  Block '<S14>/Data Type Duplicate' : Unused code path elimination
//  Block '<S15>/Data Type Duplicate' : Unused code path elimination
//  Block '<S16>/Data Type Duplicate' : Unused code path elimination
//  Block '<S17>/Conversion' : Unused code path elimination
//  Block '<S17>/Data Type Duplicate' : Unused code path elimination
//  Block '<S18>/Data Type Duplicate' : Unused code path elimination
//  Block '<S19>/Data Type Duplicate' : Unused code path elimination
//  Block '<S20>/Data Type Duplicate' : Unused code path elimination
//  Block '<S22>/Data Type Duplicate' : Unused code path elimination
//  Block '<S23>/Data Type Duplicate' : Unused code path elimination
//  Block '<S24>/Data Type Duplicate' : Unused code path elimination
//  Block '<S2>/G' : Unused code path elimination
//  Block '<S2>/H' : Unused code path elimination
//  Block '<S2>/N' : Unused code path elimination
//  Block '<S2>/P0' : Unused code path elimination
//  Block '<S2>/Q' : Unused code path elimination
//  Block '<S2>/R' : Unused code path elimination
//  Block '<S48>/CheckSignalProperties' : Unused code path elimination
//  Block '<S103>/Data Type Duplicate' : Unused code path elimination
//  Block '<S104>/Data Type Duplicate' : Unused code path elimination
//  Block '<S105>/Conversion' : Unused code path elimination
//  Block '<S105>/Data Type Duplicate' : Unused code path elimination
//  Block '<S106>/Data Type Duplicate' : Unused code path elimination
//  Block '<S63>/Data Type Duplicate' : Unused code path elimination
//  Block '<S64>/Data Type Duplicate' : Unused code path elimination
//  Block '<S65>/Data Type Duplicate' : Unused code path elimination
//  Block '<S66>/Data Type Duplicate' : Unused code path elimination
//  Block '<S68>/Data Type Duplicate' : Unused code path elimination
//  Block '<S69>/Data Type Duplicate' : Unused code path elimination
//  Block '<S70>/Data Type Duplicate' : Unused code path elimination
//  Block '<S71>/Conversion' : Unused code path elimination
//  Block '<S71>/Data Type Duplicate' : Unused code path elimination
//  Block '<S72>/Data Type Duplicate' : Unused code path elimination
//  Block '<S73>/Data Type Duplicate' : Unused code path elimination
//  Block '<S74>/Data Type Duplicate' : Unused code path elimination
//  Block '<S76>/Data Type Duplicate' : Unused code path elimination
//  Block '<S77>/Data Type Duplicate' : Unused code path elimination
//  Block '<S78>/Data Type Duplicate' : Unused code path elimination
//  Block '<S3>/G' : Unused code path elimination
//  Block '<S3>/H' : Unused code path elimination
//  Block '<S3>/N' : Unused code path elimination
//  Block '<S3>/P0' : Unused code path elimination
//  Block '<S3>/Q' : Unused code path elimination
//  Block '<S3>/R' : Unused code path elimination
//  Block '<S102>/CheckSignalProperties' : Unused code path elimination
//  Block '<S157>/Data Type Duplicate' : Unused code path elimination
//  Block '<S158>/Data Type Duplicate' : Unused code path elimination
//  Block '<S159>/Conversion' : Unused code path elimination
//  Block '<S159>/Data Type Duplicate' : Unused code path elimination
//  Block '<S160>/Data Type Duplicate' : Unused code path elimination
//  Block '<S117>/Data Type Duplicate' : Unused code path elimination
//  Block '<S118>/Data Type Duplicate' : Unused code path elimination
//  Block '<S119>/Data Type Duplicate' : Unused code path elimination
//  Block '<S120>/Data Type Duplicate' : Unused code path elimination
//  Block '<S122>/Data Type Duplicate' : Unused code path elimination
//  Block '<S123>/Data Type Duplicate' : Unused code path elimination
//  Block '<S124>/Data Type Duplicate' : Unused code path elimination
//  Block '<S125>/Conversion' : Unused code path elimination
//  Block '<S125>/Data Type Duplicate' : Unused code path elimination
//  Block '<S126>/Data Type Duplicate' : Unused code path elimination
//  Block '<S127>/Data Type Duplicate' : Unused code path elimination
//  Block '<S128>/Data Type Duplicate' : Unused code path elimination
//  Block '<S130>/Data Type Duplicate' : Unused code path elimination
//  Block '<S131>/Data Type Duplicate' : Unused code path elimination
//  Block '<S132>/Data Type Duplicate' : Unused code path elimination
//  Block '<S4>/G' : Unused code path elimination
//  Block '<S4>/H' : Unused code path elimination
//  Block '<S4>/N' : Unused code path elimination
//  Block '<S4>/P0' : Unused code path elimination
//  Block '<S4>/Q' : Unused code path elimination
//  Block '<S4>/R' : Unused code path elimination
//  Block '<S156>/CheckSignalProperties' : Unused code path elimination
//  Block '<S49>/Conversion' : Eliminate redundant data type conversion
//  Block '<S50>/Conversion' : Eliminate redundant data type conversion
//  Block '<S52>/Conversion' : Eliminate redundant data type conversion
//  Block '<S22>/Conversion' : Eliminate redundant data type conversion
//  Block '<S26>/Reshape' : Reshape block reduction
//  Block '<S2>/ReshapeX0' : Reshape block reduction
//  Block '<S2>/Reshapeu' : Reshape block reduction
//  Block '<S2>/Reshapexhat' : Reshape block reduction
//  Block '<S2>/Reshapey' : Reshape block reduction
//  Block '<S103>/Conversion' : Eliminate redundant data type conversion
//  Block '<S104>/Conversion' : Eliminate redundant data type conversion
//  Block '<S106>/Conversion' : Eliminate redundant data type conversion
//  Block '<S76>/Conversion' : Eliminate redundant data type conversion
//  Block '<S80>/Reshape' : Reshape block reduction
//  Block '<S3>/ReshapeX0' : Reshape block reduction
//  Block '<S3>/Reshapeu' : Reshape block reduction
//  Block '<S3>/Reshapexhat' : Reshape block reduction
//  Block '<S3>/Reshapey' : Reshape block reduction
//  Block '<S157>/Conversion' : Eliminate redundant data type conversion
//  Block '<S158>/Conversion' : Eliminate redundant data type conversion
//  Block '<S160>/Conversion' : Eliminate redundant data type conversion
//  Block '<S130>/Conversion' : Eliminate redundant data type conversion
//  Block '<S134>/Reshape' : Reshape block reduction
//  Block '<S4>/ReshapeX0' : Reshape block reduction
//  Block '<S4>/Reshapeu' : Reshape block reduction
//  Block '<S4>/Reshapexhat' : Reshape block reduction
//  Block '<S4>/Reshapey' : Reshape block reduction


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'Supercluster_AD'
//  '<S1>'   : 'Supercluster_AD/Discrete Derivative'
//  '<S2>'   : 'Supercluster_AD/Kalman Filter'
//  '<S3>'   : 'Supercluster_AD/Kalman Filter1'
//  '<S4>'   : 'Supercluster_AD/Kalman Filter2'
//  '<S5>'   : 'Supercluster_AD/press_to_alt'
//  '<S6>'   : 'Supercluster_AD/Kalman Filter/CalculatePL'
//  '<S7>'   : 'Supercluster_AD/Kalman Filter/CalculateYhat'
//  '<S8>'   : 'Supercluster_AD/Kalman Filter/CovarianceOutputConfigurator'
//  '<S9>'   : 'Supercluster_AD/Kalman Filter/DataTypeConversionA'
//  '<S10>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionB'
//  '<S11>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionC'
//  '<S12>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionD'
//  '<S13>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionEnable'
//  '<S14>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionG'
//  '<S15>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionH'
//  '<S16>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionN'
//  '<S17>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionP'
//  '<S18>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionP0'
//  '<S19>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionQ'
//  '<S20>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionR'
//  '<S21>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionReset'
//  '<S22>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionX'
//  '<S23>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionX0'
//  '<S24>'  : 'Supercluster_AD/Kalman Filter/DataTypeConversionu'
//  '<S25>'  : 'Supercluster_AD/Kalman Filter/MemoryP'
//  '<S26>'  : 'Supercluster_AD/Kalman Filter/Observer'
//  '<S27>'  : 'Supercluster_AD/Kalman Filter/ReducedQRN'
//  '<S28>'  : 'Supercluster_AD/Kalman Filter/Reset'
//  '<S29>'  : 'Supercluster_AD/Kalman Filter/Reshapeyhat'
//  '<S30>'  : 'Supercluster_AD/Kalman Filter/ScalarExpansionP0'
//  '<S31>'  : 'Supercluster_AD/Kalman Filter/ScalarExpansionQ'
//  '<S32>'  : 'Supercluster_AD/Kalman Filter/ScalarExpansionR'
//  '<S33>'  : 'Supercluster_AD/Kalman Filter/UseCurrentEstimator'
//  '<S34>'  : 'Supercluster_AD/Kalman Filter/checkA'
//  '<S35>'  : 'Supercluster_AD/Kalman Filter/checkB'
//  '<S36>'  : 'Supercluster_AD/Kalman Filter/checkC'
//  '<S37>'  : 'Supercluster_AD/Kalman Filter/checkD'
//  '<S38>'  : 'Supercluster_AD/Kalman Filter/checkEnable'
//  '<S39>'  : 'Supercluster_AD/Kalman Filter/checkG'
//  '<S40>'  : 'Supercluster_AD/Kalman Filter/checkH'
//  '<S41>'  : 'Supercluster_AD/Kalman Filter/checkN'
//  '<S42>'  : 'Supercluster_AD/Kalman Filter/checkP0'
//  '<S43>'  : 'Supercluster_AD/Kalman Filter/checkQ'
//  '<S44>'  : 'Supercluster_AD/Kalman Filter/checkR'
//  '<S45>'  : 'Supercluster_AD/Kalman Filter/checkReset'
//  '<S46>'  : 'Supercluster_AD/Kalman Filter/checkX0'
//  '<S47>'  : 'Supercluster_AD/Kalman Filter/checku'
//  '<S48>'  : 'Supercluster_AD/Kalman Filter/checky'
//  '<S49>'  : 'Supercluster_AD/Kalman Filter/CalculatePL/DataTypeConversionL'
//  '<S50>'  : 'Supercluster_AD/Kalman Filter/CalculatePL/DataTypeConversionM'
//  '<S51>'  : 'Supercluster_AD/Kalman Filter/CalculatePL/DataTypeConversionP'
//  '<S52>'  : 'Supercluster_AD/Kalman Filter/CalculatePL/DataTypeConversionZ'
//  '<S53>'  : 'Supercluster_AD/Kalman Filter/CalculatePL/Ground'
//  '<S54>'  : 'Supercluster_AD/Kalman Filter/CalculateYhat/Ground'
//  '<S55>'  : 'Supercluster_AD/Kalman Filter/CovarianceOutputConfigurator/decideOutput'
//  '<S56>'  : 'Supercluster_AD/Kalman Filter/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
//  '<S57>'  : 'Supercluster_AD/Kalman Filter/Observer/MeasurementUpdate'
//  '<S58>'  : 'Supercluster_AD/Kalman Filter/ReducedQRN/Ground'
//  '<S59>'  : 'Supercluster_AD/Kalman Filter/UseCurrentEstimator/Enabled Subsystem'
//  '<S60>'  : 'Supercluster_AD/Kalman Filter1/CalculatePL'
//  '<S61>'  : 'Supercluster_AD/Kalman Filter1/CalculateYhat'
//  '<S62>'  : 'Supercluster_AD/Kalman Filter1/CovarianceOutputConfigurator'
//  '<S63>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionA'
//  '<S64>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionB'
//  '<S65>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionC'
//  '<S66>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionD'
//  '<S67>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionEnable'
//  '<S68>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionG'
//  '<S69>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionH'
//  '<S70>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionN'
//  '<S71>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionP'
//  '<S72>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionP0'
//  '<S73>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionQ'
//  '<S74>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionR'
//  '<S75>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionReset'
//  '<S76>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionX'
//  '<S77>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionX0'
//  '<S78>'  : 'Supercluster_AD/Kalman Filter1/DataTypeConversionu'
//  '<S79>'  : 'Supercluster_AD/Kalman Filter1/MemoryP'
//  '<S80>'  : 'Supercluster_AD/Kalman Filter1/Observer'
//  '<S81>'  : 'Supercluster_AD/Kalman Filter1/ReducedQRN'
//  '<S82>'  : 'Supercluster_AD/Kalman Filter1/Reset'
//  '<S83>'  : 'Supercluster_AD/Kalman Filter1/Reshapeyhat'
//  '<S84>'  : 'Supercluster_AD/Kalman Filter1/ScalarExpansionP0'
//  '<S85>'  : 'Supercluster_AD/Kalman Filter1/ScalarExpansionQ'
//  '<S86>'  : 'Supercluster_AD/Kalman Filter1/ScalarExpansionR'
//  '<S87>'  : 'Supercluster_AD/Kalman Filter1/UseCurrentEstimator'
//  '<S88>'  : 'Supercluster_AD/Kalman Filter1/checkA'
//  '<S89>'  : 'Supercluster_AD/Kalman Filter1/checkB'
//  '<S90>'  : 'Supercluster_AD/Kalman Filter1/checkC'
//  '<S91>'  : 'Supercluster_AD/Kalman Filter1/checkD'
//  '<S92>'  : 'Supercluster_AD/Kalman Filter1/checkEnable'
//  '<S93>'  : 'Supercluster_AD/Kalman Filter1/checkG'
//  '<S94>'  : 'Supercluster_AD/Kalman Filter1/checkH'
//  '<S95>'  : 'Supercluster_AD/Kalman Filter1/checkN'
//  '<S96>'  : 'Supercluster_AD/Kalman Filter1/checkP0'
//  '<S97>'  : 'Supercluster_AD/Kalman Filter1/checkQ'
//  '<S98>'  : 'Supercluster_AD/Kalman Filter1/checkR'
//  '<S99>'  : 'Supercluster_AD/Kalman Filter1/checkReset'
//  '<S100>' : 'Supercluster_AD/Kalman Filter1/checkX0'
//  '<S101>' : 'Supercluster_AD/Kalman Filter1/checku'
//  '<S102>' : 'Supercluster_AD/Kalman Filter1/checky'
//  '<S103>' : 'Supercluster_AD/Kalman Filter1/CalculatePL/DataTypeConversionL'
//  '<S104>' : 'Supercluster_AD/Kalman Filter1/CalculatePL/DataTypeConversionM'
//  '<S105>' : 'Supercluster_AD/Kalman Filter1/CalculatePL/DataTypeConversionP'
//  '<S106>' : 'Supercluster_AD/Kalman Filter1/CalculatePL/DataTypeConversionZ'
//  '<S107>' : 'Supercluster_AD/Kalman Filter1/CalculatePL/Ground'
//  '<S108>' : 'Supercluster_AD/Kalman Filter1/CalculateYhat/Ground'
//  '<S109>' : 'Supercluster_AD/Kalman Filter1/CovarianceOutputConfigurator/decideOutput'
//  '<S110>' : 'Supercluster_AD/Kalman Filter1/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
//  '<S111>' : 'Supercluster_AD/Kalman Filter1/Observer/MeasurementUpdate'
//  '<S112>' : 'Supercluster_AD/Kalman Filter1/ReducedQRN/Ground'
//  '<S113>' : 'Supercluster_AD/Kalman Filter1/UseCurrentEstimator/Enabled Subsystem'
//  '<S114>' : 'Supercluster_AD/Kalman Filter2/CalculatePL'
//  '<S115>' : 'Supercluster_AD/Kalman Filter2/CalculateYhat'
//  '<S116>' : 'Supercluster_AD/Kalman Filter2/CovarianceOutputConfigurator'
//  '<S117>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionA'
//  '<S118>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionB'
//  '<S119>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionC'
//  '<S120>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionD'
//  '<S121>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionEnable'
//  '<S122>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionG'
//  '<S123>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionH'
//  '<S124>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionN'
//  '<S125>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionP'
//  '<S126>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionP0'
//  '<S127>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionQ'
//  '<S128>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionR'
//  '<S129>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionReset'
//  '<S130>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionX'
//  '<S131>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionX0'
//  '<S132>' : 'Supercluster_AD/Kalman Filter2/DataTypeConversionu'
//  '<S133>' : 'Supercluster_AD/Kalman Filter2/MemoryP'
//  '<S134>' : 'Supercluster_AD/Kalman Filter2/Observer'
//  '<S135>' : 'Supercluster_AD/Kalman Filter2/ReducedQRN'
//  '<S136>' : 'Supercluster_AD/Kalman Filter2/Reset'
//  '<S137>' : 'Supercluster_AD/Kalman Filter2/Reshapeyhat'
//  '<S138>' : 'Supercluster_AD/Kalman Filter2/ScalarExpansionP0'
//  '<S139>' : 'Supercluster_AD/Kalman Filter2/ScalarExpansionQ'
//  '<S140>' : 'Supercluster_AD/Kalman Filter2/ScalarExpansionR'
//  '<S141>' : 'Supercluster_AD/Kalman Filter2/UseCurrentEstimator'
//  '<S142>' : 'Supercluster_AD/Kalman Filter2/checkA'
//  '<S143>' : 'Supercluster_AD/Kalman Filter2/checkB'
//  '<S144>' : 'Supercluster_AD/Kalman Filter2/checkC'
//  '<S145>' : 'Supercluster_AD/Kalman Filter2/checkD'
//  '<S146>' : 'Supercluster_AD/Kalman Filter2/checkEnable'
//  '<S147>' : 'Supercluster_AD/Kalman Filter2/checkG'
//  '<S148>' : 'Supercluster_AD/Kalman Filter2/checkH'
//  '<S149>' : 'Supercluster_AD/Kalman Filter2/checkN'
//  '<S150>' : 'Supercluster_AD/Kalman Filter2/checkP0'
//  '<S151>' : 'Supercluster_AD/Kalman Filter2/checkQ'
//  '<S152>' : 'Supercluster_AD/Kalman Filter2/checkR'
//  '<S153>' : 'Supercluster_AD/Kalman Filter2/checkReset'
//  '<S154>' : 'Supercluster_AD/Kalman Filter2/checkX0'
//  '<S155>' : 'Supercluster_AD/Kalman Filter2/checku'
//  '<S156>' : 'Supercluster_AD/Kalman Filter2/checky'
//  '<S157>' : 'Supercluster_AD/Kalman Filter2/CalculatePL/DataTypeConversionL'
//  '<S158>' : 'Supercluster_AD/Kalman Filter2/CalculatePL/DataTypeConversionM'
//  '<S159>' : 'Supercluster_AD/Kalman Filter2/CalculatePL/DataTypeConversionP'
//  '<S160>' : 'Supercluster_AD/Kalman Filter2/CalculatePL/DataTypeConversionZ'
//  '<S161>' : 'Supercluster_AD/Kalman Filter2/CalculatePL/Ground'
//  '<S162>' : 'Supercluster_AD/Kalman Filter2/CalculateYhat/Ground'
//  '<S163>' : 'Supercluster_AD/Kalman Filter2/CovarianceOutputConfigurator/decideOutput'
//  '<S164>' : 'Supercluster_AD/Kalman Filter2/CovarianceOutputConfigurator/decideOutput/SqrtUsedFcn'
//  '<S165>' : 'Supercluster_AD/Kalman Filter2/Observer/MeasurementUpdate'
//  '<S166>' : 'Supercluster_AD/Kalman Filter2/ReducedQRN/Ground'
//  '<S167>' : 'Supercluster_AD/Kalman Filter2/UseCurrentEstimator/Enabled Subsystem'


//-
//  Requirements for '<Root>': Supercluster_AD

#endif                                 // RTW_HEADER_Supercluster_Math_ADC_h_

//
// File trailer for generated code.
//
// [EOF]
//
