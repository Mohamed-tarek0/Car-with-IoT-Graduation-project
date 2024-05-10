/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  UART.h
 *       Module:  -
 *
 *  Description:  <Write File DESCRIPTION here>
 *
 *********************************************************************************************************************/
#ifndef UART_H
#define UART_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Mc_Hw_Reg.h"
#include "UART_cfg.h"
#include "intCtr.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void UART_Init(void);
void UART_SendChr(UART_Num_t UART_Number, u8 data);
u8 UART_ReceiveChr(UART_Num_t UART_Number);
void UART_SendStr(UART_Num_t UART_Number, u8 *str);
void UART_SetNotification(UART_Num_t UART_Number, void (*UART_Notfi)(void));
u8 UART_readBuffer(UART_Num_t UART_Number);
void UART_readStr(UART_Num_t UART_Number, u8 *str);
void UART_SendNum(UART_Num_t UART_Number, u32 num);
static void dummy_func(void);
#endif  /* UART_H */

/**********************************************************************************************************************
 *  END OF FILE: UART.h
 *********************************************************************************************************************/
