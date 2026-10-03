/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16F1719
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set POT_CHANNEL aliases
#define POT_CHANNEL_TRIS               TRISAbits.TRISA0
#define POT_CHANNEL_LAT                LATAbits.LATA0
#define POT_CHANNEL_PORT               PORTAbits.RA0
#define POT_CHANNEL_WPU                WPUAbits.WPUA0
#define POT_CHANNEL_OD                ODCONAbits.ODA0
#define POT_CHANNEL_ANS                ANSELAbits.ANSA0
#define POT_CHANNEL_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define POT_CHANNEL_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define POT_CHANNEL_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define POT_CHANNEL_GetValue()           PORTAbits.RA0
#define POT_CHANNEL_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define POT_CHANNEL_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define POT_CHANNEL_SetPullup()      do { WPUAbits.WPUA0 = 1; } while(0)
#define POT_CHANNEL_ResetPullup()    do { WPUAbits.WPUA0 = 0; } while(0)
#define POT_CHANNEL_SetPushPull()    do { ODCONAbits.ODA0 = 0; } while(0)
#define POT_CHANNEL_SetOpenDrain()   do { ODCONAbits.ODA0 = 1; } while(0)
#define POT_CHANNEL_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define POT_CHANNEL_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LCD_CHIP_SELECT aliases
#define LCD_CHIP_SELECT_TRIS               TRISAbits.TRISA2
#define LCD_CHIP_SELECT_LAT                LATAbits.LATA2
#define LCD_CHIP_SELECT_PORT               PORTAbits.RA2
#define LCD_CHIP_SELECT_WPU                WPUAbits.WPUA2
#define LCD_CHIP_SELECT_OD                ODCONAbits.ODA2
#define LCD_CHIP_SELECT_ANS                ANSELAbits.ANSA2
#define LCD_CHIP_SELECT_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LCD_CHIP_SELECT_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LCD_CHIP_SELECT_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LCD_CHIP_SELECT_GetValue()           PORTAbits.RA2
#define LCD_CHIP_SELECT_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LCD_CHIP_SELECT_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LCD_CHIP_SELECT_SetPullup()      do { WPUAbits.WPUA2 = 1; } while(0)
#define LCD_CHIP_SELECT_ResetPullup()    do { WPUAbits.WPUA2 = 0; } while(0)
#define LCD_CHIP_SELECT_SetPushPull()    do { ODCONAbits.ODA2 = 0; } while(0)
#define LCD_CHIP_SELECT_SetOpenDrain()   do { ODCONAbits.ODA2 = 1; } while(0)
#define LCD_CHIP_SELECT_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define LCD_CHIP_SELECT_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set SWITCH_S2 aliases
#define SWITCH_S2_TRIS               TRISAbits.TRISA5
#define SWITCH_S2_LAT                LATAbits.LATA5
#define SWITCH_S2_PORT               PORTAbits.RA5
#define SWITCH_S2_WPU                WPUAbits.WPUA5
#define SWITCH_S2_OD                ODCONAbits.ODA5
#define SWITCH_S2_ANS                ANSELAbits.ANSA5
#define SWITCH_S2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SWITCH_S2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SWITCH_S2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SWITCH_S2_GetValue()           PORTAbits.RA5
#define SWITCH_S2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SWITCH_S2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SWITCH_S2_SetPullup()      do { WPUAbits.WPUA5 = 1; } while(0)
#define SWITCH_S2_ResetPullup()    do { WPUAbits.WPUA5 = 0; } while(0)
#define SWITCH_S2_SetPushPull()    do { ODCONAbits.ODA5 = 0; } while(0)
#define SWITCH_S2_SetOpenDrain()   do { ODCONAbits.ODA5 = 1; } while(0)
#define SWITCH_S2_SetAnalogMode()  do { ANSELAbits.ANSA5 = 1; } while(0)
#define SWITCH_S2_SetDigitalMode() do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set SWITCH_S1 aliases
#define SWITCH_S1_TRIS               TRISBbits.TRISB0
#define SWITCH_S1_LAT                LATBbits.LATB0
#define SWITCH_S1_PORT               PORTBbits.RB0
#define SWITCH_S1_WPU                WPUBbits.WPUB0
#define SWITCH_S1_OD                ODCONBbits.ODB0
#define SWITCH_S1_ANS                ANSELBbits.ANSB0
#define SWITCH_S1_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define SWITCH_S1_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define SWITCH_S1_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define SWITCH_S1_GetValue()           PORTBbits.RB0
#define SWITCH_S1_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define SWITCH_S1_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define SWITCH_S1_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define SWITCH_S1_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define SWITCH_S1_SetPushPull()    do { ODCONBbits.ODB0 = 0; } while(0)
#define SWITCH_S1_SetOpenDrain()   do { ODCONBbits.ODB0 = 1; } while(0)
#define SWITCH_S1_SetAnalogMode()  do { ANSELBbits.ANSB0 = 1; } while(0)
#define SWITCH_S1_SetDigitalMode() do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set LED_D6 aliases
#define LED_D6_TRIS               TRISBbits.TRISB1
#define LED_D6_LAT                LATBbits.LATB1
#define LED_D6_PORT               PORTBbits.RB1
#define LED_D6_WPU                WPUBbits.WPUB1
#define LED_D6_OD                ODCONBbits.ODB1
#define LED_D6_ANS                ANSELBbits.ANSB1
#define LED_D6_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define LED_D6_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define LED_D6_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define LED_D6_GetValue()           PORTBbits.RB1
#define LED_D6_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define LED_D6_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define LED_D6_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define LED_D6_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define LED_D6_SetPushPull()    do { ODCONBbits.ODB1 = 0; } while(0)
#define LED_D6_SetOpenDrain()   do { ODCONBbits.ODB1 = 1; } while(0)
#define LED_D6_SetAnalogMode()  do { ANSELBbits.ANSB1 = 1; } while(0)
#define LED_D6_SetDigitalMode() do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set LED_D7 aliases
#define LED_D7_TRIS               TRISBbits.TRISB2
#define LED_D7_LAT                LATBbits.LATB2
#define LED_D7_PORT               PORTBbits.RB2
#define LED_D7_WPU                WPUBbits.WPUB2
#define LED_D7_OD                ODCONBbits.ODB2
#define LED_D7_ANS                ANSELBbits.ANSB2
#define LED_D7_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define LED_D7_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define LED_D7_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define LED_D7_GetValue()           PORTBbits.RB2
#define LED_D7_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define LED_D7_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define LED_D7_SetPullup()      do { WPUBbits.WPUB2 = 1; } while(0)
#define LED_D7_ResetPullup()    do { WPUBbits.WPUB2 = 0; } while(0)
#define LED_D7_SetPushPull()    do { ODCONBbits.ODB2 = 0; } while(0)
#define LED_D7_SetOpenDrain()   do { ODCONBbits.ODB2 = 1; } while(0)
#define LED_D7_SetAnalogMode()  do { ANSELBbits.ANSB2 = 1; } while(0)
#define LED_D7_SetDigitalMode() do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set LED_D8 aliases
#define LED_D8_TRIS               TRISBbits.TRISB3
#define LED_D8_LAT                LATBbits.LATB3
#define LED_D8_PORT               PORTBbits.RB3
#define LED_D8_WPU                WPUBbits.WPUB3
#define LED_D8_OD                ODCONBbits.ODB3
#define LED_D8_ANS                ANSELBbits.ANSB3
#define LED_D8_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define LED_D8_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define LED_D8_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define LED_D8_GetValue()           PORTBbits.RB3
#define LED_D8_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define LED_D8_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define LED_D8_SetPullup()      do { WPUBbits.WPUB3 = 1; } while(0)
#define LED_D8_ResetPullup()    do { WPUBbits.WPUB3 = 0; } while(0)
#define LED_D8_SetPushPull()    do { ODCONBbits.ODB3 = 0; } while(0)
#define LED_D8_SetOpenDrain()   do { ODCONBbits.ODB3 = 1; } while(0)
#define LED_D8_SetAnalogMode()  do { ANSELBbits.ANSB3 = 1; } while(0)
#define LED_D8_SetDigitalMode() do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set SCK aliases
#define SCK_TRIS               TRISCbits.TRISC3
#define SCK_LAT                LATCbits.LATC3
#define SCK_PORT               PORTCbits.RC3
#define SCK_WPU                WPUCbits.WPUC3
#define SCK_OD                ODCONCbits.ODC3
#define SCK_ANS                ANSELCbits.ANSC3
#define SCK_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCK_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCK_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCK_GetValue()           PORTCbits.RC3
#define SCK_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCK_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define SCK_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define SCK_SetPushPull()    do { ODCONCbits.ODC3 = 0; } while(0)
#define SCK_SetOpenDrain()   do { ODCONCbits.ODC3 = 1; } while(0)
#define SCK_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define SCK_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SDI aliases
#define SDI_TRIS               TRISCbits.TRISC4
#define SDI_LAT                LATCbits.LATC4
#define SDI_PORT               PORTCbits.RC4
#define SDI_WPU                WPUCbits.WPUC4
#define SDI_OD                ODCONCbits.ODC4
#define SDI_ANS                ANSELCbits.ANSC4
#define SDI_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SDI_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SDI_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SDI_GetValue()           PORTCbits.RC4
#define SDI_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SDI_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SDI_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define SDI_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define SDI_SetPushPull()    do { ODCONCbits.ODC4 = 0; } while(0)
#define SDI_SetOpenDrain()   do { ODCONCbits.ODC4 = 1; } while(0)
#define SDI_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define SDI_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set SDO aliases
#define SDO_TRIS               TRISCbits.TRISC5
#define SDO_LAT                LATCbits.LATC5
#define SDO_PORT               PORTCbits.RC5
#define SDO_WPU                WPUCbits.WPUC5
#define SDO_OD                ODCONCbits.ODC5
#define SDO_ANS                ANSELCbits.ANSC5
#define SDO_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define SDO_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define SDO_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define SDO_GetValue()           PORTCbits.RC5
#define SDO_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define SDO_SetPullup()      do { WPUCbits.WPUC5 = 1; } while(0)
#define SDO_ResetPullup()    do { WPUCbits.WPUC5 = 0; } while(0)
#define SDO_SetPushPull()    do { ODCONCbits.ODC5 = 0; } while(0)
#define SDO_SetOpenDrain()   do { ODCONCbits.ODC5 = 1; } while(0)
#define SDO_SetAnalogMode()  do { ANSELCbits.ANSC5 = 1; } while(0)
#define SDO_SetDigitalMode() do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF0 pin functionality
 * @Example
    IOCBF0_ISR();
 */
void IOCBF0_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF0 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF0 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF0_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF0 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_InterruptHandler);

*/
extern void (*IOCBF0_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF0 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF0_SetInterruptHandler() method.
    This handler is called every time the IOCBF0 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF0_SetInterruptHandler(IOCBF0_DefaultInterruptHandler);

*/
void IOCBF0_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/