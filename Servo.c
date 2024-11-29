#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>
#include "DIO.h"
#include "TIMERS.h"

void Start_Servo()
{
    init_PWM_TIMER_3(PWM_WAVEFORM_MODE_FPWM_ICR,TIMER_PRESCALE_8,PWM_COMPARE_OUTPUT_MODE_CLEAR,50);
    setPORTE_PIN_DIR(PE5,OUTPUT);
}

void Servo_R_90()
{
    Timer3_PWM_Write(PE5,2000);
    _delay_ms(1500);
}
void Servo_R_NEG_90()
{
    Timer3_PWM_Write(PE5,4000);
    _delay_ms(1500);
}

void Servo_R_ZERO()
{
    Timer3_PWM_Write(PE5,3000);
    _delay_ms(1500);
}
