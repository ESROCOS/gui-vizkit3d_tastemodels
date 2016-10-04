/* =====================================================================
 * FILE:  $URL$
 * =====================================================================
 * PROJECT:             :  SARGON
 * VERSION              :  $Revision$
 * LANGUAGE             :  C++
 * AUTHOR               :  $LastChangedBy$ 
 * COPYRIGHT            :  AVOS - GMV,S.A.
 * COMPILER             :  GCC-4.9.2, C++11
 * CREATED              :  $CreationDate$
 * CLASS                :  -
 * LAST MODIFIED        :  $LastChangedDate$
 * GENERATED FROM MODEL :  -
 * ORIGINAL MODEL AUTHOR:  -
 * ---------------------------------------------------------------------
 * C interface wrapper for a DepthMapVisualization plugin 
 * (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#ifndef DEPTHMAPPLUGINWRAPPER_H
#define DEPTHMAPPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "asn1-wrappers/asn1SccTypes.h"

// Update function: returns VIZTASTE_XXX
int DepthMapVisualization_updateDepthMap(const char* pluginName, const asn1SccDepthMap* map);
int DepthMapVisualization_updatePose(const char* pluginName, const asn1SccRigidBodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //DEPTHMAPPLUGINWRAPPER_H
