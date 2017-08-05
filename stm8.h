/******************************
 *
 *
 *
 *
 *
 *****************************/



#ifndef STM8_H
#define STM8_H

/*	 stm8 registers 	*/

/***   CLOCK   ****************************RM0016 000***/
//CLK_CKDIVR clock divider register reset status 0x18
#define CLK_DIVR	(*(volatile uint8_t *)0x50c6)
//peripheral clock gating register 1 reset status 0xff
#define CLK_PCKENR1	(*(volatile uint8_t *)0x50c7)

/***   TIM 1   ****************************RM0016 000***/
//TIM1 control register1 address 0x005250 reset status 0x00
#define TIM1_CR1	(*(volatile uint8_t *)0x5250)
//TIM1 counter high
#define TIM1_CNTRH	(*(volatile uint8_t *)0x525e)
//TIM1 counter low
#define TIM1_CNTRL	(*(volatile uint8_t *)0x525f)
//TIM1 prescaler high
#define TIM1_PSCRH	(*(volatile uint8_t *)0x5260)
//TIM1 prescaler low
#define TIM1_PSCRL	(*(volatile uint8_t *)0x5261)

/***   GPIO    ****************************RM0016 111***/
//#define GPIOx_CRL 
//PortD data output latch register reset status 0x00
#define PD_ODR	(*(volatile uint8_t *)0x500f)
//PortD data direction register reset status 0x00
#define PD_DDR	(*(volatile uint8_t *)0x5011)
//PortD control register 1 reset status 0x02
#define PD_CR1	(*(volatile uint8_t *)0x5012)


#endif
