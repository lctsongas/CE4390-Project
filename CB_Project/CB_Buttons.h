/*
 * CB_Buttons.h
 *
 *  Created on: Mar 21, 2017
 *      Author: chris
 */

#ifndef CB_PROJECT_CB_BUTTONS_H_
#define CB_PROJECT_CB_BUTTONS_H_

#define LOCAL_BUTTONS 1
#define EXTERNAL_BUTTONS 0

#include <msp430.h>
#include <stdio.h>
#include "HAL_Buttons.h"

static void init(void);
static void local_buttons(void);
static void external_buttons(void);
static void debug_setup(void);


#endif /* CB_PROJECT_CB_BUTTONS_H_ */
