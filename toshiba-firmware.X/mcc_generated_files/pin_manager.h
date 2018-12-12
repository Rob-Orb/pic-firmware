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
        Device            :  PIC16F1777
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

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSA1 = 0; } while(0)

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

// get/set RA3 procedures
#define RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define RA3_GetValue()              PORTAbits.RA3
#define RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define RA3_SetPullup()             do { WPUAbits.WPUA3 = 1; } while(0)
#define RA3_ResetPullup()           do { WPUAbits.WPUA3 = 0; } while(0)
#define RA3_SetAnalogMode()         do { ANSELAbits.ANSA3 = 1; } while(0)
#define RA3_SetDigitalMode()        do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set A1 aliases
#define A1_TRIS                 TRISAbits.TRISA4
#define A1_LAT                  LATAbits.LATA4
#define A1_PORT                 PORTAbits.RA4
#define A1_WPU                  WPUAbits.WPUA4
#define A1_OD                   ODCONAbits.ODA4
#define A1_ANS                  ANSELAbits.ANSA4
#define A1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define A1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define A1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define A1_GetValue()           PORTAbits.RA4
#define A1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define A1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define A1_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define A1_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define A1_SetPushPull()        do { ODCONAbits.ODA4 = 0; } while(0)
#define A1_SetOpenDrain()       do { ODCONAbits.ODA4 = 1; } while(0)
#define A1_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define A1_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set B1 aliases
#define B1_TRIS                 TRISAbits.TRISA5
#define B1_LAT                  LATAbits.LATA5
#define B1_PORT                 PORTAbits.RA5
#define B1_WPU                  WPUAbits.WPUA5
#define B1_OD                   ODCONAbits.ODA5
#define B1_ANS                  ANSELAbits.ANSA5
#define B1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define B1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define B1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define B1_GetValue()           PORTAbits.RA5
#define B1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define B1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define B1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define B1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define B1_SetPushPull()        do { ODCONAbits.ODA5 = 0; } while(0)
#define B1_SetOpenDrain()       do { ODCONAbits.ODA5 = 1; } while(0)
#define B1_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define B1_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set A2 aliases
#define A2_TRIS                 TRISAbits.TRISA6
#define A2_LAT                  LATAbits.LATA6
#define A2_PORT                 PORTAbits.RA6
#define A2_WPU                  WPUAbits.WPUA6
#define A2_OD                   ODCONAbits.ODA6
#define A2_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define A2_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define A2_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define A2_GetValue()           PORTAbits.RA6
#define A2_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define A2_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)
#define A2_SetPullup()          do { WPUAbits.WPUA6 = 1; } while(0)
#define A2_ResetPullup()        do { WPUAbits.WPUA6 = 0; } while(0)
#define A2_SetPushPull()        do { ODCONAbits.ODA6 = 0; } while(0)
#define A2_SetOpenDrain()       do { ODCONAbits.ODA6 = 1; } while(0)

// get/set B2 aliases
#define B2_TRIS                 TRISAbits.TRISA7
#define B2_LAT                  LATAbits.LATA7
#define B2_PORT                 PORTAbits.RA7
#define B2_WPU                  WPUAbits.WPUA7
#define B2_OD                   ODCONAbits.ODA7
#define B2_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define B2_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define B2_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define B2_GetValue()           PORTAbits.RA7
#define B2_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define B2_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)
#define B2_SetPullup()          do { WPUAbits.WPUA7 = 1; } while(0)
#define B2_ResetPullup()        do { WPUAbits.WPUA7 = 0; } while(0)
#define B2_SetPushPull()        do { ODCONAbits.ODA7 = 0; } while(0)
#define B2_SetOpenDrain()       do { ODCONAbits.ODA7 = 1; } while(0)

// get/set A3 aliases
#define A3_TRIS                 TRISBbits.TRISB0
#define A3_LAT                  LATBbits.LATB0
#define A3_PORT                 PORTBbits.RB0
#define A3_WPU                  WPUBbits.WPUB0
#define A3_OD                   ODCONBbits.ODB0
#define A3_ANS                  ANSELBbits.ANSB0
#define A3_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define A3_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define A3_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define A3_GetValue()           PORTBbits.RB0
#define A3_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define A3_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define A3_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define A3_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define A3_SetPushPull()        do { ODCONBbits.ODB0 = 0; } while(0)
#define A3_SetOpenDrain()       do { ODCONBbits.ODB0 = 1; } while(0)
#define A3_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define A3_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set B3 aliases
#define B3_TRIS                 TRISBbits.TRISB1
#define B3_LAT                  LATBbits.LATB1
#define B3_PORT                 PORTBbits.RB1
#define B3_WPU                  WPUBbits.WPUB1
#define B3_OD                   ODCONBbits.ODB1
#define B3_ANS                  ANSELBbits.ANSB1
#define B3_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define B3_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define B3_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define B3_GetValue()           PORTBbits.RB1
#define B3_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define B3_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define B3_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define B3_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define B3_SetPushPull()        do { ODCONBbits.ODB1 = 0; } while(0)
#define B3_SetOpenDrain()       do { ODCONBbits.ODB1 = 1; } while(0)
#define B3_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define B3_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set A4 aliases
#define A4_TRIS                 TRISBbits.TRISB2
#define A4_LAT                  LATBbits.LATB2
#define A4_PORT                 PORTBbits.RB2
#define A4_WPU                  WPUBbits.WPUB2
#define A4_OD                   ODCONBbits.ODB2
#define A4_ANS                  ANSELBbits.ANSB2
#define A4_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define A4_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define A4_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define A4_GetValue()           PORTBbits.RB2
#define A4_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define A4_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define A4_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define A4_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define A4_SetPushPull()        do { ODCONBbits.ODB2 = 0; } while(0)
#define A4_SetOpenDrain()       do { ODCONBbits.ODB2 = 1; } while(0)
#define A4_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define A4_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set B4 aliases
#define B4_TRIS                 TRISBbits.TRISB3
#define B4_LAT                  LATBbits.LATB3
#define B4_PORT                 PORTBbits.RB3
#define B4_WPU                  WPUBbits.WPUB3
#define B4_OD                   ODCONBbits.ODB3
#define B4_ANS                  ANSELBbits.ANSB3
#define B4_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define B4_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define B4_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define B4_GetValue()           PORTBbits.RB3
#define B4_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define B4_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define B4_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define B4_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define B4_SetPushPull()        do { ODCONBbits.ODB3 = 0; } while(0)
#define B4_SetOpenDrain()       do { ODCONBbits.ODB3 = 1; } while(0)
#define B4_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define B4_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set BONUS aliases
#define BONUS_TRIS                 TRISBbits.TRISB4
#define BONUS_LAT                  LATBbits.LATB4
#define BONUS_PORT                 PORTBbits.RB4
#define BONUS_WPU                  WPUBbits.WPUB4
#define BONUS_OD                   ODCONBbits.ODB4
#define BONUS_ANS                  ANSELBbits.ANSB4
#define BONUS_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define BONUS_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define BONUS_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define BONUS_GetValue()           PORTBbits.RB4
#define BONUS_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define BONUS_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define BONUS_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define BONUS_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define BONUS_SetPushPull()        do { ODCONBbits.ODB4 = 0; } while(0)
#define BONUS_SetOpenDrain()       do { ODCONBbits.ODB4 = 1; } while(0)
#define BONUS_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define BONUS_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set SCL aliases
#define SCL_TRIS                 TRISCbits.TRISC3
#define SCL_LAT                  LATCbits.LATC3
#define SCL_PORT                 PORTCbits.RC3
#define SCL_WPU                  WPUCbits.WPUC3
#define SCL_OD                   ODCONCbits.ODC3
#define SCL_ANS                  ANSELCbits.ANSC3
#define SCL_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SCL_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SCL_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SCL_GetValue()           PORTCbits.RC3
#define SCL_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SCL_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SCL_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SCL_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SCL_SetPushPull()        do { ODCONCbits.ODC3 = 0; } while(0)
#define SCL_SetOpenDrain()       do { ODCONCbits.ODC3 = 1; } while(0)
#define SCL_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SCL_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SDA aliases
#define SDA_TRIS                 TRISCbits.TRISC4
#define SDA_LAT                  LATCbits.LATC4
#define SDA_PORT                 PORTCbits.RC4
#define SDA_WPU                  WPUCbits.WPUC4
#define SDA_OD                   ODCONCbits.ODC4
#define SDA_ANS                  ANSELCbits.ANSC4
#define SDA_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SDA_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SDA_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SDA_GetValue()           PORTCbits.RC4
#define SDA_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SDA_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SDA_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SDA_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SDA_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define SDA_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)
#define SDA_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define SDA_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set INA1 aliases
#define INA1_TRIS                 TRISDbits.TRISD0
#define INA1_LAT                  LATDbits.LATD0
#define INA1_PORT                 PORTDbits.RD0
#define INA1_WPU                  WPUDbits.WPUD0
#define INA1_OD                   ODCONDbits.ODD0
#define INA1_ANS                  ANSELDbits.ANSD0
#define INA1_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define INA1_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define INA1_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define INA1_GetValue()           PORTDbits.RD0
#define INA1_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define INA1_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define INA1_SetPullup()          do { WPUDbits.WPUD0 = 1; } while(0)
#define INA1_ResetPullup()        do { WPUDbits.WPUD0 = 0; } while(0)
#define INA1_SetPushPull()        do { ODCONDbits.ODD0 = 0; } while(0)
#define INA1_SetOpenDrain()       do { ODCONDbits.ODD0 = 1; } while(0)
#define INA1_SetAnalogMode()      do { ANSELDbits.ANSD0 = 1; } while(0)
#define INA1_SetDigitalMode()     do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set INA2 aliases
#define INA2_TRIS                 TRISDbits.TRISD1
#define INA2_LAT                  LATDbits.LATD1
#define INA2_PORT                 PORTDbits.RD1
#define INA2_WPU                  WPUDbits.WPUD1
#define INA2_OD                   ODCONDbits.ODD1
#define INA2_ANS                  ANSELDbits.ANSD1
#define INA2_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define INA2_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define INA2_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define INA2_GetValue()           PORTDbits.RD1
#define INA2_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define INA2_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define INA2_SetPullup()          do { WPUDbits.WPUD1 = 1; } while(0)
#define INA2_ResetPullup()        do { WPUDbits.WPUD1 = 0; } while(0)
#define INA2_SetPushPull()        do { ODCONDbits.ODD1 = 0; } while(0)
#define INA2_SetOpenDrain()       do { ODCONDbits.ODD1 = 1; } while(0)
#define INA2_SetAnalogMode()      do { ANSELDbits.ANSD1 = 1; } while(0)
#define INA2_SetDigitalMode()     do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set INB1 aliases
#define INB1_TRIS                 TRISDbits.TRISD2
#define INB1_LAT                  LATDbits.LATD2
#define INB1_PORT                 PORTDbits.RD2
#define INB1_WPU                  WPUDbits.WPUD2
#define INB1_OD                   ODCONDbits.ODD2
#define INB1_ANS                  ANSELDbits.ANSD2
#define INB1_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define INB1_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define INB1_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define INB1_GetValue()           PORTDbits.RD2
#define INB1_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define INB1_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define INB1_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define INB1_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define INB1_SetPushPull()        do { ODCONDbits.ODD2 = 0; } while(0)
#define INB1_SetOpenDrain()       do { ODCONDbits.ODD2 = 1; } while(0)
#define INB1_SetAnalogMode()      do { ANSELDbits.ANSD2 = 1; } while(0)
#define INB1_SetDigitalMode()     do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set INB2 aliases
#define INB2_TRIS                 TRISDbits.TRISD3
#define INB2_LAT                  LATDbits.LATD3
#define INB2_PORT                 PORTDbits.RD3
#define INB2_WPU                  WPUDbits.WPUD3
#define INB2_OD                   ODCONDbits.ODD3
#define INB2_ANS                  ANSELDbits.ANSD3
#define INB2_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define INB2_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define INB2_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define INB2_GetValue()           PORTDbits.RD3
#define INB2_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define INB2_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define INB2_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define INB2_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define INB2_SetPushPull()        do { ODCONDbits.ODD3 = 0; } while(0)
#define INB2_SetOpenDrain()       do { ODCONDbits.ODD3 = 1; } while(0)
#define INB2_SetAnalogMode()      do { ANSELDbits.ANSD3 = 1; } while(0)
#define INB2_SetDigitalMode()     do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set INA3 aliases
#define INA3_TRIS                 TRISDbits.TRISD4
#define INA3_LAT                  LATDbits.LATD4
#define INA3_PORT                 PORTDbits.RD4
#define INA3_WPU                  WPUDbits.WPUD4
#define INA3_OD                   ODCONDbits.ODD4
#define INA3_ANS                  ANSELDbits.ANSD4
#define INA3_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define INA3_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define INA3_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define INA3_GetValue()           PORTDbits.RD4
#define INA3_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define INA3_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define INA3_SetPullup()          do { WPUDbits.WPUD4 = 1; } while(0)
#define INA3_ResetPullup()        do { WPUDbits.WPUD4 = 0; } while(0)
#define INA3_SetPushPull()        do { ODCONDbits.ODD4 = 0; } while(0)
#define INA3_SetOpenDrain()       do { ODCONDbits.ODD4 = 1; } while(0)
#define INA3_SetAnalogMode()      do { ANSELDbits.ANSD4 = 1; } while(0)
#define INA3_SetDigitalMode()     do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set INA4 aliases
#define INA4_TRIS                 TRISDbits.TRISD5
#define INA4_LAT                  LATDbits.LATD5
#define INA4_PORT                 PORTDbits.RD5
#define INA4_WPU                  WPUDbits.WPUD5
#define INA4_OD                   ODCONDbits.ODD5
#define INA4_ANS                  ANSELDbits.ANSD5
#define INA4_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define INA4_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define INA4_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define INA4_GetValue()           PORTDbits.RD5
#define INA4_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define INA4_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define INA4_SetPullup()          do { WPUDbits.WPUD5 = 1; } while(0)
#define INA4_ResetPullup()        do { WPUDbits.WPUD5 = 0; } while(0)
#define INA4_SetPushPull()        do { ODCONDbits.ODD5 = 0; } while(0)
#define INA4_SetOpenDrain()       do { ODCONDbits.ODD5 = 1; } while(0)
#define INA4_SetAnalogMode()      do { ANSELDbits.ANSD5 = 1; } while(0)
#define INA4_SetDigitalMode()     do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set INB3 aliases
#define INB3_TRIS                 TRISDbits.TRISD6
#define INB3_LAT                  LATDbits.LATD6
#define INB3_PORT                 PORTDbits.RD6
#define INB3_WPU                  WPUDbits.WPUD6
#define INB3_OD                   ODCONDbits.ODD6
#define INB3_ANS                  ANSELDbits.ANSD6
#define INB3_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define INB3_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define INB3_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define INB3_GetValue()           PORTDbits.RD6
#define INB3_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define INB3_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define INB3_SetPullup()          do { WPUDbits.WPUD6 = 1; } while(0)
#define INB3_ResetPullup()        do { WPUDbits.WPUD6 = 0; } while(0)
#define INB3_SetPushPull()        do { ODCONDbits.ODD6 = 0; } while(0)
#define INB3_SetOpenDrain()       do { ODCONDbits.ODD6 = 1; } while(0)
#define INB3_SetAnalogMode()      do { ANSELDbits.ANSD6 = 1; } while(0)
#define INB3_SetDigitalMode()     do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set INB4 aliases
#define INB4_TRIS                 TRISDbits.TRISD7
#define INB4_LAT                  LATDbits.LATD7
#define INB4_PORT                 PORTDbits.RD7
#define INB4_WPU                  WPUDbits.WPUD7
#define INB4_OD                   ODCONDbits.ODD7
#define INB4_ANS                  ANSELDbits.ANSD7
#define INB4_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define INB4_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define INB4_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define INB4_GetValue()           PORTDbits.RD7
#define INB4_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define INB4_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define INB4_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define INB4_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define INB4_SetPushPull()        do { ODCONDbits.ODD7 = 0; } while(0)
#define INB4_SetOpenDrain()       do { ODCONDbits.ODD7 = 1; } while(0)
#define INB4_SetAnalogMode()      do { ANSELDbits.ANSD7 = 1; } while(0)
#define INB4_SetDigitalMode()     do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set EN1 aliases
#define EN1_TRIS                 TRISEbits.TRISE0
#define EN1_LAT                  LATEbits.LATE0
#define EN1_PORT                 PORTEbits.RE0
#define EN1_WPU                  WPUEbits.WPUE0
#define EN1_OD                   ODCONEbits.ODE0
#define EN1_ANS                  ANSELEbits.ANSE0
#define EN1_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define EN1_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define EN1_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define EN1_GetValue()           PORTEbits.RE0
#define EN1_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define EN1_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define EN1_SetPullup()          do { WPUEbits.WPUE0 = 1; } while(0)
#define EN1_ResetPullup()        do { WPUEbits.WPUE0 = 0; } while(0)
#define EN1_SetPushPull()        do { ODCONEbits.ODE0 = 0; } while(0)
#define EN1_SetOpenDrain()       do { ODCONEbits.ODE0 = 1; } while(0)
#define EN1_SetAnalogMode()      do { ANSELEbits.ANSE0 = 1; } while(0)
#define EN1_SetDigitalMode()     do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set EN2 aliases
#define EN2_TRIS                 TRISEbits.TRISE1
#define EN2_LAT                  LATEbits.LATE1
#define EN2_PORT                 PORTEbits.RE1
#define EN2_WPU                  WPUEbits.WPUE1
#define EN2_OD                   ODCONEbits.ODE1
#define EN2_ANS                  ANSELEbits.ANSE1
#define EN2_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define EN2_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define EN2_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define EN2_GetValue()           PORTEbits.RE1
#define EN2_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define EN2_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define EN2_SetPullup()          do { WPUEbits.WPUE1 = 1; } while(0)
#define EN2_ResetPullup()        do { WPUEbits.WPUE1 = 0; } while(0)
#define EN2_SetPushPull()        do { ODCONEbits.ODE1 = 0; } while(0)
#define EN2_SetOpenDrain()       do { ODCONEbits.ODE1 = 1; } while(0)
#define EN2_SetAnalogMode()      do { ANSELEbits.ANSE1 = 1; } while(0)
#define EN2_SetDigitalMode()     do { ANSELEbits.ANSE1 = 0; } while(0)

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
    Interrupt on Change Handler for the IOCAF4 pin functionality
 * @Example
    IOCAF4_ISR();
 */
void IOCAF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_InterruptHandler);

*/
extern void (*IOCAF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF4_SetInterruptHandler() method.
    This handler is called every time the IOCAF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF4_SetInterruptHandler(IOCAF4_DefaultInterruptHandler);

*/
void IOCAF4_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF5 pin functionality
 * @Example
    IOCAF5_ISR();
 */
void IOCAF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF5_SetInterruptHandler() method.
    This handler is called every time the IOCAF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(IOCAF5_InterruptHandler);

*/
extern void (*IOCAF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF5_SetInterruptHandler() method.
    This handler is called every time the IOCAF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF5_SetInterruptHandler(IOCAF5_DefaultInterruptHandler);

*/
void IOCAF5_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF6 pin functionality
 * @Example
    IOCAF6_ISR();
 */
void IOCAF6_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF6 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF6 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF6_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF6_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF6 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF6_SetInterruptHandler() method.
    This handler is called every time the IOCAF6 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF6_SetInterruptHandler(IOCAF6_InterruptHandler);

*/
extern void (*IOCAF6_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF6 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF6_SetInterruptHandler() method.
    This handler is called every time the IOCAF6 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF6_SetInterruptHandler(IOCAF6_DefaultInterruptHandler);

*/
void IOCAF6_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCAF7 pin functionality
 * @Example
    IOCAF7_ISR();
 */
void IOCAF7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF7_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF7_SetInterruptHandler() method.
    This handler is called every time the IOCAF7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF7_SetInterruptHandler(IOCAF7_InterruptHandler);

*/
extern void (*IOCAF7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF7_SetInterruptHandler() method.
    This handler is called every time the IOCAF7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF7_SetInterruptHandler(IOCAF7_DefaultInterruptHandler);

*/
void IOCAF7_DefaultInterruptHandler(void);


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


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF1 pin functionality
 * @Example
    IOCBF1_ISR();
 */
void IOCBF1_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF1 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF1 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF1_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF1 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF1_SetInterruptHandler() method.
    This handler is called every time the IOCBF1 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF1_SetInterruptHandler(IOCBF1_InterruptHandler);

*/
extern void (*IOCBF1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF1 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF1_SetInterruptHandler() method.
    This handler is called every time the IOCBF1 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF1_SetInterruptHandler(IOCBF1_DefaultInterruptHandler);

*/
void IOCBF1_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF2 pin functionality
 * @Example
    IOCBF2_ISR();
 */
void IOCBF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF2_SetInterruptHandler() method.
    This handler is called every time the IOCBF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF2_SetInterruptHandler(IOCBF2_InterruptHandler);

*/
extern void (*IOCBF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF2_SetInterruptHandler() method.
    This handler is called every time the IOCBF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF2_SetInterruptHandler(IOCBF2_DefaultInterruptHandler);

*/
void IOCBF2_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF3 pin functionality
 * @Example
    IOCBF3_ISR();
 */
void IOCBF3_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF3 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF3 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF3_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF3_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF3 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF3_SetInterruptHandler() method.
    This handler is called every time the IOCBF3 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF3_SetInterruptHandler(IOCBF3_InterruptHandler);

*/
extern void (*IOCBF3_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF3 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF3_SetInterruptHandler() method.
    This handler is called every time the IOCBF3 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF3_SetInterruptHandler(IOCBF3_DefaultInterruptHandler);

*/
void IOCBF3_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/