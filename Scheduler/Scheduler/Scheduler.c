 /******************************************************************************************************************************
 * Module      : Scheduler
 *
 * File Name   : Scheduler.c
 *
 * Description : Source file for Scheduler algorithm
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/

#include "Scheduler.h"
#include "App.h"
#include "Systick.h"
#include "Led.h"

static uint32_t GCD(uint32_t x,uint32_t y); /*prototype for GCD which used by this file only*/
static uint32_t LCM(uint32_t x, uint32_t y);/*prototype for LCM which used by this file only*/
static uint32_t Get_HyperPeriod(void);/*prototype for Get_HyperPeriod which used by this file only*/


/*
 * Global varible to store Hyper period
 */

static volatile uint32_t Hyper_period = 0;

/*
 * Global varible to increment with every timer tick
 */

static uint32_t  Global_Time_Tick_Count = 0;

/*
 * Function that start all tasks
 */


void Scheduler_Start(void)
{

	asm(" CPSIE I");  /*Enabling global intrrupt*/


	Systick_GetCallBack_Func(Scheduler_NewTimerTick);  /*Passing function to lowered layer pointer to be called every Timer tick*/

	Task_Init(); /*calling Task_init*/
	Hyper_period = Get_HyperPeriod();
	Systick_Start();  /*start the timer*/
	Scheduler();     /*Start the scheduler*/
}

void Scheduler_NewTimerTick(void)
{

	Global_Time_Tick_Count++;   /*Incrementing the counter every timer tick*/
}


/*
 * Scheduler Algorithm
 *
 */

void Scheduler(void)
{
while(1)
{
	uint8_t Itr  = STD_LOW;

	while(Itr < Num_Of_Tasks)
	     {

			 if((STD_LOW == Global_Time_Tick_Count % Tasks[Itr].period) )
			 {
			      Tasks[Itr].code(); /* calling task */
			 }
			 Itr++;
	     }
	if(Global_Time_Tick_Count == Hyper_period ){
		Global_Time_Tick_Count = 0;
	}
}
}

/*
 *
 * Function to get greatest common divisor
 *
 */

static uint32_t GCD(uint32_t x,uint32_t y)
{
	while(x != y){

		if(x > y){

			x -= y;
		}
		else{
		y -= x;
	}
	}
return x;
}

/*
 * Function to get lowest common multiple
 *
 */
static uint32_t LCM(uint32_t x, uint32_t y)
{
	uint8_t M = 0;

	M =	GCD(x,y);      /* getting greatest common divisor*/
	return ((x*y)/M);

}
/*
 * Function to calculate the hyper period of the tasks
 */

static uint32_t Get_HyperPeriod(void)
{

	uint8_t i = 1;
	uint32_t Hyper = Tasks[0].period;   /* the period of the first task*/
	do{                   /*using do to ensure that the function will be excuted in the case of two tasks only*/

		Hyper =	LCM(Hyper,Tasks[i].period);
	   i++;

	}while(i < Num_Of_Tasks);
return Hyper;  /*return hyper period*/
}
