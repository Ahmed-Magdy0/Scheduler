/*****************************************************************************************************************************
 * Module      : Dio
 *
 * File Name   : Dio_Regs.h
 *
 * Description : Header file for Dio Module Registers.
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/

#ifndef DIO_REGS_H_
#define DIO_REGS_H_


#include "Types.h"

/* Definitions of PORTA Registers*/

#define GPIO_PORTA_AHB_DATA_BITS_R                                            \
                                ((volatile uint32_t *)0x40058000)
#define GPIO_PORTA_AHB_DATA_R   (*((volatile uint32_t * )0x400583FC))

/* Definitions of PORTB Registers*/

#define GPIO_PORTB_AHB_DATA_BITS_R                                            \
                                ((volatile uint32_t *)0x40059000)
#define GPIO_PORTB_AHB_DATA_R   (*((volatile uint32_t *)0x400593FC))

/* Definitions of PORTC Registers*/

#define GPIO_PORTC_AHB_DATA_BITS_R                                            \
                                ((volatile uint32_t *)0x4005A000)
#define GPIO_PORTC_AHB_DATA_R   (*((volatile uint32_t *)0x4005A3FC))

/* Definitions of PORTD Registers*/

#define GPIO_PORTD_AHB_DATA_BITS_R                                            \
                                ((volatile uint32_t *)0x4005B000)
#define GPIO_PORTD_AHB_DATA_R   (*((volatile uint32_t *)0x4005B3FC))

/* Definitions of PORTE Registers*/

#define GPIO_PORTE_AHB_DATA_BITS_R                                            \
                                ((volatile uint32_t *)0x4005C000)
#define GPIO_PORTE_AHB_DATA_R   (*((volatile uint32_t *)0x4005C3FC))

/* Definitions of PORTF Registers*/

#define GPIO_PORTF_DATA_BITS_R                                            \
                                ((volatile uint32_t *)0x4005D000)
#define GPIO_PORTF_DATA_R       (*((volatile uint32_t *)0x400253FC))








#endif /* DIO_REGS_H_ */
