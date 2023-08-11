#include <stdio.h>
#include "DIO.h"
#include "MOTORS.h"

int main(void) {
    motorsInit(MOTORS);
    motorSpeed(100);
    while (1) {
        motorsState(MOTORS_FORWARD);
        _delay_ms(2000);
        motorsState(MOTORS_BACKWARD);
        _delay_ms(2000);
        motorsState(STOP);
        _delay_ms(2000);
    }
    return 0;
}
