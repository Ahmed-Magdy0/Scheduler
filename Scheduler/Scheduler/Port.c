/******************************************************************************************************************************
 * Module      : Port
 *
 * File Name   : Port.c
 *
 * Description : Source file for Port module
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/

#include "Port.h"
//#include "Port_Regs.h"
#include"tm4c123gh6pm.h"

/*
 *Global pointer to be used by all functins in this file only.
 */



static Port_ConfigChannel* Port_Config = NULL_PTR;

/****************************************************************************************************************************
*Service Name: Port_Init
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Parameters (in): ConfigPtr - Pointer to post-build configuration data
* Parameters (inout): None
* Parameters (out): None
* Return value: None
* Description: Function to Initialize the Port module.
****************************************************************************************************************************/

void Port_Init(const Port_ConfigType* ConfigPtr )
{
	uint8_t Port_Index, Channel_Index;

	volatile uint32_t* PortDir_Ptr = NULL_PTR;
	volatile uint32_t* PortDen_Ptr = NULL_PTR;
	volatile uint32_t* PortData_Ptr = NULL_PTR;


		Port_Config = ConfigPtr->Ports;    /* Assigning post-build structure channel to Dio_config*/

/*
 * Setting the direction of the port as output
 * Enabling Degital mode
 * Intializing the pins with logic low
 */

	for(Port_Index=0; Port_Index < USED_PORTS_NUM; ++Port_Index)
	{
		for(Channel_Index=0; Channel_Index<PORT_CONFIGURED_CHANNEL_NUM; ++Channel_Index)
		{
		switch(Port_Config[Port_Index].Port_Num)
		{

			case 0:
				    PortDir_Ptr = &GPIO_PORTA_AHB_DIR_R;   /* Assigning the addres of direction register of portA*/
				    PortDen_Ptr = &GPIO_PORTA_AHB_DIR_R;   /* Assigning the addres of digital enable register of portA*/
				    PortData_Ptr =&GPIO_PORTA_DATA_R;      /* Assigning the addres of data register of portA*/
			break;

			case 1:
			    PortDir_Ptr = &GPIO_PORTB_AHB_DIR_R;      /* Assigning the addres of direction register of portB*/
			    PortDen_Ptr = &GPIO_PORTB_AHB_DIR_R;      /* Assigning the addres of digital enable register of portB*/
			    PortData_Ptr =&GPIO_PORTB_DATA_R;         /* Assigning the addres of data register of portB*/
			break;

			case 2:
			    PortDir_Ptr = &GPIO_PORTC_AHB_DIR_R;     /* Assigning the addres of direction register of portC*/
			    PortDen_Ptr = &GPIO_PORTC_AHB_DIR_R;     /* Assigning the addres of digital enable register of portC*/
			    PortData_Ptr =&GPIO_PORTC_DATA_R;        /* Assigning the addres of data register of portC*/
			break;

			case 3:
			    PortDir_Ptr = &GPIO_PORTD_AHB_DIR_R;   /* Assigning the addres of direction register of portD*/
			    PortDen_Ptr = &GPIO_PORTD_AHB_DIR_R;   /* Assigning the addres of digital enable register of portD*/
			    PortData_Ptr =&GPIO_PORTD_DATA_R;      /* Assigning the addres of data register of portD*/
			break;

			case 4:
			    PortDir_Ptr = &GPIO_PORTE_AHB_DIR_R;  /* Assigning the addres of direction register of portE*/
			    PortDen_Ptr = &GPIO_PORTE_AHB_DIR_R;  /* Assigning the addres of digital enable register of portE*/
			    PortData_Ptr =&GPIO_PORTE_DATA_R;     /* Assigning the addres of data register of portE*/
			break;

			case 5:
			    PortDir_Ptr = &GPIO_PORTF_DIR_R;     /* Assigning the addres of direction register of portF*/
			    PortDen_Ptr = &GPIO_PORTF_DEN_R;     /* Assigning the addres of digital enable register of portE*/
			    PortData_Ptr =&GPIO_PORTF_DATA_R;    /* Assigning the addres of data register of portE*/
			break;
			//default:
			}
		SET_BIT(SYSCTL_RCGCGPIO_R,Port_Config[Port_Index].Port_Num);  /*Provide the clk to the configured ports*/
		SET_BIT(*PortDir_Ptr,Channel_Index);  /* setting the direction of the configured pin*/
		SET_BIT(*PortDen_Ptr,Channel_Index);  /* Enabling digital mode to the configured pin*/
		CLEAR_BIT(*PortData_Ptr,Channel_Index); /*Intializing the configured pin with logic low*/

		}
	}

}



