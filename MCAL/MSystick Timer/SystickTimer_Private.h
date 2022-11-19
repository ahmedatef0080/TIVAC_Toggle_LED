#include "STD_Type.h"



typedef struct
{
	u32 STCTRL;
	u32 STRELOAD;
	u32 STCURRENT;
}Systick_Reg;


#define Systick              ((volatile Systick_Reg*)0xE000E000)
#define Systick_STCRL        (*(volatile u32*)0xE000E010)
#define Systick_STRELOAD     (*(volatile u32*)0xE000E014)
#define Systick_STRCURRENT   (*(volatile u32*)0xE000E018)	


	

