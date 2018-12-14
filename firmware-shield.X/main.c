/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1509
        Driver Version    :  2.00
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

#include "mcc_generated_files/mcc.h"
#include "config.h"

/*unsigned A1 = 0;
unsigned A2 = 0;
unsigned B1 = 0;
unsigned B2 = 0;
encoder_state enc_state[4]={{0,0},{1,0},{0,1},{1,1}};
encoder_state* act_enc_state1 = enc_state;
encoder_state* act_enc_state2 = enc_state;*/
/*
                         Main application
 */
uint8_t P = 100;
uint8_t D = 40;
uint8_t I = 40;

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    
    BONUS_SetHigh();
    
    /*A1 = A1_GetValue();
    B1 = B1_GetValue();
    A2 = A2_GetValue();
    B2 = B2_GetValue();
    act_enc_state1 = &(enc_state[check_state(A1, B1)]);
    act_enc_state2 = &(enc_state[check_state(A2, B2)]);*/
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    uint8_t counting = 0;
    
    long preverror1 = 0;
    long preverror2 = 0;
    long cumerror1 = 0;
    long cumerror2 = 0;
    
    while (1)
    {
        if(activateControl > 0){
            long error1 = input1*4 - (encoder1 - curencoder1);
            long error2 = input2*4 - (encoder2 - curencoder2);
            long derror1 = (error1 - preverror1)*100;
            long derror2 = (error2 - preverror2)*100;
            long ierror1 = abs(cumerror1)>3000?sign(cumerror1)*3000:(cumerror1);
            long ierror2 = abs(cumerror2)>3000?sign(cumerror2)*3000:(cumerror2);
            
            preverror1 = error1;
            preverror2 = error2;
            cumerror1 += error1;
            cumerror2 += error2;
            if((activateControl&0x03) > 0){
                long contr1 = P/125.0*error1 + D/255.0*derror1 + I/255.0*ierror1 + 100;
                if(abs(contr1) > 1023)
                    contr1 = sign(contr1)*1023;
                long contr2 = P/125.0*error2 + D/255.0*derror2 + I/255.0*ierror2 + 100;
                if(abs(contr2) > 1023)
                    contr2 = sign(contr2)*1023;
                switch(activateControl&0x03){
                    case 1:
                        if(contr1 > 0){
                            DIR1_SetLow();
                            PWM1_LoadDutyValue(contr1);
                        }
                        else{
                            DIR1_SetHigh();
                            PWM1_LoadDutyValue(-contr1);
                        }
                        if(error1 < 20)
                            state1 = STATE_ACHIEVED;
                        break;
                    case 2:
                        if(contr2 > 0){
                            DIR2_SetLow();
                            PWM2_LoadDutyValue(contr2);
                        }
                        else{
                            DIR2_SetHigh();
                            PWM2_LoadDutyValue(-contr2);
                        }
                        if(error2 < 20)
                            state2 = STATE_ACHIEVED;
                        break;
                    case 3:
                        if(contr1 > 0){
                            DIR1_SetLow();
                            PWM1_LoadDutyValue(contr1);
                        }
                        else{
                            DIR1_SetHigh();
                            PWM1_LoadDutyValue(-contr1);
                        }
                        if(contr2 > 0){
                            DIR2_SetLow();
                            PWM2_LoadDutyValue(contr2);
                        }
                        else{
                            DIR2_SetHigh();
                            PWM2_LoadDutyValue(-contr2);
                        }
                        if(error1 < 20)
                            state1 = STATE_ACHIEVED;
                        if(error2 < 20)
                            state2 = STATE_ACHIEVED;
                        break;
                    default:
                        break;
                }
            }
            
            //Speed control
            /*if((activateControl&0x0C) > 0){
                switch(activateControl&0x0C){
                    case 1:
                        PWM1_LoadDutyValue(P/255.0*error1);
                        break;
                    case 2:
                        PWM2_LoadDutyValue(P/255.0*error2);
                        break;
                    case 3:
                        PWM1_LoadDutyValue(P/255.0*error1);
                        PWM2_LoadDutyValue(P/255.0*error2);
                        break;
                    default:
                        break;
                }
            }*/
        }else{
            preverror1 = 0;
            preverror2 = 0;
            cumerror1 = 0;
            cumerror2 = 0;
        }
        if(counting > 9){
            BONUS_Toggle();
            counting = 0;
        }
        __delay_ms(10);
        counting ++;
    }
}
/**
 End of File
*/