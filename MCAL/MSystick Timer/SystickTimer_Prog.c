#include "SystickTimer_Interface.h"
#include "SystickTimer_Confg.h"
#include "LED_Interface.h"


#define NULL ((void *)(0))
void(*ptr)(void)=NULL;
u32 Num_of_Flows =0;
u32 Init_Value =0;


void Systick_Init(void)
{
	Systick_STCRL=0; //disable the systick 
	
	#if Interrupt_Status == Interrupt_Disable
		#if ClkSource==SystemClk
			Systick_STCRL=0x00000004; // Init Sys_Clk and enable Systick
		
	
		#endif 
		#if ClkSource ==Clk_PIOSC_4
			Systick_STCRL = 0x01;  // Init PIOSC_4 and Enable Systick
		#endif
	
	
	
	
	
	#endif
	
		#if Interrupt_Status == Interrupt_Enable
		#if ClkSource==SystemClk
			Systick_STCRL=0x00000007; // Init Sys_Clk and enable Systick
		
	
		#endif 
		#if ClkSource ==Clk_PIOSC_4
			Systick_STCRL = 0x00000003;  // Init PIOSC_4 and Enable Systick
		#endif
	
	
	
	
	
	#endif
	#if Interrupt_Status == Interrupt_Disable
		#if ClkSource==SystemClk
			Systick_STCRL=0x00000005; // Init Sys_Clk and Disable Systick
		
	
		#endif 
		#if ClkSource ==Clk_PIOSC_4
			Systick_STCRL = 0x00000001;  // Init PIOSC_4 and Disable Systick
			#endif
	
	
	#endif 
}

void Systick_Set_Delay(u32 Delay)
{
	u32 Num_Count =((Delay*1000)*16);
	Num_of_Flows= Num_Count/16000000;
	Init_Value = 16000000-(Num_Count %16000000);
	Systick_STRELOAD=Init_Value;
	Num_of_Flows++;
	

	
}



void Systick_Stop(void)
{
	Systick_STCRL=0; //disable the systick
}

void Systick_Clear_Counter_Reg(void)
{	
	Systick_STRCURRENT=0;
}

void Set_Call_Back_Func(void(*Pointer)(void))
{
	ptr=Pointer;
}

void SysTick_Handler(void)
{
	static u32 Counter =0; 
	Counter++;
	
	if(Counter==Num_of_Flows)
	{
		
		Systick_STRELOAD=Init_Value;
		Counter =0;
		(*ptr)();
		
	}
	

		
		
	
	 
	
}



