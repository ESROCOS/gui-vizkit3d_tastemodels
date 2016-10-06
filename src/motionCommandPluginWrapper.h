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
 * C interface wrapper for a MotionCommandVisualization plugin 
 * (header).
 * ---------------------------------------------------------------------
 * HISTORY
 * $History$
 * ================================================================== */
#ifndef MOTIONCOMMANDPLUGINWRAPPER_H
#define MOTIONCOMMANDPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "asn1-wrappers/asn1SccTypes.h"

// Update function: returns VIZTASTE_XXX
int MotionCommandVisualization_updateMotionCommand(const char* pluginName, const asn1SccMotion2D* command);
int MotionCommandVisualization_updatePose(const char* pluginName, const asn1SccPose* pose);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //MOTIONCOMMANDPLUGINWRAPPER_H