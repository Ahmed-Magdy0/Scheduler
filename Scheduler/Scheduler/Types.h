/*****************************************************************************************************************************
 * Module      : Common
 *
 * File Name   : Types.h
 *
 * Description : Header file for Types
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/


#ifndef TYPES_H_
#define TYPES_H_


/****************************************************************************************************************************
 *                                             Plateform Types
 ***************************************************************************************************************************/


typedef unsigned char         uint8_t;
typedef signed char           sint8;
typedef unsigned short        uint16;
typedef signed short          sint16;
typedef unsigned long         uint32_t;         /*           0 .. 4294967295      */
typedef signed long           sint32;         /* -2147483648 .. +2147483647     */
typedef unsigned long long    uint64;         /*       0..18446744073709551615  */
typedef signed long long      sint64;
typedef float                 float32;
typedef double                float64;


/****************************************************************************************************************************
 *                                          STD_Types
 ***************************************************************************************************************************/


#define  STD_LOW              (0)

#define  STD_HIGH             (1)

#define  INPUT                (0)

#define  OUTPUT               (1)

/***************************************************************************************************************************/

/* Macro used to define void pointer to zero */
#define NULL_PTR           ((void*)0)



#endif /* TYPES_H_ */
