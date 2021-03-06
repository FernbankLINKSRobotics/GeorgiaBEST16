#ifndef __c7_vexarmcortexlib_h__
#define __c7_vexarmcortexlib_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc7_vexarmcortexlibInstanceStruct
#define typedef_SFc7_vexarmcortexlibInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  real_T c7_output0;
  uint8_T c7_doSetSimStateSideEffects;
  const mxArray *c7_setSimStateSideEffectsInfo;
  int32_T *c7_sfEvent;
  uint8_T *c7_is_active_c7_vexarmcortexlib;
  uint8_T *c7_is_c7_vexarmcortexlib;
  real_T *c7_trigger;
  real_T *c7_output;
} SFc7_vexarmcortexlibInstanceStruct;

#endif                                 /*typedef_SFc7_vexarmcortexlibInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c7_vexarmcortexlib_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c7_vexarmcortexlib_get_check_sum(mxArray *plhs[]);
extern void c7_vexarmcortexlib_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
