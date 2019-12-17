/*****************************************************************************************************************************
 * Module      : Dio
 *
 * File Name   : Dio_PBCfg.c
 *
 * Description : Post-Build configuration for Dio Module source file
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/

#include "Dio_PBcfg.h"


/* Post-Build structure used by Dio_Init Survice */

const Dio_ConfigType Dio_Configuration = {

		RED_LED_PORT_NUM,RED_LED_CHANNEL_NUM,
		BLUE_LED_PORT_NUM,BLUE_LED_CHANNEL_NUM,
		GREEN_LED_PORT_NUM,GREEN_LED_CHANNEL_NUM
};








