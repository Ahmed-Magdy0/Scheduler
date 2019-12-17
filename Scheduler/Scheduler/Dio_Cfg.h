/*****************************************************************************************************************************
 * Module      : Dio
 *
 * File Name   : Dio_Cfg.h
 *
 * Description : Pre-compile configuration for Dio Module
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/

#ifndef DIO_CFG_H_
#define DIO_CFG_H_

/* Number of the used channels.*/

#define     DIO_USED_CHANNELS_NUM                              (3)

/* Channel index in the array of structure in the post build configuration.*/

#define     RED_LED_INDEX                                      (0x00)
#define     BLUE_LED_INDEX                                     (0x01)
#define     GREEN_LED_INDEX                                    (0x02)


#define    RED_LED_PORT_NUM                                    (5) /* PORTF*/
#define    BLUE_LED_PORT_NUM                                   (5) /* PORTF*/
#define    GREEN_LED_PORT_NUM                                  (5) /* PORTF*/

/*
 * Macros to be used in post-Build structure
 */

#define    RED_LED_CHANNEL_NUM                                 (1) /*Pin 1 in PORTF*/
#define    BLUE_LED_CHANNEL_NUM                                (2) /*Pin 2 in PORTF*/
#define    GREEN_LED_CHANNEL_NUM                               (3) /*Pin 3 in PORTF*/


#endif /* DIO_CFG_H_ */
