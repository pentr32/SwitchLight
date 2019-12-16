#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "stdio_setup.h"

#define F_CPU 16000000UL

int main(void)
{
	DDRD = 0b11111111;
	while(1)
	{
		if (PINC &= 0b00000001) PORTD = 0b11111111;
		
		PORTD = 0x00;
	}
}