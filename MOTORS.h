/* 
 * File:   MOTORS.h
 * Author: kyoma
 *
 * Created on November 29, 2024, 5:57 AM
 */

#ifndef MOTORS_H
#define	MOTORS_H

#define FORWARD 0
#define REVERSE 1

#define MAXIMUM_SPEED 65535
#define MINIMUM_SPEED 10000
#define AVERAGE_SPEED 32767

#define LEFT_WHEELS   PE6
#define RIGHT_WHEELS  PE7
#define WHEELS_PORT   PE


void Start_MOTORS();
void setMotor_left(int dir, int speed);
void setMotor_right(int dir, int speed);
void stop_car();

#endif	/* MOTORS_H */

