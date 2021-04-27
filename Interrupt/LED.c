/*
 * LED.c
 *
 * Created: 4/12/2021 8:36:19 PM
 *  Author: Rateb
 */ 
#include "LED.h"

void LED0_Init(void)
{
	DIO_SetPinDir(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT);
}
void LED0_ON(void)
{
	DIO_SetPinVal(DIO_PORTC,DIO_PIN2,DIO_PIN_HIGH);
}
void LED0_OFF(void)
{
	DIO_SetPinVal(DIO_PORTC,DIO_PIN2,DIO_PIN_LOW);
}
void LED0_Toggle(void)
{
	DIO_TogglePin(DIO_PORTC,DIO_PIN2);
}
