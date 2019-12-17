/*****************************************************************************************************************************
 * Module      : Systick Timer
 *
 * File Name   : Systick.h
 *
 * Description : Header file for Systick module
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/

#ifndef SYSTICK_H_
#define SYSTICK_H_

#include "Types.h"

/*Type definition used by the Timer*/

typedef  uint32_t      Time_InstanceType;



#define  SYSTICK_ENABLE                             (7)        /*Value to enable the Timer and Interrupts*/

#define  SYSTEM_CONFIGURED_CLK_SPEED_KHZ            (16000-1)  /*pre-compile configration parameter for system clk*/

#define  SYSTEM_CONFIGURED_TICK_MS                  (1000)       /*value to provide software interrups every 1000 ms*/

#define  TIME_PER_PERIOD                            (SYSTEM_CONFIGURED_CLK_SPEED_KHZ*SYSTEM_CONFIGURED_TICK_MS )


void Systick_Start(void);      /* prototype for Systick_Start*/

void Systick_GetCallBack_Func(void(*Ptr2Fun)(void));   /* prototype for Systick_GetCallBack_Func*/

#endif /* SYSTICK_H_ */
