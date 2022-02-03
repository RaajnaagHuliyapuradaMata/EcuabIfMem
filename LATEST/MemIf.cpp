/*****************************************************/
/* File   : MemIf.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "MemIf.h"

#include "MemIf_EcuM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_MemIf MemIf;
class_MemIf_EcuM MemIf_EcuM;
class_EcuM_Client *EcuM_Client_ptr_MemIf = &MemIf_EcuM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, MEMIF_CODE) class_MemIf_EcuM::InitFunction(void){
}

FUNC(void, MEMIF_CODE) class_MemIf::SetMode(void){
}

FUNC(void, MEMIF_CODE) class_MemIf::Read(void){
}

FUNC(void, MEMIF_CODE) class_MemIf::Write(void){
}

FUNC(void, MEMIF_CODE) class_MemIf::Cancel(void){
}

FUNC(void, MEMIF_CODE) class_MemIf::GetStatus(void){
}

FUNC(void, MEMIF_CODE) class_MemIf::GetJobResult(void){
}

FUNC(void, MEMIF_CODE) class_MemIf::GetVersionInfo(void){
}

FUNC(void, MEMIF_CODE) class_MemIf::InvalidateBlock(void){
}

FUNC(void, MEMIF_CODE) class_MemIf::EraseImmediateBlock(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

