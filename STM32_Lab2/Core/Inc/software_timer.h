/*
 * software_timer.h
 *
 *  Created on: Sep 28, 2026
 *      Author: Home
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define TIMER_CYCLE 10

extern int timer1_flag;

void setTimer1(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
