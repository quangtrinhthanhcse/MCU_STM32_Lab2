/*
 * software_timer.h
 *
 *  Created on: Sep 25, 2026
 *      Author: Home
 */

#ifndef SOFTWARE_TIMER_H_
#define SOFTWARE_TIMER_H_

#define TIMER_TICK 10

extern int timer0_flag;

void setTimer0(int duration);

void timer_run(void);

#endif /* SOFTWARE_TIMER_H_ */
