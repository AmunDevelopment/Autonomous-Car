#include <avr/io.h>
#include "TIMERS.h"
#include "DIO.h"
#include "MOTORS.h"

void Start_MOTORS()
{

    init_PWM_TIMER_3(PWM_WAVEFORM_MODE_FPWM_ICR,TIMER_PRESCALE_8,PWM_COMPARE_OUTPUT_MODE_CLEAR,50);
    setPORTE_PIN_DIR(PE3,OUTPUT);
    setPORTE_PIN_DIR(PE4,OUTPUT);
    setPORT_PIN_DIR(WHEELS_PORT,LEFT_WHEELS,OUTPUT);
    setPORT_PIN_DIR(WHEELS_PORT,RIGHT_WHEELS,OUTPUT);
}

void setMotor_left(int dir, int speed){
    Timer3_PWM_Write(PE3,speed);
    setPORT_PIN(WHEELS_PORT,LEFT_WHEELS,dir);
}
void setMotor_right(int dir, int speed){
    Timer3_PWM_Write(PE4,speed);
    setPORT_PIN(WHEELS_PORT,RIGHT_WHEELS,dir);
    
}
void stop_car()
{
    setMotor_left(FORWARD, 0);
    setMotor_right(FORWARD,0);
}