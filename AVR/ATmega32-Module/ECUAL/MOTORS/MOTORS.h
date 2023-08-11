/* 
 * File:   MOTOR.h
 * Author: ak
 *
 * Created on February 25, 2023, 11:37 PM
 */

#ifndef MOTOR_H
#define	MOTOR_H
#include "DIO.h"
#include "TIMER.h"
#include "ADC.h"

typedef enum {
    MOTOR1,
    MOTOR2,
    MOTOR3,
    MOTOR4,
    LEFT_MOTORS,
    RIGHT_MOTORS,
    MOTORS,
}EN_motor_t;

typedef enum {
    LEFT_MOTORS_FORWARD,
    RIGHT_MOTORS_FORWARD,
    MOTORS_FORWARD,
    LEFT_MOTORS_BACKWARD,
    RIGHT_MOTORS_BACKWARD,
    MOTORS_BACKWARD,
    LEFT_MOTORS_STOP,
    RIGHT_MOTORS_STOP,
    STOP,
}EN_motorsState_t;

typedef enum {
    MOVE_FORWARD,
    MOVE_BACKWARD,
    MOVE_FORWARD_RIGHT,
    MOVE_FORWARD_LEFT,
    MOVE_BACKWARD_RIGHT,
    MOVE_BACKWARD_LEFT,
    TURN_FORWARD_RIGHT,
    TURN_FORWARD_LEFT,
    TURN_BACKWARD_RIGHT,
    TURN_BACKWARD_LEFT,
    TURN_AROUND_FORWARD_RIGHT,
    TURN_AROUND_FORWARD_LEFT,
    TURN_AROUND_BACKWARD_RIGHT,
    TURN_AROUND_BACKWARD_LEFT,

} EN_directions_t;

#define TURN_90     _delay_ms(750)
#define TURN_180    _delay_ms(1500)
#define TURN_270    _delay_ms(2250)
#define TURN_360    _delay_ms(3000)
/**********************motorsInit****************************
 * Description: This function is used to initialize all motors
 * thorough initializing all the bits connected to the motors
 * It also initializes the TIMER0 and starts it because of the 
 * PWM we use it to control the speed of the motors.
 * 
 * Input: It takes an object from EN motor enumeration data type
 * Return: It returns void
 **********************motorsInit****************************/
void motorsInit(EN_motor_t);
/*_____________________________________________________________*/

/**********************motorsState**********************************
 * Description: This function is used to provide a state to the motots
 * through checking the state in enum whether the motors are moving forward,
 * backward, or are not moving (stop state)
 
 * Input: It takes an object from EN motor enumeration data type
 * Return: It returns void
 **********************motorsState***********************************/
void motorsState(EN_motorsState_t);
/*_______________________________________________________________________*/

/**********************moveCar**********************************
 * Description: This function is used to move a car for example connected
 * to the microcontroller by checking the direction in its input and then
 * calling the motorsState() function to appeal the direction
 
 * Input: Input: It takes an object from EN direction enumeration data type
 * Return: It returns void
 **********************moveCar***********************************/
void moveCar(EN_directions_t direction);

/*_________________________________________________________________________*/

/**********************rotateCar**********************************
 * Description: This function is used to rotate the car in 4 states
 * 90 degrees, 180 degrees, 270 degrees, and 360 degrees through 
 * checking the direction and the degree value and for instance if 
 * the user wants to rotate the car 90 degrees in the right direction
 * so he must enter forward right for example and 90 degrees to move
 * the car in the right direction for 750 ms with the help of degree()
 * function which calls the built in delay function ...etc
 
 * Input: Input: It takes an object from EN direction enumeration data type
 * and a degreeValue of double data type.
 * Return: It returns void
 **********************rotateCar***********************************/
void rotateCar(EN_directions_t direction, uint64_t degreeValue);
 void degree(uint64_t deg);
 /*_________________________________________________________________________*/
 
/**********************MOTOR_Speed**********************************
 * Description: This function is used to control the speed of the 
 * motors by sending the value from 0:100 and this value is sent
 * to the pwm_start() function that takes the same range to calculate
 * the value of OCR0.
 * 
 * Input: It takes unsigned character speed.
 * Return: It returns void
 **********************MOTOR_Speed***********************************/
void motorSpeed(uint8_t speed);
/*_________________________________________________________________________*/

#endif	/* MOTOR_H */
