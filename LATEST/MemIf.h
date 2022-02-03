#pragma once
/*****************************************************/
/* File   : MemIf.h                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_MemIf.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_MemIf{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, MEMIF_CODE) SetMode             (void);
      FUNC(void, MEMIF_CODE) Read                (void);
      FUNC(void, MEMIF_CODE) Write               (void);
      FUNC(void, MEMIF_CODE) Cancel              (void);
      FUNC(void, MEMIF_CODE) GetStatus           (void);
      FUNC(void, MEMIF_CODE) GetJobResult        (void);
      FUNC(void, MEMIF_CODE) GetVersionInfo      (void);
      FUNC(void, MEMIF_CODE) InvalidateBlock     (void);
      FUNC(void, MEMIF_CODE) EraseImmediateBlock (void);
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
extern class_MemIf MemIf;

/*****************************************************/
/* EOF                                               */
/*****************************************************/
