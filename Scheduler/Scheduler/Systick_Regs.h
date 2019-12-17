/*****************************************************************************************************************************
 * Module      : Systick Timer
 *
 * File Name   : Systick_Regs.c
 *
 * Description : Header file for Systick module Registers
 *
 * Created on  : Nov 23, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/


#ifndef SYSTICK_REGS_H_
#define SYSTICK_REGS_H_

//#include "stdint.h"


/* We use it to start the SysTick counter among other things. */

#define NVIC_ST_CTRL_R          (*((volatile uint32_t *)0xE000E010))

/* This is used to program the start value of SysTick down counter, the STCURRENT register
 * The STRELOAD should contain the value N – 1 for the COUNT to fire every N clock cycles
 * because the counter counts down to 0.
 */
#define NVIC_ST_RELOAD_R        (*((volatile uint32_t *)0xE000E014))

/* This registr shows the current value of the timer*/

#define NVIC_ST_CURRENT_R       (*((volatile uint32_t *)0xE000E018))


#define SYSTICK_CTL                   NVIC_ST_CTRL_R

#define SYSTICK_RELOAD                NVIC_ST_RELOAD_R

#define SYSTICK_CURRENT_VALUE         NVIC_ST_CURRENT_R

#endif /* SYSTICK_REGS_H_ */
