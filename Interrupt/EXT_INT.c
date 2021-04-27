/*
 * EXT_INT.c
 *
 * Created: 4/21/2021 11:40:45 PM
 *  Author: Rateb
 */ 
#include "EXT_INT.h"

void SET_GLOBAL_INT(void)
{
	#if    GLOBAL_INTERRUPT == GLOBAL_INTERRUPT_ENABLE
	
	SET_BIT(SREG,7);
	
	#elif  GLOBAL_INTERRUPT == GLOBAL_INTERRUPT_DISABLE
	
	CLR_BIT(SREG,7);
	#endif
}

void EXT_INT0_Init(void)
{    /*enable global INT*/
	SET_GLOBAL_INT();
	/* enable EXT_INT0*/
	SET_BIT(GICR,6);
	
	/*select trigger*/
	#if     EXT_INT0_TRIGGER == TRIGGER_RISING
	   SET_BIT(MCUCR,0);
	   SET_BIT(MCUCR,1);
	   
	#elif   EXT_INT0_TRIGGER == TRIGGER_FALLING
	  CLR_BIT(MCUCR,0);
	  SET_BIT(MCUCR,1);
	  
	#elif   EXT_INT0_TRIGGER == TRIGGER_ANY_LOGICAL_CHANGE
	   SET_BIT(MCUCR,0);
	   CLR_BIT(MCUCR,1);
	   
	#elif   EXT_INT0_TRIGGER == TRIGGER_LOW_LEVEL
	   CLR_BIT(MCUCR,0);
	   CLR_BIT(MCUCR,1);
	
	#endif
	
}

void EXT_INT1_Init(void)
{ /*enable global INT*/
	SET_GLOBAL_INT();
	/* enable EXT_INT1*/
	SET_BIT(GICR,7);
	
	/*select trigger*/
	#if     EXT_INT1_TRIGGER == TRIGGER_RISING
	SET_BIT(MCUCR,2);
	SET_BIT(MCUCR,3);
	
	#elif   EXT_INT1_TRIGGER == TRIGGER_FALLING
	CLR_BIT(MCUCR,2);
	SET_BIT(MCUCR,3);
	
	#elif   EXT_INT1_TRIGGER == TRIGGER_ANY_LOGICAL_CHANGE
	SET_BIT(MCUCR,2);
	CLR_BIT(MCUCR,3);
	
	#elif   EXT_INT1_TRIGGER == TRIGGER_LOW_LEVEL
	CLR_BIT(MCUCR,2);
	CLR_BIT(MCUCR,3);
	
	#endif
	
	
}
/* Your assignment*/
void EXT_INT2_Init(void)
{/*enable global INT*/
	SET_GLOBAL_INT();
	/* enable EXT_INT2*/
	SET_BIT(GICR,5);
	
	/*select trigger*/
	#if     EXT_INT2_TRIGGER == TRIGGER_RISING
	SET_BIT(MCUCSR,6);
	
	#elif   EXT_INT2_TRIGGER == TRIGGER_FALLING
	CLR_BIT(MCUCSR,6);
	
	
	
	#endif
	
	
}