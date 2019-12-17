/******************************************************************************************************************************
 * Module      : Port
 *
 * File Name   : Port.h
 *
 * Description : Header file for Port module
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/

#ifndef PORT_H_
#define PORT_H_

#include "Types.h"
#include "General_Macros.h"
#include "Port_Cfg.h"



#define USED_CHANNELS_NUM                     (3)  /* cofiguration of num of used channels*/

/*****************************************************************************************************************************
 *
 *                                              Module Data Type
 *
 ****************************************************************************************************************************/



typedef struct
{
	uint8_t Port_Num;
}Port_ConfigChannel;

typedef struct
{
	Port_ConfigChannel Ports[USED_PORTS_NUM];

}Port_ConfigType;

/*
 * prototype for Port_Init function
 */

void Port_Init(const Port_ConfigType* ConfigPtr );

/*
 * Enabling the  post build structure to be used by external files
 */

extern const Port_ConfigType Port_Configuration;

#endif /* PORT_H_ */
