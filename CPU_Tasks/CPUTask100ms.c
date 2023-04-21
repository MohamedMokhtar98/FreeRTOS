/*
 * CPUTask1ms.c
 *
 *  Created on: Apr 21, 2023
 *      Author: Mohamed_Mokhtar
 */

#include <avr/io.h>
#include "../MATH.h"
#include "../RTOS/FreeRTOS.h"
#include "../RTOS/list.h"
#include "../RTOS/task.h"
#include "../RTOS/queue.h"
#include "../RTOS/croutine.h"
#include "../RTOS/timers.h"
#include "../RTOS/FreeRTOSConfig.h"
#include "../RTOS/portable.h"
#include "../RTOS/timers.h"
#include "../Component/LedBlinking/LedBlinking.h"

void Task100ms(void) {
	while (1) {

		Led3Blinking100ms();


		vTaskDelay(100);
	}
}
