#ifndef GENERATED_ASN1SCC_CONTEXT_VIZKIT_RIGIDBODYSTATE_H
#define GENERATED_ASN1SCC_CONTEXT_VIZKIT_RIGIDBODYSTATE_H
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
} asn1SccContext_vizkit_rigidbodystate;

#define asn1SccContext_vizkit_rigidbodystate_REQUIRED_BYTES_FOR_ENCODING       252 
#define asn1SccContext_vizkit_rigidbodystate_REQUIRED_BITS_FOR_ENCODING        2015
#define asn1SccContext_vizkit_rigidbodystate_REQUIRED_BYTES_FOR_ACN_ENCODING   252 
#define asn1SccContext_vizkit_rigidbodystate_REQUIRED_BITS_FOR_ACN_ENCODING    2015
#define asn1SccContext_vizkit_rigidbodystate_REQUIRED_BYTES_FOR_XER_ENCODING   383

void asn1SccContext_vizkit_rigidbodystate_Initialize(asn1SccContext_vizkit_rigidbodystate* pVal);
flag asn1SccContext_vizkit_rigidbodystate_IsConstraintValid(const asn1SccContext_vizkit_rigidbodystate* val, int* pErrCode);


extern const asn1SccContext_vizkit_rigidbodystate vizkit_rigidbodystate_ctxt; 

/* ================= Encoding/Decoding function prototypes =================
 * These functions are placed at the end of the file to make sure all types
 * have been declared first, in case of parameterized ACN encodings
 * ========================================================================= */

 


#ifdef  __cplusplus
}

#endif

#endif
