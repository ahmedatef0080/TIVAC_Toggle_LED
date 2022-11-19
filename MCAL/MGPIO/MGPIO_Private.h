#ifndef _MGPIO_PRIVATE_H_
#define _MGPIO_PRIVATE_H_
#include "STD_Type.h"

typedef struct {                                    
    u32  RESERVED[255];
   u32  DATA;                              /* GPIO Data                                                             */
   u32  DIR;                               /* GPIO Direction                                                        */
   u32  IS;                                /* GPIO Interrupt Sense                                                  */
   u32  IBE;                               /* GPIO Interrupt Both Edges                                             */
   u32  IEV;                               /* GPIO Interrupt Event                                                  */
   u32  IM;                                /* GPIO Interrupt Mask                                                   */
   u32  RIS;                               /* GPIO Raw Interrupt Status                                             */
   u32  MIS;                               /*GPIO Masked Interrupt Status                                          */
    u32  ICR;                               /* GPIO Interrupt Clear                                                  */
   u32  AFSEL;                             /* GPIO Alternate Function Select                                        */
    u32  RESERVED1[55];
   u32  DR2R;                              /* GPIO 2-mA Drive Select                                                */
   u32  DR4R;                              /* GPIO 4-mA Drive Select                                                */
   u32  DR8R;                              /* GPIO 8-mA Drive Select                                                */
   u32  ODR;                               /* GPIO Open Drain Select                                                */
   u32  PUR;                               /* GPIO Pull-Up Select                                                   */
   u32  PDR;                               /* GPIO Pull-Down Select                                                 */
   u32  SLR;                               /*GPIO Slew Rate Control Select                                         */
   u32  DEN;                               /* GPIO Digital Enable                                                   */
   u32  LOCK;                              /* GPIO Lock                                                             */
   u32  CR;                                /* GPIO Commit                                                           */
   u32  AMSEL;                             /* GPIO Analog Mode Select                                               */
   u32  PCTL;                              /* GPIO Port Control                                                     */
   u32  ADCCTL;                            /* GPIO ADC Control                                                      */
   u32  DMACTL;                            /* GPIO DMA Control                                                      */
} GPIO_REG;


/*typedef struct 
{
	u32 Resverd:26;
	u32 R5_F:1;
	u32 R4_E:1;
	u32 R3_D:1;
	u32 R2_C:1;
	u32 R1_B:1;
	u32 R0_A:1;
}RCGCGPIO_Bit_Feld;
*/
typedef struct {                                    /*!< SYSCTL Structure                                                      */
    u32  DID0;                              /*!< Device Identification 0                                               */
    u32  DID1;                              /*!< Device Identification 1                                               */
    u32  DC0;                               /*!< Device Capabilities 0                                                 */
     u32  RESERVED;
    u32  DC1;                               /*!< Device Capabilities 1                                                 */
    u32  DC2;                               /*!< Device Capabilities 2                                                 */
    u32  DC3;                               /*!< Device Capabilities 3                                                 */
    u32  DC4;                               /*!< Device Capabilities 4                                                 */
    u32  DC5;                               /*!< Device Capabilities 5                                                 */
    u32  DC6;                               /*!< Device Capabilities 6                                                 */
    u32  DC7;                               /*!< Device Capabilities 7                                                 */
    u32  DC8;                               /*!< Device Capabilities 8                                                 */
    u32  PBORCTL;                           /*!< Brown-Out Reset Control                                               */
     u32  RESERVED1[3];
    u32  SRCR0;                             /*!< Software Reset Control 0                                              */
    u32  SRCR1;                             /*!< Software Reset Control 1                                              */
    u32  SRCR2;                             /*!< Software Reset Control 2                                              */
     u32  RESERVED2;
    u32  RIS;                               /*!< Raw Interrupt Status                                                  */
    u32  IMC;                               /*!< Interrupt Mask Control                                                */
    u32  MISC;                              /*!< Masked Interrupt Status and Clear                                     */
    u32  RESC;                              /*!< Reset Cause                                                           */
    u32  RCC;                               /*!< Run-Mode Clock Configuration                                          */
     u32  RESERVED3[2];
    u32  GPIOHBCTL;                         /*!< GPIO High-Performance Bus Control                                     */
    u32  RCC2;                              /*!< Run-Mode Clock Configuration 2                                        */
     u32  RESERVED4[2];
    u32  MOSCCTL;                           /*!< Main Oscillator Control                                               */
     u32  RESERVED5[32];
    u32  RCGC0;                             /*!< Run Mode Clock Gating Control Register 0                              */
    u32  RCGC1;                             /*!< Run Mode Clock Gating Control Register 1                              */
    u32  RCGC2;                             /*!< Run Mode Clock Gating Control Register 2                              */
     u32  RESERVED6;
    u32  SCGC0;                             /*!< Sleep Mode Clock Gating Control Register 0                            */
    u32  SCGC1;                             /*!< Sleep Mode Clock Gating Control Register 1                            */
    u32  SCGC2;                             /*!< Sleep Mode Clock Gating Control Register 2                            */
     u32  RESERVED7;
    u32  DCGC0;                             /*!< Deep Sleep Mode Clock Gating Control Register 0                       */
    u32  DCGC1;                             /*!< Deep-Sleep Mode Clock Gating Control Register 1                       */
    u32  DCGC2;                             /*!< Deep Sleep Mode Clock Gating Control Register 2                       */
     u32  RESERVED8[6];
    u32  DSLPCLKCFG;                        /*!< Deep Sleep Clock Configuration                                        */
     u32  RESERVED9;
    u32  SYSPROP;                           /*!< System Properties                                                     */
    u32  PIOSCCAL;                          /*!< Precision Internal Oscillator Calibration                             */
    u32  PIOSCSTAT;                         /*!< Precision Internal Oscillator Statistics                              */
     u32  RESERVED10[2];
    u32  PLLFREQ0;                          /*!< PLL Frequency 0                                                       */
    u32  PLLFREQ1;                          /*!< PLL Frequency 1                                                       */
    u32  PLLSTAT;                           /*!< PLL Status                                                            */
     u32  RESERVED11[7];
    u32  SLPPWRCFG;                         /*!< Sleep Power Configuration                                             */
    u32  DSLPPWRCFG;                        /*!< Deep-Sleep Power Configuration                                        */
    u32  DC9;                               /*!< Device Capabilities 9                                                 */
     u32  RESERVED12[3];
    u32  NVMSTAT;                           /*!< Non-Volatile Memory Information                                       */
     u32  RESERVED13[4];
    u32  LDOSPCTL;                          /*!< LDO Sleep Power Control                                               */
     u32  RESERVED14;
    u32  LDODPCTL;                          /*!< LDO Deep-Sleep Power Control                                          */
     u32  RESERVED15[80];
    u32  PPWD;                              /*!< Watchdog Timer Peripheral Present                                     */
    u32  PPTIMER;                           /*!< 16/32-Bit General-Purpose Timer Peripheral Present                    */
    u32  PPGPIO;                            /*!< General-Purpose Input/Output Peripheral Present                       */
    u32  PPDMA;                             /*!< Micro Direct Memory Access Peripheral Present                         */
     u32  RESERVED16;
    u32  PPHIB;                             /*!< Hibernation Peripheral Present                                        */
    u32  PPUART;                            /*!< Universal Asynchronous Receiver/Transmitter Peripheral Present        */
    u32  PPSSI;                             /*!< Synchronous Serial Interface Peripheral Present                       */
    u32  PPI2C;                             /*!< Inter-Integrated Circuit Peripheral Present                           */
     u32  RESERVED17;
    u32  PPUSB;                             /*!< Universal Serial Bus Peripheral Present                               */
     u32  RESERVED18[2];
    u32  PPCAN;                             /*!< Controller Area Network Peripheral Present                            */
    u32  PPADC;                             /*!< Analog-to-Digital Converter Peripheral Present                        */
    u32  PPACMP;                            /*!< Analog Comparator Peripheral Present                                  */
    u32  PPPWM;                             /*!< Pulse Width Modulator Peripheral Present                              */
    u32  PPQEI;                             /*!< Quadrature Encoder Interface Peripheral Present                       */
     u32  RESERVED19[4];
    u32  PPEEPROM;                          /*!< EEPROM Peripheral Present                                             */
    u32  PPWTIMER;                          /*!< 32/64-Bit Wide General-Purpose Timer Peripheral Present               */
     u32  RESERVED20[104];
    u32  SRWD;                              /*!< Watchdog Timer Software Reset                                         */
    u32  SRTIMER;                           /*!< 16/32-Bit General-Purpose Timer Software Reset                        */
    u32  SRGPIO;                            /*!< General-Purpose Input/Output Software Reset                           */
    u32  SRDMA;                             /*!< Micro Direct Memory Access Software Reset                             */
     u32  RESERVED21;
    u32  SRHIB;                             /*!< Hibernation Software Reset                                            */
    u32  SRUART;                            /*!< Universal Asynchronous Receiver/Transmitter Software Reset            */
    u32  SRSSI;                             /*!< Synchronous Serial Interface Software Reset                           */
    u32  SRI2C;                             /*!< Inter-Integrated Circuit Software Reset                               */
     u32  RESERVED22;
    u32  SRUSB;                             /*!< Universal Serial Bus Software Reset                                   */
     u32  RESERVED23[2];
    u32  SRCAN;                             /*!< Controller Area Network Software Reset                                */
    u32  SRADC;                             /*!< Analog-to-Digital Converter Software Reset                            */
    u32  SRACMP;                            /*!< Analog Comparator Software Reset                                      */
    u32  SRPWM;                             /*!< Pulse Width Modulator Software Reset                                  */
    u32  SRQEI;                             /*!< Quadrature Encoder Interface Software Reset                           */
     u32  RESERVED24[4];
    u32  SREEPROM;                          /*!< EEPROM Software Reset                                                 */
    u32  SRWTIMER;                          /*!< 32/64-Bit Wide General-Purpose Timer Software Reset                   */
     u32  RESERVED25[40];
    u32  RCGCWD;                            /*!< Watchdog Timer Run Mode Clock Gating Control                          */
    u32  RCGCTIMER;                         /*!< 16/32-Bit General-Purpose Timer Run Mode Clock Gating Control         */
    u32  RCGCGPIO;                          /*!< General-Purpose Input/Output Run Mode Clock Gating Control            */
    u32  RCGCDMA;                           /*!< Micro Direct Memory Access Run Mode Clock Gating Control              */
     u32  RESERVED26;
    u32  RCGCHIB;                           /*!< Hibernation Run Mode Clock Gating Control                             */
    u32  RCGCUART;                          /*!< Universal Asynchronous Receiver/Transmitter Run Mode Clock Gating
                                                         Control                                                               */
    u32  RCGCSSI;                           /*!< Synchronous Serial Interface Run Mode Clock Gating Control            */
    u32  RCGCI2C;                           /*!< Inter-Integrated Circuit Run Mode Clock Gating Control                */
     u32  RESERVED27;
    u32  RCGCUSB;                           /*!< Universal Serial Bus Run Mode Clock Gating Control                    */
     u32  RESERVED28[2];
    u32  RCGCCAN;                           /*!< Controller Area Network Run Mode Clock Gating Control                 */
    u32  RCGCADC;                           /*!< Analog-to-Digital Converter Run Mode Clock Gating Control             */
    u32  RCGCACMP;                          /*!< Analog Comparator Run Mode Clock Gating Control                       */
    u32  RCGCPWM;                           /*!< Pulse Width Modulator Run Mode Clock Gating Control                   */
    u32  RCGCQEI;                           /*!< Quadrature Encoder Interface Run Mode Clock Gating Control            */
     u32  RESERVED29[4];
    u32  RCGCEEPROM;                        /*!< EEPROM Run Mode Clock Gating Control                                  */
    u32  RCGCWTIMER;                        /*!< 32/64-Bit Wide General-Purpose Timer Run Mode Clock Gating Control    */
     u32  RESERVED30[40];
    u32  SCGCWD;                            /*!< Watchdog Timer Sleep Mode Clock Gating Control                        */
    u32  SCGCTIMER;                         /*!< 16/32-Bit General-Purpose Timer Sleep Mode Clock Gating Control       */
    u32  SCGCGPIO;                          /*!< General-Purpose Input/Output Sleep Mode Clock Gating Control          */
    u32  SCGCDMA;                           /*!< Micro Direct Memory Access Sleep Mode Clock Gating Control            */
     u32  RESERVED31;
    u32  SCGCHIB;                           /*!< Hibernation Sleep Mode Clock Gating Control                           */
    u32  SCGCUART;                          /*!< Universal Asynchronous Receiver/Transmitter Sleep Mode Clock
                                                         Gating Control                                                        */
    u32  SCGCSSI;                           /*!< Synchronous Serial Interface Sleep Mode Clock Gating Control          */
    u32  SCGCI2C;                           /*!< Inter-Integrated Circuit Sleep Mode Clock Gating Control              */
     u32  RESERVED32;
    u32  SCGCUSB;                           /*!< Universal Serial Bus Sleep Mode Clock Gating Control                  */
     u32  RESERVED33[2];
    u32  SCGCCAN;                           /*!< Controller Area Network Sleep Mode Clock Gating Control               */
    u32  SCGCADC;                           /*!< Analog-to-Digital Converter Sleep Mode Clock Gating Control           */
    u32  SCGCACMP;                          /*!< Analog Comparator Sleep Mode Clock Gating Control                     */
    u32  SCGCPWM;                           /*!< Pulse Width Modulator Sleep Mode Clock Gating Control                 */
    u32  SCGCQEI;                           /*!< Quadrature Encoder Interface Sleep Mode Clock Gating Control          */
     u32  RESERVED34[4];
    u32  SCGCEEPROM;                        /*!< EEPROM Sleep Mode Clock Gating Control                                */
    u32  SCGCWTIMER;                        /*!< 32/64-Bit Wide General-Purpose Timer Sleep Mode Clock Gating
                                                         Control                                                               */
     u32  RESERVED35[40];
    u32  DCGCWD;                            /*!< Watchdog Timer Deep-Sleep Mode Clock Gating Control                   */
    u32  DCGCTIMER;                         /*!< 16/32-Bit General-Purpose Timer Deep-Sleep Mode Clock Gating
                                                         Control                                                               */
    u32  DCGCGPIO;                          /*!< General-Purpose Input/Output Deep-Sleep Mode Clock Gating Control     */
    u32  DCGCDMA;                           /*!< Micro Direct Memory Access Deep-Sleep Mode Clock Gating Control       */
     u32  RESERVED36;
    u32  DCGCHIB;                           /*!< Hibernation Deep-Sleep Mode Clock Gating Control                      */
    u32  DCGCUART;                          /*!< Universal Asynchronous Receiver/Transmitter Deep-Sleep Mode
                                                         Clock Gating Control                                                  */
    u32  DCGCSSI;                           /*!< Synchronous Serial Interface Deep-Sleep Mode Clock Gating Control     */
    u32  DCGCI2C;                           /*!< Inter-Integrated Circuit Deep-Sleep Mode Clock Gating Control         */
     u32  RESERVED37;
    u32  DCGCUSB;                           /*!< Universal Serial Bus Deep-Sleep Mode Clock Gating Control             */
     u32  RESERVED38[2];
    u32  DCGCCAN;                           /*!< Controller Area Network Deep-Sleep Mode Clock Gating Control          */
    u32  DCGCADC;                           /*!< Analog-to-Digital Converter Deep-Sleep Mode Clock Gating Control      */
    u32  DCGCACMP;                          /*!< Analog Comparator Deep-Sleep Mode Clock Gating Control                */
    u32  DCGCPWM;                           /*!< Pulse Width Modulator Deep-Sleep Mode Clock Gating Control            */
    u32  DCGCQEI;                           /*!< Quadrature Encoder Interface Deep-Sleep Mode Clock Gating Control     */
     u32  RESERVED39[4];
    u32  DCGCEEPROM;                        /*!< EEPROM Deep-Sleep Mode Clock Gating Control                           */
    u32  DCGCWTIMER;                        /*!< 32/64-Bit Wide General-Purpose Timer Deep-Sleep Mode Clock Gating
                                                         Control                                                               */
     u32  RESERVED40[104];
    u32  PRWD;                              /*!< Watchdog Timer Peripheral Ready                                       */
    u32  PRTIMER;                           /*!< 16/32-Bit General-Purpose Timer Peripheral Ready                      */
    u32  PRGPIO;                            /*!< General-Purpose Input/Output Peripheral Ready                         */
    u32  PRDMA;                             /*!< Micro Direct Memory Access Peripheral Ready                           */
     u32  RESERVED41;
    u32  PRHIB;                             /*!< Hibernation Peripheral Ready                                          */
    u32  PRUART;                            /*!< Universal Asynchronous Receiver/Transmitter Peripheral Ready          */
    u32  PRSSI;                             /*!< Synchronous Serial Interface Peripheral Ready                         */
    u32  PRI2C;                             /*!< Inter-Integrated Circuit Peripheral Ready                             */
     u32  RESERVED42;
    u32  PRUSB;                             /*!< Universal Serial Bus Peripheral Ready                                 */
     u32  RESERVED43[2];
    u32  PRCAN;                             /*!< Controller Area Network Peripheral Ready                              */
    u32  PRADC;                             /*!< Analog-to-Digital Converter Peripheral Ready                          */
    u32  PRACMP;                            /*!< Analog Comparator Peripheral Ready                                    */
    u32  PRPWM;                             /*!< Pulse Width Modulator Peripheral Ready                                */
    u32  PRQEI;                             /*!< Quadrature Encoder Interface Peripheral Ready                         */
     u32  RESERVED44[4];
    u32  PREEPROM;                          /*!< EEPROM Peripheral Ready                                               */
    u32  PRWTIMER;                          /*!< 32/64-Bit Wide General-Purpose Timer Peripheral Ready                 */
} SYSCTL_REGS;




#define GPIOA_APB_BASE_ADDRESS                      0x40004000
#define GPIOB_APB_BASE_ADDRESS                      0x40005000
#define GPIOC_APB_BASE_ADDRESS                      0x40006000
#define GPIOD_APB_BASE_ADDRESS                      0x40007000
#define GPIOE_APB_BASE_ADDRESS                      0x40024000
#define GPIOF_APB_BASE_ADDRESS                      0x40025000

#define GPIOA_AHB_BASE_ADDRESS                      0x40058000
#define GPIOB_AHB_BASE_ADDRESS                      0x40059000
#define GPIOC_AHB_BASE_ADDRESS                      0x4005A000
#define GPIOD_AHB_BASE_ADDRESS                      0x4005B000
#define GPIOE_AHB_BASE_ADDRESS                      0x4005C000
#define GPIOF_AHB_BASE_ADDRESS                      0x4005D000



#define GPIOA_APB ((volatile GPIO_REG*)0x40004000)
#define GPIOB_APB ((volatile GPIO_REG*)0x40005000)
#define GPIOC_APB ((volatile GPIO_REG*)0x40006000)
#define GPIOD_APB ((volatile GPIO_REG*)0x40007000)
#define GPIOE_APB ((volatile GPIO_REG*)0x40024000)
#define GPIOF_APB ((volatile GPIO_REG*)0x40025000)
	


#define GPIOA_AHB ((volatile GPIO_REG*)0x40058000)
#define GPIOB_AHB ((volatile GPIO_REG*)0x40059000)
#define GPIOC_AHB ((volatile GPIO_REG*)0x4005A000)
#define GPIOD_AHB ((volatile GPIO_REG*)0x4005B000)
#define GPIOE_AHB ((volatile GPIO_REG*)0x4005C000)
#define GPIOF_AHB ((volatile GPIO_REG*)0x4005D000)


#define SYS_CLK ((volatile SYSCTL_REGS*)0x400FE000)
	
			

#endif 

