/* This file was generated automatically: DO NOT MODIFY IT ! */

/* Declaration of the functions that have to be provided by the user */

#ifndef __USER_CODE_H_test_robot__
#define __USER_CODE_H_test_robot__

#include "C_ASN1_Types.h"

#ifdef __cplusplus
extern "C" {
#endif

void test_robot_startup();

void test_robot_PI_trigger();

extern void test_robot_RI_updateRigidBodyState(const asn1SccRigidBodyState *);

extern void test_robot_RI_updateJoints(const asn1SccJoints *);

#ifdef __cplusplus
}
#endif


#endif
