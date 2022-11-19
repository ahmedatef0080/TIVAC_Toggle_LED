#include "STD_Type.h"
#include "SystickTimer_Private.h"
#include "LED_Interface.h"


void Systick_Init(void);
void Systick_Start(void);
void Systick_Clear_Counter_Reg(void);
void Systick_Set_Delay(u32 Delay);

void Systick_Stop(void);

void Set_Call_Back_Func(void(*Pointer)(void));


