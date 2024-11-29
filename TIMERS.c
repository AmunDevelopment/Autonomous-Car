#include <avr/io.h>
#include "TIMERS.h"
#include "DIO.h"
#define F_CPU 16000000UL


void init_ICU_Timer_1()
{
    TCCR1A = 0;
    TCCR1B = 0;
    TCNT1 = 0;
    TCCR1B |= (1 << ICES1) | (1 << CS10); //Rising Edge, Prescaler=1
    TIMSK |= (1 << TICIE1) | (1 << TOIE1);
}
void init_PWM_Timer_1(int mode,int prescaler,int com,int freq)
{
    ICR1 = (F_CPU/(prescaler*freq))-1;
    TCCR1B |= prescaler;
    switch(mode)
    {
        case PWM_WAVEFORM_MODE_FPWM_8BIT:
            TCCR1A |= (1 << WGM10);
            TCCR1A &= ~(1 << WGM11);
            TCCR1B |= (1 << WGM12);
            TCCR1B &= ~(1 << WGM13);
            break;
        case PWM_WAVEFORM_MODE_FPWM_ICR:
            TCCR1A &= ~(1 << WGM10);
            TCCR1A |=  (1 << WGM11);
            TCCR1B |= (1 << WGM12);
            TCCR1B |=  (1 << WGM13);
            break;
    }
    switch(com)
    {
        case PWM_COMPARE_OUTPUT_MODE_CLEAR:
            TCCR1A |= (1 << COM1A1);
            TCCR1A &= ~(1 << COM1A0);
            TCCR1A |= (1 << COM1B1);
            TCCR1A &= ~(1 << COM1B0);
            
            break;
    }
    
}

void Timer1_PWM_Write(int pinNum, int PWM)
{
    
    switch(pinNum)
    {
        case PB5:
            OCR1A= PWM;
            break;
        case PB6:
            OCR1B= PWM;
        break;
    }
}

void init_PWM_TIMER_3(int mode,int prescaler,int com,int freq)
{
    ICR3 = ((F_CPU/(prescaler*freq)))-1;
    TCCR3B |= prescaler;
    switch(mode)
    {
        case PWM_WAVEFORM_MODE_FPWM_8BIT:
            TCCR3A |= (1 << WGM10);
            TCCR3A &= ~(1 << WGM11);
            TCCR3B |= (1 << WGM12);
            TCCR3B &= ~(1 << WGM13);
            break;
        case PWM_WAVEFORM_MODE_FPWM_ICR:
            TCCR3A &= ~(1 << WGM10);
            TCCR3A |=  (1 << WGM11);
            TCCR3B |= (1 << WGM12);
            TCCR3B |=  (1 << WGM13);
            break;   
         
             
    }
    switch(com)
    {
        case PWM_COMPARE_OUTPUT_MODE_CLEAR:
            TCCR3A |= (1 << COM1A1);
            TCCR3A &= ~(1 << COM1A0);
            TCCR3A |= (1 << COM1B1);
            TCCR3A &= ~(1 << COM1B0);
            TCCR3A |= (1 << COM1C1);
            TCCR3A &= ~(1 << COM1C0);
            
            break;
    }
    
}

void Timer3_PWM_Write(int pinNum, int PWM)
{
    
    switch(pinNum)
    {
        case PE3:
            OCR3A = PWM;
            break;
        case PE4:
            OCR3B = PWM;
        break;
        case PE5:
            OCR3C = PWM;
    }
}