/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1509
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
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

// get/set channel_AN0 aliases
#define channel_AN0_TRIS                 TRISAbits.TRISA0
#define channel_AN0_LAT                  LATAbits.LATA0
#define channel_AN0_PORT                 PORTAbits.RA0
#define channel_AN0_WPU                  WPUAbits.WPUA0
#define channel_AN0_ANS                  ANSELAbits.ANSA0
#define channel_AN0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define channel_AN0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define channel_AN0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define channel_AN0_GetValue()           PORTAbits.RA0
#define channel_AN0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define channel_AN0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define channel_AN0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define channel_AN0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define channel_AN0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define channel_AN0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set channel_AN1 aliases
#define channel_AN1_TRIS                 TRISAbits.TRISA1
#define channel_AN1_LAT                  LATAbits.LATA1
#define channel_AN1_PORT                 PORTAbits.RA1
#define channel_AN1_WPU                  WPUAbits.WPUA1
#define channel_AN1_ANS                  ANSELAbits.ANSA1
#define channel_AN1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define channel_AN1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define channel_AN1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define channel_AN1_GetValue()           PORTAbits.RA1
#define channel_AN1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define channel_AN1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define channel_AN1_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define channel_AN1_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define channel_AN1_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define channel_AN1_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set channel_AN3 aliases
#define channel_AN3_TRIS                 TRISAbits.TRISA4
#define channel_AN3_LAT                  LATAbits.LATA4
#define channel_AN3_PORT                 PORTAbits.RA4
#define channel_AN3_WPU                  WPUAbits.WPUA4
#define channel_AN3_ANS                  ANSELAbits.ANSA4
#define channel_AN3_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define channel_AN3_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define channel_AN3_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define channel_AN3_GetValue()           PORTAbits.RA4
#define channel_AN3_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define channel_AN3_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define channel_AN3_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define channel_AN3_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define channel_AN3_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define channel_AN3_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set IO_RA5 aliases
#define IO_RA5_TRIS                 TRISAbits.TRISA5
#define IO_RA5_LAT                  LATAbits.LATA5
#define IO_RA5_PORT                 PORTAbits.RA5
#define IO_RA5_WPU                  WPUAbits.WPUA5
#define IO_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_RA5_GetValue()           PORTAbits.RA5
#define IO_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_RA5_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define IO_RA5_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

// get/set SDA aliases
#define SDA_TRIS                 TRISBbits.TRISB4
#define SDA_LAT                  LATBbits.LATB4
#define SDA_PORT                 PORTBbits.RB4
#define SDA_WPU                  WPUBbits.WPUB4
#define SDA_ANS                  ANSELBbits.ANSB4
#define SDA_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define SDA_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define SDA_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define SDA_GetValue()           PORTBbits.RB4
#define SDA_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define SDA_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define SDA_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define SDA_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define SDA_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define SDA_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set channel_AN11 aliases
#define channel_AN11_TRIS                 TRISBbits.TRISB5
#define channel_AN11_LAT                  LATBbits.LATB5
#define channel_AN11_PORT                 PORTBbits.RB5
#define channel_AN11_WPU                  WPUBbits.WPUB5
#define channel_AN11_ANS                  ANSELBbits.ANSB5
#define channel_AN11_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define channel_AN11_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define channel_AN11_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define channel_AN11_GetValue()           PORTBbits.RB5
#define channel_AN11_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define channel_AN11_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define channel_AN11_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define channel_AN11_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define channel_AN11_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define channel_AN11_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set SCL aliases
#define SCL_TRIS                 TRISBbits.TRISB6
#define SCL_LAT                  LATBbits.LATB6
#define SCL_PORT                 PORTBbits.RB6
#define SCL_WPU                  WPUBbits.WPUB6
#define SCL_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define SCL_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define SCL_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define SCL_GetValue()           PORTBbits.RB6
#define SCL_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define SCL_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define SCL_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define SCL_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)

// get/set IO_RB7 aliases
#define IO_RB7_TRIS                 TRISBbits.TRISB7
#define IO_RB7_LAT                  LATBbits.LATB7
#define IO_RB7_PORT                 PORTBbits.RB7
#define IO_RB7_WPU                  WPUBbits.WPUB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)

// get/set channel_AN4 aliases
#define channel_AN4_TRIS                 TRISCbits.TRISC0
#define channel_AN4_LAT                  LATCbits.LATC0
#define channel_AN4_PORT                 PORTCbits.RC0
#define channel_AN4_ANS                  ANSELCbits.ANSC0
#define channel_AN4_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define channel_AN4_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define channel_AN4_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define channel_AN4_GetValue()           PORTCbits.RC0
#define channel_AN4_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define channel_AN4_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define channel_AN4_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define channel_AN4_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set RC1 procedures
#define RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RC1_GetValue()              PORTCbits.RC1
#define RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define RC1_SetAnalogMode()         do { ANSELCbits.ANSC1 = 1; } while(0)
#define RC1_SetDigitalMode()        do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set channel_AN6 aliases
#define channel_AN6_TRIS                 TRISCbits.TRISC2
#define channel_AN6_LAT                  LATCbits.LATC2
#define channel_AN6_PORT                 PORTCbits.RC2
#define channel_AN6_ANS                  ANSELCbits.ANSC2
#define channel_AN6_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define channel_AN6_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define channel_AN6_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define channel_AN6_GetValue()           PORTCbits.RC2
#define channel_AN6_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define channel_AN6_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define channel_AN6_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define channel_AN6_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set IO_RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

// get/set channel_AN8 aliases
#define channel_AN8_TRIS                 TRISCbits.TRISC6
#define channel_AN8_LAT                  LATCbits.LATC6
#define channel_AN8_PORT                 PORTCbits.RC6
#define channel_AN8_ANS                  ANSELCbits.ANSC6
#define channel_AN8_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define channel_AN8_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define channel_AN8_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define channel_AN8_GetValue()           PORTCbits.RC6
#define channel_AN8_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define channel_AN8_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define channel_AN8_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define channel_AN8_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set channel_AN9 aliases
#define channel_AN9_TRIS                 TRISCbits.TRISC7
#define channel_AN9_LAT                  LATCbits.LATC7
#define channel_AN9_PORT                 PORTCbits.RC7
#define channel_AN9_ANS                  ANSELCbits.ANSC7
#define channel_AN9_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define channel_AN9_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define channel_AN9_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define channel_AN9_GetValue()           PORTCbits.RC7
#define channel_AN9_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define channel_AN9_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define channel_AN9_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define channel_AN9_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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



#endif // PIN_MANAGER_H
/**
 End of File
*/