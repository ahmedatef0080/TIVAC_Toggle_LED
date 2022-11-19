#ifndef _MGPIO_Interface_H_
#define _MGPIO_Interface_H_
#include "MGPIO_Confg.h"
#include "MGPIO_Private.h"
#include "STD_Type.h"



#define GPIOA           0
#define GPIOB           1
#define GPIOC           2
#define GPIOD           3
#define GPIOE           4
#define GPIOF           5

#define PORT_Pin_A0     0 
#define PORT_Pin_A1     1
#define PORT_Pin_A2     2
#define PORT_Pin_A3     3
#define PORT_Pin_A4     4
#define PORT_Pin_A5     5
#define PORT_Pin_A6     6
#define PORT_Pin_A7     7



#define PORT_Pin_B0     0 
#define PORT_Pin_B1     1
#define PORT_Pin_B2     2
#define PORT_Pin_B3     3
#define PORT_Pin_B4     4
#define PORT_Pin_B5     5
#define PORT_Pin_B6     6
#define PORT_Pin_B7     7


#define PORT_Pin_C0     0 
#define PORT_Pin_C1     1
#define PORT_Pin_C2     2
#define PORT_Pin_C3     3
#define PORT_Pin_C4     4
#define PORT_Pin_C5     5
#define PORT_Pin_C6     6
#define PORT_Pin_C7     7

#define PORT_Pin_D0     0 
#define PORT_Pin_D1     1
#define PORT_Pin_D2     2
#define PORT_Pin_D3     3
#define PORT_Pin_D4     4
#define PORT_Pin_D5     5
#define PORT_Pin_D6     6
#define PORT_Pin_D7     7

#define PORT_Pin_E0     0 
#define PORT_Pin_E1     1
#define PORT_Pin_E2     2
#define PORT_Pin_E3     3
#define PORT_Pin_E4     4
#define PORT_Pin_E5     5
#define PORT_Pin_E6    	6
#define PORT_Pin_E7     7


#define PORT_Pin_F0     0
#define PORT_Pin_F1     1
#define PORT_Pin_F2     2
#define PORT_Pin_F3     3
#define PORT_Pin_F4     4
#define PORT_Pin_F5     5
#define PORT_Pin_F6     6
#define PORT_Pin_F7     7



#define GPIO_DIGITAL  0
#define GPIO_ANALOG   1

#define PIN_IN   0
#define PIN_OUT  1

#define PIN_LOW     0
#define PIN_HIGH    1

#define PORT_ATTACH_DEFAULT     0
#define PORT_ATTACH_PULLUP      1
#define PORT_ATTACH_PULLDOWN    2
#define PORT_ATTACH_OPEN_DRAIN  3

#define PORT_2_MA_Current       0
#define PORT_4_MA_Current       1
#define PORT_8_MA_Current       2






void Pin_Init_And_Direction(  u8 port , u8 pin );


void MGPIO_Set_Pin_Value(u8 port , u8 pin,u8 PIN_Value);






#endif 