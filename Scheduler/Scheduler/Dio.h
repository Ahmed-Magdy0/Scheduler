/*****************************************************************************************************************************
 * Module      : Dio
 *
 * File Name   : Dio.h
 *
 * Description : Header file for Systick module
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/


#ifndef DIO_H_
#define DIO_H_

#include "General_Macros.h"
#include "Types.h"
#include "Dio_Cfg.h"

/*****************************************************************************************************************************
 *
 *                                              Module Data Type
 *
 ****************************************************************************************************************************/


 /* type definition Dio_ChannelType used by the Dio APIs. */

typedef  uint8_t       Dio_ChannelType;

/* type definition Dio_PortType used by the Dio APIs. */

typedef  uint8_t       Dio_PortType;

/*These are the possible levels a DIO channel can have (input or output) */

typedef uint8_t       Dio_LevelType;

/*If the µC owns ports of different port widths (e.g. 4, 8,16...Bit)
 *  Dio_PortLevelType inherits the size of the largest port
 */
typedef uint32_t      Dio_PortLevelType;


typedef struct
{
	uint8_t Port_Num;

	uint8_t Ch_Num;
}Dio_ConfigChannel;

/* This structure contains all post-build configurable parameters of the DIO driver.
 *  A pointer to this structure is passed to the DIO driver initialization function
 *  for configuration*/

typedef struct
{
	Dio_ConfigChannel Channels[DIO_USED_CHANNELS_NUM];

}Dio_ConfigType;

/****************************************************************************************************************************
 *                                                  Function Prototypes
 *
 ****************************************************************************************************************************/

/*Initializes the module. */

void Dio_Init(const Dio_ConfigType* ConfigPtr );

/* Service for flipping the channel*/

Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId);





#endif /* DIO_H_ */
