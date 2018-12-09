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

// get/set error aliases
#define error_TRIS                 TRISAbits.TRISA2
#define error_LAT                  LATAbits.LATA2
#define error_PORT                 PORTAbits.RA2
#define error_WPU                  WPUAbits.WPUA2
#define error_ANS                  ANSELAbits.ANSA2
#define error_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define error_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define error_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define error_GetValue()           PORTAbits.RA2
#define error_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define error_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define error_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define error_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define error_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define error_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set A1 aliases
#define A1_TRIS                 TRISAbits.TRISA4
#define A1_LAT                  LATAbits.LATA4
#define A1_PORT                 PORTAbits.RA4
#define A1_WPU                  WPUAbits.WPUA4
#define A1_ANS                  ANSELAbits.ANSA4
#define A1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define A1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define A1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define A1_GetValue()           PORTAbits.RA4
#define A1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define A1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define A1_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define A1_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define A1_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define A1_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set B1 aliases
#define B1_TRIS                 TRISAbits.TRISA5
#define B1_LAT                  LATAbits.LATA5
#define B1_PORT                 PORTAbits.RA5
#define B1_WPU                  WPUAbits.WPUA5
#define B1_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define B1_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define B1_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define B1_GetValue()           PORTAbits.RA5
#define B1_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define B1_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define B1_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define B1_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

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

// get/set A2 aliases
#define A2_TRIS                 TRISBbits.TRISB5
#define A2_LAT                  LATBbits.LATB5
#define A2_PORT                 PORTBbits.RB5
#define A2_WPU                  WPUBbits.WPUB5
#define A2_ANS                  ANSELBbits.ANSB5
#define A2_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define A2_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define A2_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define A2_GetValue()           PORTBbits.RB5
#define A2_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define A2_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define A2_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define A2_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define A2_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define A2_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

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

// get/set B2 aliases
#define B2_TRIS                 TRISBbits.TRISB7
#define B2_LAT                  LATBbits.LATB7
#define B2_PORT                 PORTBbits.RB7
#define B2_WPU                  WPUBbits.WPUB7
#define B2_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define B2_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define B2_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define B2_GetValue()           PORTBbits.RB7
#define B2_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define B2_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define B2_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define B2_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)

// get/set EN1 aliases
#define EN1_TRIS                 TRISCbits.TRISC0
#define EN1_LAT                  LATCbits.LATC0
#define EN1_PORT                 PORTCbits.RC0
#define EN1_ANS                  ANSELCbits.ANSC0
#define EN1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define EN1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define EN1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define EN1_GetValue()           PORTCbits.RC0
#define EN1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define EN1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define EN1_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define EN1_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set EN2 aliases
#define EN2_TRIS                 TRISCbits.TRISC1
#define EN2_LAT                  LATCbits.LATC1
#define EN2_PORT                 PORTCbits.RC1
#define EN2_ANS                  ANSELCbits.ANSC1
#define EN2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define EN2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define EN2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define EN2_GetValue()           PORTCbits.RC1
#define EN2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define EN2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define EN2_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define EN2_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set DIR1 aliases
#define DIR1_TRIS                 TRISCbits.TRISC4
#define DIR1_LAT                  LATCbits.LATC4
#define DIR1_PORT                 PORTCbits.RC4
#define DIR1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define DIR1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define DIR1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define DIR1_GetValue()           PORTCbits.RC4
#define DIR1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define DIR1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

// get/set DIR2 aliases
#define DIR2_TRIS                 TRISCbits.TRISC6
#define DIR2_LAT                  LATCbits.LATC6
#define DIR2_PORT                 PORTCbits.RC6
#define DIR2_ANS                  ANSELCbits.ANSC6
#define DIR2_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define DIR2_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define DIR2_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define DIR2_GetValue()           PORTCbits.RC6
#define DIR2_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define DIR2_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define DIR2_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define DIR2_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set BONUS aliases
#define BONUS_TRIS                 TRISCbits.TRISC7
#define BONUS_LAT                  LATCbits.LATC7
#define BONUS_PORT                 PORTCbits.RC7
#define BONUS_ANS                  ANSELCbits.ANSC7
#define BONUS_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define BONUS_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define BONUS_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define BONUS_GetValue()           PORTCbits.RC7
#define BONUS_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define BONUS_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define BONUS_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define BONUS_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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
    Interrupt on Change Handler for the IOCAF2 pin functionality
 * @Example
    IOCAF2_ISR();
 */
void IOCAF2_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCAF2 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCAF2 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(MyInterruptHandler);

*/
void IOCAF2_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCAF2 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCAF2_SetInterruptHandler() method.
    This handler is called every time the IOCAF2 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(IOCAF2_InterruptHandler);

*/
extern void (*IOCAF2_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCAF2 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCAF2_SetInterruptHandler() method.
    This handler is called every time the IOCAF2 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCAF2_SetInterruptHandler(IOCAF2_DefaultInterruptHandler);

*/
void IOCAF2_DefaultInterruptHandler(void);


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
    Interrupt on Change Handler for the IOCBF5 pin functionality
 * @Example
    IOCBF5_ISR();
 */
void IOCBF5_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF5 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF5 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF5_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF5 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF5_SetInterruptHandler() method.
    This handler is called every time the IOCBF5 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(IOCBF5_InterruptHandler);

*/
extern void (*IOCBF5_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF5 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF5_SetInterruptHandler() method.
    This handler is called every time the IOCBF5 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF5_SetInterruptHandler(IOCBF5_DefaultInterruptHandler);

*/
void IOCBF5_DefaultInterruptHandler(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCBF7 pin functionality
 * @Example
    IOCBF7_ISR();
 */
void IOCBF7_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCBF7 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCBF7 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(MyInterruptHandler);

*/
void IOCBF7_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCBF7 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCBF7_SetInterruptHandler() method.
    This handler is called every time the IOCBF7 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(IOCBF7_InterruptHandler);

*/
extern void (*IOCBF7_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCBF7 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCBF7_SetInterruptHandler() method.
    This handler is called every time the IOCBF7 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCBF7_SetInterruptHandler(IOCBF7_DefaultInterruptHandler);

*/
void IOCBF7_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/