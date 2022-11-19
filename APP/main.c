#include "SystickTimer_Interface.h"
#include "MGPIO_Interface.h"
#include "LED_Interface.h"
#include "NVIC_Systick.h"

int main ()
{
	Systick_Stop();
	Systick_Set_Delay(1000);
	Systick_Clear_Counter_Reg();
    Systick_Init();
	Pin_Init_And_Direction(GPIOF,PORT_Pin_F1);
	NVIC_General_Enable();

	
	Set_Call_Back_Func(Led_Toggle_F0);

	while (1)
	{
		
	}


}



/*
void SysTick_Handler(void)
{
	Led_Toggle_F0();
	//Systick_Clear_Counter_Reg();
	
}
*/