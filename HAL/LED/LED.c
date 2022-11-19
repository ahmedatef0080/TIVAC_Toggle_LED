#include "MGPIO_Interface.h"



void Led_On_F0(void)
{
	GPIOF_APB->DATA=(1<<1);
}
void Led_On_F1(void)
{
	GPIOF_APB->DATA=(1<<2);
}
void Led_On_F2(void)
{
	GPIOF_APB->DATA=(1<<3);
}


void Led_OFF_F0(void)
{
	GPIOF_APB->DATA = (0<<1);
	
}
void Led_OFF_F1(void)
{
		GPIOF_APB->DATA = (0<<2);
}
void Led_OFF_F2(void)
{
		GPIOF_APB->DATA = (0<<3);
}


void Led_Toggle_F0(void)
{
	GPIOF_APB->DATA ^=(1<<1);
	
}
void Led_Toggle_F1(void)
{
	GPIOF_APB->DATA ^=(1<<2);
}
void Led_Toggle_F2(void)
{
	GPIOF_APB->DATA ^=(1<<3);
}
