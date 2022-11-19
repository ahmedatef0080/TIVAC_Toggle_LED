#include "MGPIO_Interface.h"
#include "MGPIO_Confg.h"  
void Pin_Init_And_Direction(  u8 port , u8 pin)
{
	#if PIN_DIR == PIN_OUT
	switch (port)
	{
		case GPIOA:
			SYS_CLK->RCGCGPIO=0x00000001; // enable CLK for GPIOA 
			
			GPIOA_APB->DIR=(1<<pin); //set pin as output 
		
			break;
			case GPIOB:
			SYS_CLK->RCGCGPIO=0x00000002; // enable CLK for GPIOB 
			
			GPIOB_APB->DIR=(1<<pin); //set pin as output 
		
			break;
			case GPIOC:
			SYS_CLK->RCGCGPIO=0x0000004; // enable CLK for GPIOC 
			
			GPIOC_APB->DIR=(1<<pin); //set pin as output 
		
			break;
			case GPIOD:
			SYS_CLK->RCGCGPIO=0x00000008; // enable CLK for GPIOD 
			
			GPIOD_APB->DIR=(1<<pin); //set pin as output 
		
			break;
			case GPIOE:
			SYS_CLK->RCGCGPIO=0x00000010; // enable CLK for GPIOE 
			
			GPIOE_APB->DIR=(1<<pin); //set pin as output 
		
			break;
			case GPIOF:
			SYS_CLK->RCGCGPIO=0x00000020; // enable CLK for GPIOF 
			//set_bit(GPIOF_APB->DIR,40);
			GPIOF_APB->DIR=(1<<pin); //set pin as output 
		
			break;
			default:
				break;
			
			
			
	}
	#endif 
		#if PIN_DIR == PIN_IN
	switch (port)
	{
		case GPIOA:
			SYS_CLK->RCGCGPIO=0x00000001; // enable CLK for GPIOA 
			
			GPIOA_APB->DIR=(0<<pin); //set pin as output 
		
			break;
			case GPIOB:
			SYS_CLK->RCGCGPIO=0x00000002; // enable CLK for GPIOB 
			
			GPIOB_APB->DIR=(0<<pin); //set pin as output 
		
			break;
			case GPIOC:
			SYS_CLK->RCGCGPIO=0x00000004; // enable CLK for GPIOC 
			
			GPIOC_APB->DIR=(0<<pin); //set pin as output 
		
			break;
			case GPIOD:
			SYS_CLK->RCGCGPIO=0x00000008; // enable CLK for GPIOD 

			GPIOD_APB->DIR=(0<<pin); //set pin as output 
		
			break;
			case GPIOE:
			SYS_CLK->RCGCGPIO=0x00000010; // enable CLK for GPIOE 
			
			GPIOE_APB->DIR=(0<<pin); //set pin as output 
		
			break;
			case GPIOF:
			SYS_CLK->RCGCGPIO=0x00000020; // enable CLK for GPIOF 
			
			GPIOF_APB->DIR=(0<<pin); //set pin as output 
		
			break;
			default:
				break;
			
			
			
	}
	#endif 
	
	#if PIN_MODE == GPIO_DIGITAL 
	switch ( port)
	{
		case GPIOA:
			GPIOA_APB ->DEN = (1<<pin);
		break;
		case GPIOB:
			GPIOB_APB ->DEN = (1<<pin);
		break;
		case GPIOC:
			GPIOC_APB ->DEN = (1<<pin);
		break;
		case GPIOD:
			GPIOD_APB ->DEN = (1<<pin);
		break;
		case GPIOE:
			GPIOE_APB ->DEN = (1<<pin);
		break;
		case GPIOF:
			GPIOF_APB ->DEN = (1<<pin);
		break;
		
				
	}
	
	
	
	#endif
		
}


void MGPIO_Set_Pin_Value(u8 port , u8 pin,u8 PIN_Value)
{
	
	if( PIN_Value == PIN_HIGH)
	{	
	switch (port)
	{ 
		case GPIOA:
				GPIOA_APB->DATA=(1<<pin);
			break;
		case GPIOB:
				GPIOB_APB->DATA=(1<<pin);
			break;
		case GPIOC:
				GPIOC_APB->DATA=(1<<pin);
			break;
		case GPIOD:
				GPIOD_APB->DATA=(1<<pin);
			break;
		case GPIOE:
				GPIOE_APB->DATA=(1<<pin);
			break;
		case GPIOF:
				GPIOF_APB->DATA=(1<<pin);
			break;
		default:
			break;
		
		
	}
}
	
 else if( PIN_Value == PIN_LOW)
{	
	switch (port)
	{ 
		case GPIOA:
				GPIOA_APB->DATA=(0<<pin);
			break;
		case GPIOB:
				GPIOB_APB->DATA=(0<<pin);
			break;
		case GPIOC:
				GPIOC_APB->DATA=(0<<pin);
			break;
		case GPIOD:
				GPIOD_APB->DATA=(0<<pin);
			break;
		case GPIOE:
				GPIOE_APB->DATA=(0<<pin);
			break;
		case GPIOF:
				GPIOF_APB->DATA = (0<<pin);
			break;
		default:
			break;
		
		
	}
}
		
}



