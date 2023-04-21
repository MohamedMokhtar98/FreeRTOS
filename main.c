#include <avr/io.h>
#include <util/delay.h>
#include <avr/portpins.h>
#include "RTOS/FreeRTOS.h"
#include "RTOS/list.h"
#include "RTOS/task.h"
#include "RTOS/queue.h"
#include "RTOS/croutine.h"
#include "RTOS/timers.h"
#include "RTOS/FreeRTOSConfig.h"
#include "RTOS/portable.h"
#include "RTOS/timers.h"
#include <avr/delay.h>
#include "MATH.h"
#include "CPU_Tasks/CPUTask1msHeader.h"
#include "CPU_Tasks/CPUTask10msHeader.h"
#include "CPU_Tasks/CPUTask100msHeader.h"
#include "CPU_Tasks/CPUTask1000msHeader.h"

#define NULL ((void *)0)



int main(void)

{
	DDRD = 0xFF;
	DDRC = 0x00;

	xTaskCreate(Task1ms, NULL, configMINIMAL_STACK_SIZE, NULL, 2, NULL); // creates Task1ms
	xTaskCreate(Task10ms, NULL, configMINIMAL_STACK_SIZE, NULL, 2, NULL); // creates Task10ms
	xTaskCreate(Task100ms, NULL, configMINIMAL_STACK_SIZE, NULL, 2, NULL); // creates Task100ms
	xTaskCreate(Task1000ms, NULL, configMINIMAL_STACK_SIZE, NULL, 2, NULL); // creates Task1000ms
	vTaskStartScheduler(); // starts the Task Scheduler

	for (;;) {

	}
}
