/*
 * Ultrasonic.c
 *
 * Created: 4/9/2019 7:05:55 PM
 * Author : Eng. Hossam
 */
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "TIMERS.h"
#include "DIO.h"
#include "Servo.h"
#include "MOTORS.h"
#include "LCD.h"

volatile uint16_t capt1, capt2;
volatile uint8_t mask = 0;
volatile uint16_t ov;
volatile uint16_t ovf;
unsigned long count;
double distance, dis;
int Ultrasonic_Reading();

ISR(TIMER1_OVF_vect) {
    ov++;
}
ISR(TIMER1_CAPT_vect) {
    if (mask == 0) {
        capt1 = ICR1;
        TCCR1B &= ~(1 << ICES1); //Falling Edge
        ov = 0;
    } else if (mask == 1) {
        capt2 = ICR1;
        ovf = ov;
        TIMSK &= ~((1 << TICIE1) | (1 << TOIE1)); //Disable Input Capture Interrupt, TOV
    }
    mask++;
}

int main(void) {

    setPORTA_PIN_DIR(PA0, OUTPUT);
    DDRB |= (1 << DDB5);
    DDRD &= ~(1 << DDD4);
    cli();
    init_ICU_Timer_1();
    sei();
    Start_Servo();
    Servo_R_ZERO();
    Start_MOTORS();
    while (1){
        dis = Ultrasonic_Reading();
        if (dis < 10) {
            while (1) {
                int distL = 0, distR = 0;
                setMotor_left(REVERSE, MINIMUM_SPEED);
                setMotor_right(REVERSE, MINIMUM_SPEED);
                _delay_ms(200);
                stop_car();
                Start_Servo();
                Servo_R_90();
                distR = Ultrasonic_Reading();
                Servo_R_NEG_90();
                distL = Ultrasonic_Reading();
                Servo_R_ZERO();
                distance=500;
                Start_MOTORS();
                if (distR > distL) {
                    setMotor_left(FORWARD, 0);
                    setMotor_right(FORWARD, MINIMUM_SPEED);
                } else if (distL > distR) {
                    setMotor_right(FORWARD, 0);
                    setMotor_left(FORWARD, MINIMUM_SPEED);
                }
                _delay_ms(3000);
                break;
            }
        } else {
            Start_MOTORS();
            setMotor_left(FORWARD, MAXIMUM_SPEED);
            setMotor_right(FORWARD, MAXIMUM_SPEED);
        }
//        Start_MOTORS();
//        setMotor_left(FORWARD, MAXIMUM_SPEED);
//        setMotor_right(FORWARD, MAXIMUM_SPEED);
    }
}

int Ultrasonic_Reading() {
    PORTB |= (1 << PORTB5);
    _delay_us(10);
    PORTB &= ~(1 << PORTB5);
    if (mask == 2) {
        mask = 0;
        count = ((unsigned long) capt2 + (unsigned long) (ovf * 65536))-(unsigned long) capt1;
        distance = (double) count / 932.95;
    }
    _delay_ms(10);
    ovf = 0;
    ov = 0;
    TCCR1B |= (1 << ICES1);
    TIFR = (1 << ICF1) | (1 << TOIE1);
    TIMSK |= (1 << TICIE1) | (1 << TOIE1);
    return distance;
}