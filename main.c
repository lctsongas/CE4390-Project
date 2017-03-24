/* --COPYRIGHT--,BSD_EX
 * Copyright (c) 2012, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *******************************************************************************
 *
 *                       MSP430 CODE EXAMPLE DISCLAIMER
 *
Q:How many iterations needed to calculate π with 3 digits accuracy (i.e. 3.14xxx)?
A: n = 119 iterations

//   Built with CCSv4 and IAR Embedded Workbench Version: 4.21
//******************************************************************************
 */


#include <msp430.h>
#include <stdio.h>
#include "HAL_Dogs102x6.h"
#include "HAL_Buttons.h"
#include "CB_Project/CB_Button.h"

#define BUTTON_PORT_IN    PAIN

void led_status_disp();

volatile int count = 0;

int main(void)
{


  uint8_t contrast, brightness;
  contrast = 11;
  brightness = 11;

  WDTCTL = WDTPW+WDTHOLD;                   // Stop WDT


  P2DIR |= BIT0;  //P2.0 as O/P

  // Configure LED1 and LED2
  P1DIR |= BIT0;
  P8DIR |= BIT1;

  // Configure button ports
  PADIR &= ~0x0480;               // Buttons on P1.7/P2.2 are inputs
  P2DIR &= 0xfb;

  // Configure CapTouch ports
  P1OUT &= ~0x7E;
  P1DIR |= 0x7E;
  P6OUT = 0x00;
  P6DIR = 0x00;

  // Configure Dogs102x6 ports
  P5OUT &= ~(BIT6 + BIT7);        // LCD_C/D, LCD_RST
  P5DIR |= BIT6 + BIT7;
  P7OUT &= ~(BIT4 + BIT6);        // LCD_CS, LCD_BL_EN
  P7DIR |= BIT4 + BIT6;
  P4OUT &= ~(BIT1 + BIT3);        // SIMO, SCK
  P4DIR &= ~BIT2;                 // SOMI pin is input
  P4DIR |= BIT1 + BIT3;

  __enable_interrupt();

  // Buttons Initialization -> S1 - Interrupt based ; S2 - Polling based
  Buttons_init(BUTTON_ALL);
  Buttons_interruptEnable(BUTTON_ALL);
  //Buttons_interruptEnable(BUTTON_S2);
  buttonsPressed = 0;

  // LCD initialization
  Dogs102x6_init();
  Dogs102x6_backlightInit();

  // Set Default Contrast
      contrast = 11;

  // Set Default Brightness
      brightness = 11;

  Dogs102x6_setBacklight(brightness);
  Dogs102x6_setContrast(contrast);
  Dogs102x6_clearScreen();
  //Dogs102x6_stringDraw(1,1,"LAB 3",DOGS102x6_DRAW_NORMAL);
  led_status_disp();
  while(1){
      /**
      if(!(BUTTON_PORT_IN & BUTTON_S2)){

          P1OUT ^= BIT0; // LED 1 Toggle
          led_status_disp(); // Display LED status in LCD

          while(!(BUTTON_PORT_IN & BUTTON_S2)); // Wait for debouncing to end
      } */

  }
}

void led_status_disp()
{
    Dogs102x6_clearScreen();

    char bufferL0[30];
    sprintf(bufferL0, "Pressed = %d", buttonsPressed);
    P2OUT ^= BIT0;
    __delay_cycles(20000);
    P2OUT ^= BIT0;
    buttonsPressed = 0;
    Dogs102x6_stringDraw(0,1,(void *)bufferL0,DOGS102x6_DRAW_NORMAL);


}
