/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Context-vizkit-depthmap.h"

#if !defined(_MSC_VER) || _MSC_VER >= 1800
void asn1SccContext_vizkit_depthmap_Initialize(asn1SccContext_vizkit_depthmap* pVal)
{
    *pVal = (asn1SccContext_vizkit_depthmap) {
    .configfile = "",
    .id = " "
};
}
#endif

 
flag asn1SccContext_vizkit_depthmap_IsConstraintValid(const asn1SccContext_vizkit_depthmap* pVal, int* pErrCode)
{
    
    flag ret = TRUE;
	*pErrCode=0;

	(void)pVal;

	ret = asn1SccVizkitFilePath_IsConstraintValid(pVal->configfile, pErrCode);
	if (ret) {
	    ret = asn1SccVizkitPluginLabel_IsConstraintValid(pVal->id, pErrCode);
	
	}

	return ret;
}

const asn1SccContext_vizkit_depthmap vizkit_depthmap_ctxt = {
    .configfile = "config-range.yml",
    .id = "Map"
};
