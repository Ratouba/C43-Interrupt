/*
 * Interrupt.c
 *
 * Created: 4/21/2021 11:32:04 PM
 * Author : Rateb
 */ 
#define F_CPU 16000000UL
#include "EXT_INT.h"
#include "LED.h"
#include "avr/interrupt.h"
#include <util/delay.h>

int main(void)
{  
	LED0_Init();
	
   EXT_INT0_Init();
   EXT_INT1_Init();
   EXT_INT2_Init();
   
    while (1) 
    {
    }
}
ISR(INT0_vect)
{
	LED0_Toggle();
	
}
ISR(INT1_vect)
{
	LED0_Toggle();
	
}
ISR(INT2_vect)
{
	LED0_Toggle();
	
}