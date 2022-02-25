#pragma once
/*****************************************************/
/* File   : MemIf_EcuM.h                             */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_MemIf.h"

#include "EcuM_Client.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class interface_MemIf_EcuM : public interface_EcuM_Client{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      virtual FUNC(void, MEMIF_CODE) InitFunction   (void) = 0;
      virtual FUNC(void, MEMIF_CODE) DeInitFunction (void) = 0;
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern interface_MemIf_EcuM *EcuM_Client_ptr_MemIf;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

