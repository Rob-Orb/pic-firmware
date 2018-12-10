/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef ORB_CONFIG_H
#define	ORB_CONFIG_H

#include <stdint.h>

//#include <xc.h> // include processor files - each processor file is guarded.

#define sign(a)     a>=0?1:-1

#define I2C_FUNC_TIME    0x01
#define I2C_FUNC_MOTOR     0x02
#define I2C_FUNC_READ     0x03
#define I2C_FUNC_CONTROL_POS     0x04
#define I2C_FUNC_CONTROL_SPEED     0x05
#define I2C_FUNC_CONTROL_CONF     0x06

#define I2C_RFUNC_ENCODER   0x00
#define I2C_RFUNC_STATE   0x01

#define STATE_MOVING    0x01
#define STATE_STOPPED    0x00
#define STATE_TIMEOUT    0x02


extern uint8_t motorCurrent;
extern uint8_t motorPwm;
extern uint8_t motorDir;
extern bool activateMotor;

extern uint8_t readData;

extern uint8_t activateControl;
extern uint8_t input1;
extern uint8_t input2;

extern uint8_t P;
extern uint8_t I;
extern uint8_t D;

extern signed long encoder1;
extern signed long encoder2;
extern signed long curencoder1;
extern signed long curencoder2;
extern uint8_t state1;
extern uint8_t state2;
extern uint8_t bitReading;

/*extern unsigned A1;
extern unsigned A2;
extern unsigned B1;
extern unsigned B2;
extern unsigned encoderAdd;

struct encoder_state{
    unsigned A;
    unsigned B;
};
extern encoder_state enc_state[4];

void check_state(unsigned A, unsigned B){
    for(int i = 0; i < 4; ++i){
        if(enc_state[i].A == A && enc_state[i].B == B)
            return i;
    }
}*/

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

