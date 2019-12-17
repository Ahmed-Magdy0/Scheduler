/*****************************************************************************************************************************
 * Module      : Systick Timer
 *
 * File Name   : Systick.c
 *
 * Description : Source file for Systick module
 *
 * Created on  : Nov 23, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/

#include "Systick.h"
#include "Systick_Regs.h"



/*
 * Global pointer to function used to point to upper layer modules function
 */

static volatile void(*Global_Systick_Call_Back)(void) = NULL_PTR;

/****************************************************************************************************************************
 *
* Service Name:       Systick_Init
* Sync/Async:         Synchronous
* Reentrancy:         Non reentrant
* Parameters (in):    None
* Parameters (inout): None
* Parameters (out):   None
* Return value:       None
* Description:        Function to Initialize the Systick module.
*
* preconditions:      1-target is connected properly to the device.
*                     2-TIME_PER_PERIOD is initialized with desired value.
*
* postconditions:     Systick timer is enabled and have started with the desired value.
*
 ****************************************************************************************************************************/



void Systick_Start(void)
{

	SYSTICK_CTL    = STD_LOW;      /*Disableing the timer before configuration to aviod nondetrministic bahavior*/

	SYSTICK_RELOAD = TIME_PER_PERIOD;  /*Set the timer with desired Tick value*/

	SYSTICK_CTL    = SYSTICK_ENABLE;   /*Enabling the timer and setting interrubt mode*/

}

/*Assigning the upper layered function to the global pointer to function*/
void Systick_GetCallBack_Func(void(*Ptr2Fun)(void))
{
	Global_Systick_Call_Back = Ptr2Fun;

}

void Systick_Handler(void)
{
	(*Global_Systick_Call_Back)();  /* calling the function of the scheduler from lower layer using call-back concept*/

}

