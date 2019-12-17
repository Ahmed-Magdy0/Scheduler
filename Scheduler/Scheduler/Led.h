/*****************************************************************************************************************************
 * Module      : Led
 *
 * File Name   : Led.h
 *
 * Description : Header file for Led module.
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/

#ifndef LED_H_
#define LED_H_
#include "Dio.h"



/****************************************************************************************************************************
 *                                          Function prototypes
 ****************************************************************************************************************************/


void Led_Toggle(Dio_ChannelType Channel_Id);  /* prototype for Led_Toggle*/
void Led_Red_Toggle(void);                    /* prototype for Led_Red_Toggle*/
void Led_Blue_Toggle(void);                   /* prototype for Led_Blue_Toggle*/
void Led_Green_Toggle(void);                  /* prototype for Led_Green_Toggle*/


/*
 * Macros for LEDs'ID
 */

#define LED_RED_ID             0x00
#define LED_BLUE_ID            0x01
#define LED_GREEN_ID           0x02

#endif /* LED_H_ */
