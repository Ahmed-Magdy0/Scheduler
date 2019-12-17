/******************************************************************************************************************************
 * Module      : Application
 *
 * File Name   : App.c
 *
 * Description : Source file for Application tasks
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/

#include "Port.h"
#include "App.h"
#include "Led.h"
#include "Dio_PBcfg.h"

/****************************************************************************************************************************
 * Survice Name  : Task_Init
 * Description   : Used to intialize  port and Dio module.
 * Pre-condition : Post-Build Structures has been set correctly
 * Post-condition: Port and Dio modules are intialized and ready to be used.
 ****************************************************************************************************************************/

void Task_Init(void)
{

	Port_Init(&Port_Configuration);  /*Function to set direction and intialize the port with intial value.*/
	Dio_Init(&Dio_Configuration);   /*Function to Prepare ports to read and Write...etc.*/

}
/*****************************************************************************************************************************/

/*****************************************************************************************************************************
 *                              Container(Post-Build) to configure required tasks with its period
 *
 ***************************************************************************************************************************/


Tasks_t Tasks[]={

		{
				.code   = Led_Red_Toggle, /* Pointer to Function call to Toggle Red Led with periodisity 2*/
				.period = 2
		},
		{
				.code   = Led_Blue_Toggle, /* Pointer to Function call to Toggle Blue Led with periodisity 3*/
	            .period = 3
		},
		{
				.code   = Led_Green_Toggle, /* Pointer to Function call to Toggle Green Led with periodisity 5*/
			    .period = 5
		}

};

/*
 * Globale variable which has the number of tasks.
 *
 */

const uint8_t Num_Of_Tasks=(sizeof(Tasks)/sizeof(Tasks_t));


