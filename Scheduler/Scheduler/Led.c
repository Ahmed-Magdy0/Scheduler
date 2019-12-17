/*****************************************************************************************************************************
 * Module      : Led
 *
 * File Name   : Led.c
 *
 * Description : Source file for Led module.
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/
#include "Led.h"




/***************************************************************************************************************************
 *Function Name  : Led_Toggle
 *Description    : Change the current state of led.
 *Pre-condition  : Dio Module has been intialized correctly.
 *Post-condition : the required led state has been changed
 ***************************************************************************************************************************/

void Led_Toggle(Dio_ChannelType Channel_Id)
{

	Dio_LevelType Status = Dio_FlipChannel(Channel_Id);  /* Calling Flip function in Dio Module to flip the status of led.*/

}

/*
 * Function to Toggle the red led
 */
void Led_Red_Toggle(void)
{
	Led_Toggle(LED_RED_ID);
}

/*
 * Function to Toggle the blue led
 */

void Led_Blue_Toggle(void)
{
	Led_Toggle(LED_BLUE_ID);
}

/*
 * Function to Toggle the green led
 */

void Led_Green_Toggle(void)
{
	Led_Toggle(LED_GREEN_ID);
}

