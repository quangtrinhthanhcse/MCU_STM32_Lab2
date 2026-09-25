/*
 * software_timer.h
 *
 *  Created on: Sep 25, 2026
 *      Author: Home
 */

#ifndef SOFTWARE_TIMER_H_
#define SOFTWARE_TIMER_H_

#define TIMER_TICK 10

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timerRun(void);

#endif /* SOFTWARE_TIMER_H_ */
