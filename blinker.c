/****************************************************
 *
 *
 *
 *
 *
 *
 ***************************************************/



//sdcc -lstm8 -mstm8 --out-fmt-ihx thisfile.c
//st-flash write thisfile.bin 0x8000000


#include <stdint.h>
#include "stm8.h"

unsigned int clock(void)
{
	unsigned char h = TIM1_CNTRH;
	unsigned char l = TIM1_CNTRL;
	return((unsigned int)(h) << 8 | l);
}

void main(void)
{
	CLK_DIVR = 0x00; // Set the frequency to 16 MHz

	// Configure timer
	// 1000 ticks per second
	TIM1_PSCRH = 0x3e; //dec=62, bin=111110  
	TIM1_PSCRL = 0x80; //dec=128, bin=10000000
	// Enable timer
	TIM1_CR1 = 0x01; // bin=0001

	PD_DDR = 0x08; // bin=1000
	PD_CR1 = 0x08;

	for(;;)
		PD_ODR = (clock() % 1000 < 500) << 3;
}


