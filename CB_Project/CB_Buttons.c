/*
 *
 *               MSP430F5529
 *              w/ LOCAL BUTTONS
 *             -----------------
 *            |             P2.0|--> Increment signal - Pulse
 *            |             Px.y|--> Switch Place
 *            |             P1.0|--> Reset Signal - Active High
 *            |                 |
 *            |             P1.7|<-- S1 (Increment)
 *            |             P2.2|<-- S2 (Reset)
 *            |             P
 ******************************************************
 ******************************************************
 *               MSP430F5529
 *              w/ EXTERNAL BUTTONS
 *             -----------------
 *            |             P2.0|--> Increment signal - Pulse
 *            |                 |
 *            |             P1.0|--> Reset Signal - Active High
 *            |                 |
 *            |             P8.1|<-- Button 1 (Increment)
 *            |             P8.2|<-- Button 2 (Reset)
 */


#include <msp430.h>
#include <stdio.h>
#include "HAL_Dogs102x6.h"
#include "HAL_Buttons.h"
#include "CB_Buttons.h"

void led_status_disp();

volatile int count = 0;
volatile int choice = LOCAL_BUTTONS;  //change for external buttons

static void init(void)
{
    P1DIR |= BIT0;  //P1.0 set as reset signal
    P2DIR |= BIT0;  //P2.0 set as increment signal



    if(choice){  //use local exp. board buttons
        // Configure button ports
          PADIR &= ~0x0480;               // Buttons on P1.7/P2.2 are inputs
          P2DIR &= 0xFB;
    }else{  //use external buttons on P8.1 and P8.2

    }

  uint8_t contrast, brightness;
  contrast = 11;
  brightness = 11;

  WDTCTL = WDTPW+WDTHOLD;                   // Stop WDT


  P2DIR |= BIT0;  //P2.0 as O/P

  // Configure LED1 and LED2
  //P1DIR |= BIT0;
  //P8DIR |= BIT1;



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

static void local_buttons(void){

}

static void external_buttons(void){

}

static void debug_setup(void){

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
