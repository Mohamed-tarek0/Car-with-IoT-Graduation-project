/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  intCtr.h
 *       Module:  -
 *
 *  Description:  Control the interrupts    
 *  
 *********************************************************************************************************************/
#ifndef intCtr_h
#define intCtr_h

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_types.h"
#include "intCtr_Types.h"
#include "Mc_Hw_Reg.h"
#include "IntCtr_Lcfg.h"
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void intCtr_init(void);
void IntDisable(IntCtrNum_t);
void IntEnable(IntCtrNum_t);
void intSetGroup_SubGroub(IntCtrNum_t,u8,u8);///

#endif  /* intCtr_h */

/**********************************************************************************************************************
 *  END OF FILE: intCtr.h
 *********************************************************************************************************************/