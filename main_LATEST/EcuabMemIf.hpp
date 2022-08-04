#pragma once
/******************************************************************************/
/* File   : EcuabMemIf.hpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstEcuabMemIf.hpp"
#include "CfgEcuabMemIf.hpp"
#include "EcuabMemIf_core.hpp"
#include "infEcuabMemIf_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_EcuabMemIf:
      INTERFACES_EXPORTED_MEMIF
   ,  public abstract_module
   ,  public class_EcuabMemIf_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstEcuabMemIf_Type* lptrConst = (ConstEcuabMemIf_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, MEMIF_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MEMIF_CONST,       MEMIF_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MEMIF_CONFIG_DATA, MEMIF_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MEMIF_CODE) DeInitFunction (void);
      FUNC(void, MEMIF_CODE) MainFunction   (void);
      MEMIF_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_EcuabMemIf, MEMIF_VAR) EcuabMemIf;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

