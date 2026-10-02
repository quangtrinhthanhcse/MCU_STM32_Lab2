/*
 * software_timer.h
 *
 *  Created on: Sep 28, 2026
 *      Author: Home
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define TIMER_CYCLE 10
#define MAX_TIMERS 5

extern int timer_flag[MAX_TIMERS];

void setTimer(int index, int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
