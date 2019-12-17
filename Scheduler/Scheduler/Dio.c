/******************************************************************************************************************************
 * Module      : Dio
 *
 * File Name   : Dio.c
 *
 * Description : Source file for Dio module
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/


#include "Dio.h"
#include "Dio_Regs.h"


/*
 *Global pointer to be used by all functins in this file only.
 */

static Dio_ConfigChannel* Dio_Config = NULL_PTR;
/****************************************************************************************************************************
*Service Name: Dio_Init
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Initialize the Dio module.
****************************************************************************************************************************/

void Dio_Init(const Dio_ConfigType* Config_Ptr)
{

	Dio_Config = Config_Ptr->Channels;  /* Assigning post-build structure channel to Dio_config*/

}

/***************************************************************************************************************************
 * Service Name: Dio_FlipChannel
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): ChannelId - ID of DIO channel.
* Parameters (inout): None
* Parameters (out): None
* Return value: Dio_LevelType
* Description: Function to flip the level of a channel and return the level of the channel after flip.
****************************************************************************************************************************/


Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId)
{
   volatile	Dio_PortLevelType * Port_Ptr = NULL_PTR;  /*Pointer that points to data register of the required port*/

   /*
    * Assigning the address of required port to the pointer
    */
	switch (Dio_Config[ChannelId].Port_Num)
	{

	case 0:
		    Port_Ptr =&GPIO_PORTA_AHB_DATA_R;  /* Assigning the addres of data register of portA*/
	break;

	case 1:
			Port_Ptr = &GPIO_PORTB_AHB_DATA_R; /* Assigning the addres of data register of portB*/
		break;

	case 2:
			Port_Ptr = &GPIO_PORTC_AHB_DATA_R;/* Assigning the addres of data register of portC*/
		break;

	case 3:
			Port_Ptr = &GPIO_PORTD_AHB_DATA_R;/* Assigning the addres of data register of portD*/
		break;

	case 4:
			Port_Ptr = &GPIO_PORTE_AHB_DATA_R; /* Assigning the addres of data register of portE*/
		break;

	case 5:
			Port_Ptr = &GPIO_PORTF_DATA_R;    /* Assigning the addres of data register of portF*/
		break;
	default:   /* Doing nothing */

	}

	if(BIT_IS_SET(*Port_Ptr,Dio_Config[ChannelId].Ch_Num))  /* checking if the bit is logic high*/
	{
		CLEAR_BIT(*Port_Ptr,Dio_Config[ChannelId].Ch_Num);  /*Assign logic low to the bit*/

		return STD_LOW;   /* return the current state of the bit*/
	}
	else
	{

		SET_BIT(*Port_Ptr,Dio_Config[ChannelId].Ch_Num);    /*Assign logic high to the bit*/

		return STD_HIGH;   /* return the current state of the bit*/
	}
}
