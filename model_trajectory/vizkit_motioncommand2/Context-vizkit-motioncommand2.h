#ifndef GENERATED_ASN1SCC_CONTEXT_VIZKIT_MOTIONCOMMAND2_H
#define GENERATED_ASN1SCC_CONTEXT_VIZKIT_MOTIONCOMMAND2_H
/*
Code automatically generated by asn1scc tool
*/
#include "dataview-uniq.h"
#include "asn1crt.h"

#ifdef  __cplusplus
extern "C" {
#endif



typedef struct {
    asn1SccVizkitFilePath configfile;
    asn1SccVizkitPluginLabel id;
} asn1SccContext_vizkit_motioncommand2;

#define asn1SccContext_vizkit_motioncommand2_REQUIRED_BYTES_FOR_ENCODING       252 
#define asn1SccContext_vizkit_motioncommand2_REQUIRED_BITS_FOR_ENCODING        2015
#define asn1SccContext_vizkit_motioncommand2_REQUIRED_BYTES_FOR_ACN_ENCODING   252 
#define asn1SccContext_vizkit_motioncommand2_REQUIRED_BITS_FOR_ACN_ENCODING    2015
#define asn1SccContext_vizkit_motioncommand2_REQUIRED_BYTES_FOR_XER_ENCODING   383

void asn1SccContext_vizkit_motioncommand2_Initialize(asn1SccContext_vizkit_motioncommand2* pVal);
flag asn1SccContext_vizkit_motioncommand2_IsConstraintValid(const asn1SccContext_vizkit_motioncommand2* val, int* pErrCode);


extern const asn1SccContext_vizkit_motioncommand2 vizkit_motioncommand2_ctxt; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif