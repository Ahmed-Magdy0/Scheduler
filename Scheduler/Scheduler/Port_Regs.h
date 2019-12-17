/*****************************************************************************************************************************
 * Module      : Port
 *
 * File Name   : Port_Regs.h
 *
 * Description : Header file for Port Module Registers.
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/

#ifndef PORT_REGS_H_
#define PORT_REGS_H_

#include "Types.h"
/* Definition of Dio PORTS CLK Enable */

#define SYSCTL_RCGCGPIO_R       (*((volatile uint32_t *)0x400FE608))



/* Definitions of PORTA Registers*/

#define GPIO_PORTA_AHB_DATA_BITS_R                                            \
                                ((volatile uint32_t *)0x40058000)
#define GPIO_PORTA_AHB_DATA_R   (*((volatile uint32_t *)0x400583FC))
#define GPIO_PORTA_AHB_DIR_R    (*((volatile uint32_t *)0x40058400))
#define GPIO_PORTA_AHB_IS_R     (*((volatile uint32_t *)0x40058404))
#define GPIO_PORTA_AHB_IBE_R    (*((volatile uint32_t *)0x40058408))
#define GPIO_PORTA_AHB_IEV_R    (*((volatile uint32_t *)0x4005840C))
#define GPIO_PORTA_AHB_IM_R     (*((volatile uint32_t *)0x40058410))
#define GPIO_PORTA_AHB_RIS_R    (*((volatile uint32_t *)0x40058414))
#define GPIO_PORTA_AHB_MIS_R    (*((volatile uint32_t *)0x40058418))
#define GPIO_PORTA_AHB_ICR_R    (*((volatile uint32_t *)0x4005841C))
#define GPIO_PORTA_AHB_AFSEL_R  (*((volatile uint32_t *)0x40058420))
#define GPIO_PORTA_AHB_DR2R_R   (*((volatile uint32_t *)0x40058500))
#define GPIO_PORTA_AHB_DR4R_R   (*((volatile uint32_t *)0x40058504))
#define GPIO_PORTA_AHB_DR8R_R   (*((volatile uint32_t *)0x40058508))
#define GPIO_PORTA_AHB_ODR_R    (*((volatile uint32_t *)0x4005850C))
#define GPIO_PORTA_AHB_PUR_R    (*((volatile uint32_t *)0x40058510))
#define GPIO_PORTA_AHB_PDR_R    (*((volatile uint32_t *)0x40058514))
#define GPIO_PORTA_AHB_SLR_R    (*((volatile uint32_t *)0x40058518))
#define GPIO_PORTA_AHB_DEN_R    (*((volatile uint32_t *)0x4005851C))
#define GPIO_PORTA_AHB_LOCK_R   (*((volatile uint32_t *)0x40058520))
#define GPIO_PORTA_AHB_CR_R     (*((volatile uint32_t *)0x40058524))
#define GPIO_PORTA_AHB_AMSEL_R  (*((volatile uint32_t *)0x40058528))
#define GPIO_PORTA_AHB_PCTL_R   (*((volatile uint32_t *)0x4005852C))
#define GPIO_PORTA_AHB_ADCCTL_R (*((volatile uint32_t *)0x40058530))
#define GPIO_PORTA_AHB_DMACTL_R (*((volatile uint32_t *)0x40058534))

/* Definitions of PORTB Registers*/

#define GPIO_PORTB_AHB_DATA_BITS_R                                            \
                                ((volatile uint32_t *)0x40059000)
#define GPIO_PORTB_AHB_DATA_R   (*((volatile uint32_t *)0x400593FC))
#define GPIO_PORTB_AHB_DIR_R    (*((volatile uint32_t *)0x40059400))
#define GPIO_PORTB_AHB_IS_R     (*((volatile uint32_t *)0x40059404))
#define GPIO_PORTB_AHB_IBE_R    (*((volatile uint32_t *)0x40059408))
#define GPIO_PORTB_AHB_IEV_R    (*((volatile uint32_t *)0x4005940C))
#define GPIO_PORTB_AHB_IM_R     (*((volatile uint32_t *)0x40059410))
#define GPIO_PORTB_AHB_RIS_R    (*((volatile uint32_t *)0x40059414))
#define GPIO_PORTB_AHB_MIS_R    (*((volatile uint32_t *)0x40059418))
#define GPIO_PORTB_AHB_ICR_R    (*((volatile uint32_t *)0x4005941C))
#define GPIO_PORTB_AHB_AFSEL_R  (*((volatile uint32_t *)0x40059420))
#define GPIO_PORTB_AHB_DR2R_R   (*((volatile uint32_t *)0x40059500))
#define GPIO_PORTB_AHB_DR4R_R   (*((volatile uint32_t *)0x40059504))
#define GPIO_PORTB_AHB_DR8R_R   (*((volatile uint32_t *)0x40059508))
#define GPIO_PORTB_AHB_ODR_R    (*((volatile uint32_t *)0x4005950C))
#define GPIO_PORTB_AHB_PUR_R    (*((volatile uint32_t *)0x40059510))
#define GPIO_PORTB_AHB_PDR_R    (*((volatile uint32_t *)0x40059514))
#define GPIO_PORTB_AHB_SLR_R    (*((volatile uint32_t *)0x40059518))
#define GPIO_PORTB_AHB_DEN_R    (*((volatile uint32_t *)0x4005951C))
#define GPIO_PORTB_AHB_LOCK_R   (*((volatile uint32_t *)0x40059520))
#define GPIO_PORTB_AHB_CR_R     (*((volatile uint32_t *)0x40059524))
#define GPIO_PORTB_AHB_AMSEL_R  (*((volatile uint32_t *)0x40059528))
#define GPIO_PORTB_AHB_PCTL_R   (*((volatile uint32_t *)0x4005952C))
#define GPIO_PORTB_AHB_ADCCTL_R (*((volatile uint32_t *)0x40059530))
#define GPIO_PORTB_AHB_DMACTL_R (*((volatile uint32_t *)0x40059534))


/* Definitions of PORTC Registers*/

#define GPIO_PORTC_AHB_DATA_BITS_R                                            \
                                ((volatile uint32_t *)0x4005A000)
#define GPIO_PORTC_AHB_DATA_R   (*((volatile uint32_t *)0x4005A3FC))
#define GPIO_PORTC_AHB_DIR_R    (*((volatile uint32_t *)0x4005A400))
#define GPIO_PORTC_AHB_IS_R     (*((volatile uint32_t *)0x4005A404))
#define GPIO_PORTC_AHB_IBE_R    (*((volatile uint32_t *)0x4005A408))
#define GPIO_PORTC_AHB_IEV_R    (*((volatile uint32_t *)0x4005A40C))
#define GPIO_PORTC_AHB_IM_R     (*((volatile uint32_t *)0x4005A410))
#define GPIO_PORTC_AHB_RIS_R    (*((volatile uint32_t *)0x4005A414))
#define GPIO_PORTC_AHB_MIS_R    (*((volatile uint32_t *)0x4005A418))
#define GPIO_PORTC_AHB_ICR_R    (*((volatile uint32_t *)0x4005A41C))
#define GPIO_PORTC_AHB_AFSEL_R  (*((volatile uint32_t *)0x4005A420))
#define GPIO_PORTC_AHB_DR2R_R   (*((volatile uint32_t *)0x4005A500))
#define GPIO_PORTC_AHB_DR4R_R   (*((volatile uint32_t *)0x4005A504))
#define GPIO_PORTC_AHB_DR8R_R   (*((volatile uint32_t *)0x4005A508))
#define GPIO_PORTC_AHB_ODR_R    (*((volatile uint32_t *)0x4005A50C))
#define GPIO_PORTC_AHB_PUR_R    (*((volatile uint32_t *)0x4005A510))
#define GPIO_PORTC_AHB_PDR_R    (*((volatile uint32_t *)0x4005A514))
#define GPIO_PORTC_AHB_SLR_R    (*((volatile uint32_t *)0x4005A518))
#define GPIO_PORTC_AHB_DEN_R    (*((volatile uint32_t *)0x4005A51C))
#define GPIO_PORTC_AHB_LOCK_R   (*((volatile uint32_t *)0x4005A520))
#define GPIO_PORTC_AHB_CR_R     (*((volatile uint32_t *)0x4005A524))
#define GPIO_PORTC_AHB_AMSEL_R  (*((volatile uint32_t *)0x4005A528))
#define GPIO_PORTC_AHB_PCTL_R   (*((volatile uint32_t *)0x4005A52C))
#define GPIO_PORTC_AHB_ADCCTL_R (*((volatile uint32_t *)0x4005A530))
#define GPIO_PORTC_AHB_DMACTL_R (*((volatile uint32_t *)0x4005A534))

/* Definitions of PORTD Registers*/

#define GPIO_PORTD_AHB_DATA_BITS_R                                            \
                                ((volatile uint32_t *)0x4005B000)
#define GPIO_PORTD_AHB_DATA_R   (*((volatile uint32_t *)0x4005B3FC))
#define GPIO_PORTD_AHB_DIR_R    (*((volatile uint32_t *)0x4005B400))
#define GPIO_PORTD_AHB_IS_R     (*((volatile uint32_t *)0x4005B404))
#define GPIO_PORTD_AHB_IBE_R    (*((volatile uint32_t *)0x4005B408))
#define GPIO_PORTD_AHB_IEV_R    (*((volatile uint32_t *)0x4005B40C))
#define GPIO_PORTD_AHB_IM_R     (*((volatile uint32_t *)0x4005B410))
#define GPIO_PORTD_AHB_RIS_R    (*((volatile uint32_t *)0x4005B414))
#define GPIO_PORTD_AHB_MIS_R    (*((volatile uint32_t *)0x4005B418))
#define GPIO_PORTD_AHB_ICR_R    (*((volatile uint32_t *)0x4005B41C))
#define GPIO_PORTD_AHB_AFSEL_R  (*((volatile uint32_t *)0x4005B420))
#define GPIO_PORTD_AHB_DR2R_R   (*((volatile uint32_t *)0x4005B500))
#define GPIO_PORTD_AHB_DR4R_R   (*((volatile uint32_t *)0x4005B504))
#define GPIO_PORTD_AHB_DR8R_R   (*((volatile uint32_t *)0x4005B508))
#define GPIO_PORTD_AHB_ODR_R    (*((volatile uint32_t *)0x4005B50C))
#define GPIO_PORTD_AHB_PUR_R    (*((volatile uint32_t *)0x4005B510))
#define GPIO_PORTD_AHB_PDR_R    (*((volatile uint32_t *)0x4005B514))
#define GPIO_PORTD_AHB_SLR_R    (*((volatile uint32_t *)0x4005B518))
#define GPIO_PORTD_AHB_DEN_R    (*((volatile uint32_t *)0x4005B51C))
#define GPIO_PORTD_AHB_LOCK_R   (*((volatile uint32_t *)0x4005B520))
#define GPIO_PORTD_AHB_CR_R     (*((volatile uint32_t *)0x4005B524))
#define GPIO_PORTD_AHB_AMSEL_R  (*((volatile uint32_t *)0x4005B528))
#define GPIO_PORTD_AHB_PCTL_R   (*((volatile uint32_t *)0x4005B52C))
#define GPIO_PORTD_AHB_ADCCTL_R (*((volatile uint32_t *)0x4005B530))
#define GPIO_PORTD_AHB_DMACTL_R (*((volatile uint32_t *)0x4005B534))

/* Definitions of PORTE Registers*/

#define GPIO_PORTE_AHB_DATA_BITS_R                                            \
                                ((volatile uint32_t *)0x4005C000)
#define GPIO_PORTE_AHB_DATA_R   (*((volatile uint32_t *)0x4005C3FC))
#define GPIO_PORTE_AHB_DIR_R    (*((volatile uint32_t *)0x4005C400))
#define GPIO_PORTE_AHB_IS_R     (*((volatile uint32_t *)0x4005C404))
#define GPIO_PORTE_AHB_IBE_R    (*((volatile uint32_t *)0x4005C408))
#define GPIO_PORTE_AHB_IEV_R    (*((volatile uint32_t *)0x4005C40C))
#define GPIO_PORTE_AHB_IM_R     (*((volatile uint32_t *)0x4005C410))
#define GPIO_PORTE_AHB_RIS_R    (*((volatile uint32_t *)0x4005C414))
#define GPIO_PORTE_AHB_MIS_R    (*((volatile uint32_t *)0x4005C418))
#define GPIO_PORTE_AHB_ICR_R    (*((volatile uint32_t *)0x4005C41C))
#define GPIO_PORTE_AHB_AFSEL_R  (*((volatile uint32_t *)0x4005C420))
#define GPIO_PORTE_AHB_DR2R_R   (*((volatile uint32_t *)0x4005C500))
#define GPIO_PORTE_AHB_DR4R_R   (*((volatile uint32_t *)0x4005C504))
#define GPIO_PORTE_AHB_DR8R_R   (*((volatile uint32_t *)0x4005C508))
#define GPIO_PORTE_AHB_ODR_R    (*((volatile uint32_t *)0x4005C50C))
#define GPIO_PORTE_AHB_PUR_R    (*((volatile uint32_t *)0x4005C510))
#define GPIO_PORTE_AHB_PDR_R    (*((volatile uint32_t *)0x4005C514))
#define GPIO_PORTE_AHB_SLR_R    (*((volatile uint32_t *)0x4005C518))
#define GPIO_PORTE_AHB_DEN_R    (*((volatile uint32_t *)0x4005C51C))
#define GPIO_PORTE_AHB_LOCK_R   (*((volatile uint32_t *)0x4005C520))
#define GPIO_PORTE_AHB_CR_R     (*((volatile uint32_t *)0x4005C524))
#define GPIO_PORTE_AHB_AMSEL_R  (*((volatile uint32_t *)0x4005C528))
#define GPIO_PORTE_AHB_PCTL_R   (*((volatile uint32_t *)0x4005C52C))
#define GPIO_PORTE_AHB_ADCCTL_R (*((volatile uint32_t *)0x4005C530))
#define GPIO_PORTE_AHB_DMACTL_R (*((volatile uint32_t *)0x4005C534))

/* Definitions of PORTF Registers*/

#define GPIO_PORTF_AHB_DATA_BITS_R                                            \
                                ((volatile uint32_t *)0x4005D000)
#define GPIO_PORTF_DATA_R   (*((volatile uint32_t *)0x4005D3FC))
#define GPIO_PORTF_DIR_R    (*((volatile uint32_t *)0x4005D400))
#define GPIO_PORTF_AHB_IS_R     (*((volatile uint32_t *)0x4005D404))
#define GPIO_PORTF_AHB_IBE_R    (*((volatile uint32_t *)0x4005D408))
#define GPIO_PORTF_AHB_IEV_R    (*((volatile uint32_t *)0x4005D40C))
#define GPIO_PORTF_AHB_IM_R     (*((volatile uint32_t *)0x4005D410))
#define GPIO_PORTF_AHB_RIS_R    (*((volatile uint32_t *)0x4005D414))
#define GPIO_PORTF_AHB_MIS_R    (*((volatile uint32_t *)0x4005D418))
#define GPIO_PORTF_AHB_ICR_R    (*((volatile uint32_t *)0x4005D41C))
#define GPIO_PORTF_AHB_AFSEL_R  (*((volatile uint32_t *)0x4005D420))
#define GPIO_PORTF_AHB_DR2R_R   (*((volatile uint32_t *)0x4005D500))
#define GPIO_PORTF_AHB_DR4R_R   (*((volatile uint32_t *)0x4005D504))
#define GPIO_PORTF_AHB_DR8R_R   (*((volatile uint32_t *)0x4005D508))
#define GPIO_PORTF_AHB_ODR_R    (*((volatile uint32_t *)0x4005D50C))
#define GPIO_PORTF_AHB_PUR_R    (*((volatile uint32_t *)0x4005D510))
#define GPIO_PORTF_AHB_PDR_R    (*((volatile uint32_t *)0x4005D514))
#define GPIO_PORTF_AHB_SLR_R    (*((volatile uint32_t *)0x4005D518))
#define GPIO_PORTF_DEN_R    (*((volatile uint32_t *)0x4005D51C))
#define GPIO_PORTF_AHB_LOCK_R   (*((volatile uint32_t *)0x4005D520))
#define GPIO_PORTF_AHB_CR_R     (*((volatile uint32_t *)0x4005D524))
#define GPIO_PORTF_AHB_AMSEL_R  (*((volatile uint32_t *)0x4005D528))
#define GPIO_PORTF_AHB_PCTL_R   (*((volatile uint32_t *)0x4005D52C))
#define GPIO_PORTF_AHB_ADCCTL_R (*((volatile uint32_t *)0x4005D530))
#define GPIO_PORTF_AHB_DMACTL_R (*((volatile uint32_t *)0x4005D534))





#endif /* PORT_REGS_H_ */
