/* 
 * File:   TIMERS.h
 * Author: kyoma
 *
 * Created on November 28, 2024, 5:55 PM
 */

#ifndef TIMERS_H
#define	TIMERS_H

#define TIMER_PRESCALE_0                        0
#define TIMER_PRESCALE_1                        1
#define TIMER_PRESCALE_8                        2
#define TIMER_PRESCALE_64                       3
#define TIMER_PRESCALE_256                      4
#define TIMER_PRESCALE_1024                     5

#define PWM_WAVEFORM_MODE_FPWM_8BIT              5
#define PWM_WAVEFORM_MODE_FPWM_ICR               14

#define PWM_COMPARE_OUTPUT_MODE_DISCONNECT    0
#define PWM_COMPARE_OUTPUT_MODE_TOGGLE        1
#define PWM_COMPARE_OUTPUT_MODE_CLEAR         2
#define PWM_COMPARE_OUTPUT_MODE_SET           3

void init_ICU_Timer_1();
void init_PWM_Timer_1(int mode,int prescaler,int com,int freq);
void Timer1_PWM_Write(int pinNum, int PWM);
void init_PWM_TIMER_3(int mode,int prescaler,int com,int freq);
void Timer3_PWM_Write(int pinNum, int PWM);


#endif	/* TIMERS_H */

