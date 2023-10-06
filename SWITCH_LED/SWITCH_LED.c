/*
 * SWITCH_LED.c
 *
 *  Created on: Sep 11, 2021
 *      Author: Eng Ahmed Tarek
 */



#include <avr/io.h>
#include <avr/delay.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"



void main(void)
{
DDRB=0b10000000;
SET_BIT(PORTB,0);
	while(1)
	{
int x=GET_BIT(PINB,0);
if (0==x)
{
	SET_BIT(PORTB,7);
}
else
	{CLR_BIT(PORTB,7);
	}
}
	}



