/******************************************************************************************************************************
 * Module      : Application
 *
 * File Name   : App.h
 *
 * Description : Header file for Application tasks
 *
 * Created on  : Nov 25, 2019
 *
 * Author      : Ahmed Magdy
 *
 ****************************************************************************************************************************/

#ifndef APP_H_
#define APP_H_


#include "Dio.h"


/*
 * Special type of struct to make task instance.
 *
 */

typedef struct Task_t{

	void (*code)(void);
   uint8_t period;

}Tasks_t;

extern Tasks_t Tasks[];  /* Enable usage of Task container by othe modules*/

extern const uint8_t Num_Of_Tasks; /*Enable usage of Number of tasks by other modules*/

void Task_Init(void);  /* Prototype for Task_Init */



#endif /* APP_H_ */
