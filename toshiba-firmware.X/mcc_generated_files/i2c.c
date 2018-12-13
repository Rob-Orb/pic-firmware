/**
  MSSP Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    i2c.c

  @Summary
    This is the generated header file for the MSSP driver using 
    PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for I2C.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1777
        Driver Version    :  2.01
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

#include "i2c.h"
#include "../config.h"
#include "pin_manager.h"
#include "pwm3.h"
#include "pwm4.h"
#include "pwm9.h"
#include "pwm10.h"
#include "tmr1.h"
#include "tmr3.h"
#include "tmr4.h"
#include "tmr5.h"

#define I2C_SLAVE_ADDRESS 0x0A 
#define I2C_SLAVE_MASK    0x7F

typedef enum
{
    SLAVE_NORMAL_DATA,
    SLAVE_DATA_ADDRESS,
} SLAVE_WRITE_DATA_TYPE;

/**
 Section: Global Variables
*/

volatile uint8_t    I2C_slaveWriteData      = 0x55;

/**
 Section: Local Functions
*/
void I2C_StatusCallback(I2C_SLAVE_DRIVER_STATUS i2c_bus_state);


/**
  Prototype:        void I2C_Initialize(void)
  Input:            none
  Output:           none
  Description:      I2C_Initialize is an
                    initialization routine that takes inputs from the GUI.
  Comment:          
  Usage:            I2C_Initialize();

*/
void I2C_Initialize(void)
{
    // initialize the hardware
    // R_nW write_noTX; P stopbit_notdetected; S startbit_notdetected; BF RCinprocess_TXcomplete; SMP High Speed; UA dontupdate; CKE disabled; D_nA lastbyte_address; 
    SSP1STAT = 0x00;
    // SSPEN enabled; WCOL no_collision; CKP disabled; SSPM 7 Bit Polling; SSPOV no_overflow; 
    SSP1CON1 = 0x26;
    // ACKEN disabled; GCEN disabled; PEN disabled; ACKDT acknowledge; RSEN disabled; RCEN disabled; ACKSTAT received; SEN enabled; 
    SSP1CON2 = 0x01;
    // ACKTIM ackseq; SBCDE disabled; BOEN disabled; SCIE disabled; PCIE disabled; DHEN disabled; SDAHT 100ns; AHEN disabled; 
    SSP1CON3 = 0x00;
    // SSP1MSK 127; 
    SSP1MSK = 0x7F;
    // SSP1ADD 10; 
    SSP1ADD = 0x0A;
	
    // clear the slave interrupt flag
    PIR1bits.SSP1IF = 0;
    // enable the master interrupt
    PIE1bits.SSP1IE = 1;

}

void I2C_ISR ( void )
{
    uint8_t     i2c_data                = 0x55;


    // NOTE: The slave driver will always acknowledge
    //       any address match.

    PIR1bits.SSP1IF = 0;        // clear the slave interrupt flag
    i2c_data        = SSP1BUF;  // read SSPBUF to clear BF
    if(1 == SSP1STATbits.R_nW)
    {
        if((1 == SSP1STATbits.D_nA) && (1 == SSP1CON2bits.ACKSTAT))
        {
            // callback routine can perform any post-read processing
            I2C_StatusCallback(I2C_SLAVE_READ_COMPLETED);
        }
        else
        {
            // callback routine should write data into SSPBUF
            I2C_StatusCallback(I2C_SLAVE_READ_REQUEST);
        }
    }
    else if(0 == SSP1STATbits.D_nA)
    {
        // this is an I2C address

        // callback routine should prepare to receive data from the master
        I2C_StatusCallback(I2C_SLAVE_WRITE_REQUEST);
    }
    else
    {
        I2C_slaveWriteData   = i2c_data;

        // callback routine should process I2C_slaveWriteData from the master
        I2C_StatusCallback(I2C_SLAVE_WRITE_COMPLETED);
    }

    SSP1CON1bits.CKP    = 1;    // release SCL

} // end I2C_ISR()



/**

    Example implementation of the callback

    This slave driver emulates an EEPROM Device.
    Sequential reads from the EEPROM will return data at the next
    EEPROM address.

    Random access reads can be performed by writing a single byte
    EEPROM address, followed by 1 or more reads.

    Random access writes can be performed by writing a single byte
    EEPROM address, followed by 1 or more writes.

    Every read or write will increment the internal EEPROM address.

    When the end of the EEPROM is reached, the EEPROM address will
    continue from the start of the EEPROM.
*/
uint8_t motorCurrent = 0;
uint8_t motorPwm = 0;
uint8_t motorDir = 0;

bool activateMotor = false;

uint8_t readData = 0;

uint8_t activateControl = 0;
uint8_t input1 = 0;
uint8_t input2 = 0;
uint8_t input3 = 0;
uint8_t input4 = 0;

uint8_t state1 = 0;
uint8_t state2 = 0;
uint8_t state3 = 0;
uint8_t state4 = 0;

long curencoder1 = 0;
long curencoder2 = 0;
long curencoder3 = 0;
long curencoder4 = 0;

uint8_t bitReading = 0;

void I2C_updateValues(){
    switch(motorCurrent){
        case 0:
            activateControl &= 0xF5; // Removing Speed and Position control to motor 1
            if(activateMotor){
                PWM3_LoadDutyValue(motorPwm*4);
                state1 = STATE_MOVING;
                TMR1_Reload();
            }
            
            if((motorDir >> 1) > 0){
                do { LATDbits.LATD0 = (motorDir & 0x01); } while(0);
                do { LATDbits.LATD1 = ~(motorDir & 0x01); } while(0);
            }
            EN1_SetHigh();
            break;
        case 1:
            activateControl &= 0xFA; // Removing Speed and Position control to motor 2
            if(activateMotor){
                PWM4_LoadDutyValue(motorPwm*4);
                state2 = STATE_MOVING;
                TMR3_Reload();
            }
            
            if((motorDir >> 1) > 0){
                do { LATDbits.LATD2 = (motorDir & 0x01); } while(0);
                do { LATDbits.LATD3 = ~(motorDir & 0x01); } while(0);
            }
            EN1_SetHigh();
            break;
        case 2:
            activateControl &= 0xFA; // Removing Speed and Position control to motor 2
            if(activateMotor){
                PWM9_LoadDutyValue(motorPwm*4);
                state3 = STATE_MOVING;
                TMR4_Reload();
            }
            
            if((motorDir >> 1) > 0){
                do { LATDbits.LATD4 = (motorDir & 0x01); } while(0);
                do { LATDbits.LATD5 = ~(motorDir & 0x01); } while(0);
            }
            EN2_SetHigh();
            break;
        case 3:
            activateControl &= 0xFA; // Removing Speed and Position control to motor 2
            if(activateMotor){
                PWM10_LoadDutyValue(motorPwm*4);
                state4 = STATE_MOVING;
                TMR5_Reload();
            }
            
            if((motorDir >> 1) > 0){
                do { LATDbits.LATD6 = (motorDir & 0x01); } while(0);
                do { LATDbits.LATD7 = ~(motorDir & 0x01); } while(0);
            }
            EN2_SetHigh();
            break;
        //case 0:
        default:
            activateControl = 0; // Removing Speed and Position control
            if(activateMotor){
                PWM3_LoadDutyValue(motorPwm*4);
                PWM4_LoadDutyValue(motorPwm*4);
                PWM9_LoadDutyValue(motorPwm*4);
                PWM10_LoadDutyValue(motorPwm*4);
                state1 = STATE_MOVING;
                state2 = STATE_MOVING;
                state3 = STATE_MOVING;
                state4 = STATE_MOVING;
                TMR1_Reload();
                TMR3_Reload();
                TMR4_Reload();
                TMR5_Reload();
            }
            
            if((motorDir >> 1) > 0){
                do { LATDbits.LATD0 = (motorDir & 0x01); } while(0);
                do { LATDbits.LATD1 = ~(motorDir & 0x01); } while(0);
                do { LATDbits.LATD2 = (motorDir & 0x01); } while(0);
                do { LATDbits.LATD3 = ~(motorDir & 0x01); } while(0);
                do { LATDbits.LATD4 = (motorDir & 0x01); } while(0);
                do { LATDbits.LATD5 = ~(motorDir & 0x01); } while(0);
                do { LATDbits.LATD6 = (motorDir & 0x01); } while(0);
                do { LATDbits.LATD7 = ~(motorDir & 0x01); } while(0);
            }
            EN1_SetHigh();
            EN2_SetHigh();
            break;
    }
    activateMotor = false;
}

void I2C_Control(uint8_t currentMotor, uint8_t data){
    switch(currentMotor){
        case 1:
            input1 = data;
            curencoder1 = encoder1;
            state1 = STATE_MOVING;
            TMR0_Reload();
            break;
        case 2:
            input2 = data;
            curencoder2 = encoder2;
            state2 = STATE_MOVING;
            TMR1_Reload();
            break;
        case 0:
            break;
        case 3:
        default:
            input1 = data;
            input2 = data;
            curencoder1 = encoder1;
            curencoder2 = encoder2;
            state1 = STATE_MOVING;
            state2 = STATE_MOVING;
            TMR1_Reload();
            TMR0_Reload();
            break;
    }
}

void I2C_StatusCallback(I2C_SLAVE_DRIVER_STATUS i2c_bus_state)
{

    static uint8_t funcAddress    = 0;
    static uint8_t slaveWriteType   = SLAVE_NORMAL_DATA;

    uint8_t data = 0;
    uint8_t dataR = 0;

    uint8_t rFunction = 0;

    switch (i2c_bus_state)
    {
        case I2C_SLAVE_WRITE_REQUEST:
            // the master will be sending the eeprom address next
            slaveWriteType  = SLAVE_DATA_ADDRESS;
            break;


        case I2C_SLAVE_WRITE_COMPLETED:

            switch(slaveWriteType)
            {
                case SLAVE_DATA_ADDRESS:
                    funcAddress   = I2C_slaveWriteData;
                    break;


                case SLAVE_NORMAL_DATA:
                default:
                    // the master has written data to store in the eeprom
                    data    = I2C_slaveWriteData;
                    motorCurrent = funcAddress & 0x03;
                    motorDir = (funcAddress & 0x0C) >> 2;
                    switch((funcAddress & 0xF0) >> 4){
                        case I2C_FUNC_TIME:
                            switch(motorCurrent){
                                case 1:
                                    TMR0_ChangeTicker(data);
                                    break;
                                case 2:
                                    TMR1_ChangeTicker(data);
                                    break;
                                case 0:
                                    break;
                                case 3:
                                default:
                                    TMR0_ChangeTicker(data);
                                    TMR1_ChangeTicker(data);
                                    break;
                            }
                            break;
                        case I2C_FUNC_READ:
                            bitReading = 0;
                            readData = data;
                            break;
                        case I2C_FUNC_MOTOR:
                            motorPwm = data;
                            activateMotor = true;
                            I2C_updateValues();
                            break;
                        case I2C_FUNC_CONTROL_POS:
                            activateControl &= 0xF3; //Removing Speed control
                            I2C_updateValues();
                            I2C_Control(motorCurrent,data);
                            activateControl |= motorCurrent; //Adding Position control
                            break;
                        case I2C_FUNC_CONTROL_SPEED:
                            activateControl &= 0xFC; //Removing Position control
                            I2C_updateValues();
                            I2C_Control(motorCurrent,data);
                            activateControl |= motorCurrent << 2; //Adding Speed control
                            break;
                        case I2C_FUNC_CONTROL_CONF:
                            break;
                        default:
                            I2C_updateValues();
                            break;
                    }
                    break;
            } // end switch(slaveWriteType)

            slaveWriteType  = SLAVE_NORMAL_DATA;
            break;

        case I2C_SLAVE_READ_REQUEST:
            rFunction = (readData&0xC0)>>6;
            switch(rFunction){
                case I2C_RFUNC_ENCODER:
                    switch(motorCurrent){
                    default:
                    case 0:
                        dataR = (uint8_t)((encoder1&(0xFF<<bitReading*8))>>bitReading*8);
                        SSP1BUF = dataR;
                        break;
                    case 1:
                        dataR = (uint8_t)((encoder2&(0xFF<<bitReading*8))>>bitReading*8);
                        SSP1BUF = dataR;
                        break;
                    case 2:
                        dataR = (uint8_t)((encoder3&(0xFF<<bitReading*8))>>bitReading*8);
                        SSP1BUF = dataR;
                        break;
                    case 3:
                        dataR = (uint8_t)((encoder4&(0xFF<<bitReading*8))>>bitReading*8);
                        SSP1BUF = dataR;
                        break;
                }
                bitReading++;
                bitReading%=4;
                break;
                
                case I2C_RFUNC_STATE:
                    switch(motorCurrent){
                    default:
                    case 0:
                        SSP1BUF = state1;
                        break;
                    case 1:
                        SSP1BUF = state2;
                        break;
                    case 2:
                        SSP1BUF = state3;
                        break;
                    case 3:
                        SSP1BUF = state4;
                        break;
                }
                break;
            }
            break;

        case I2C_SLAVE_READ_COMPLETED:
        default:;

    } // end switch(i2c_bus_state)

}

