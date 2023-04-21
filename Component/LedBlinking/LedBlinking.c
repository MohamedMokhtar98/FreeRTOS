/*
 * LedBlinking.c
 *
 *  Created on: Apr 21, 2023
 *      Author: Mohamed_Mokhtar
 */

#include <avr/io.h>
#include "../../MATH.h"

void Led1Blinking1ms(void) {
	static unsigned int counter = 0;
	/* There is a problem in % operation IDK what is problem yet*/
	if((GET_BIT(PINC,0)) && (counter >= 250U))
	{
		TOG_BIT(PORTD, 0);
		counter=0;
	}

	/*if (counter >= 1000) {
		TOG_BIT(PORTD, 0);
		counter=0;
	}*/
	counter++;
}

void Led2Blinking10ms(void) {
	static int counter = 0;
	if (counter >= 100) {
		TOG_BIT(PORTD, 1);
		counter=0;
	}
	counter++;
}

void Led3Blinking100ms(void) {
	static int counter = 0;
	if (counter >= 10) {
		TOG_BIT(PORTD, 2);
		counter=0;
	}
	counter++;
}
