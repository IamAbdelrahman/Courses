#include <stdio.h>
#include "DIO.h"
#include "LED.h"

int main(void) {
    DDRA_Out();
    while (1) {
        LED_On('A', 0);
        _delay_ms(250);
        LED_On('A', 1);
        _delay_ms(250);
        LED_On('A', 2);
        _delay_ms(250);
        LED_On('A', 3);
        _delay_ms(250);
        LED_Off('A', 0);
        LED_Off('A', 1);
        LED_Off('A', 2);
        LED_Off('A', 3);
        LED_On('A', 7);
        _delay_ms(250);
        LED_On('A', 6);
        _delay_ms(250);
        LED_On('A', 5);
        _delay_ms(250);
        LED_On('A', 4);
        _delay_ms(250);
        LED_Off('A', 7);
        LED_Off('A', 6);
        LED_Off('A', 5);
        LED_Off('A', 4);
         _delay_ms(250);

    }
    return 0;
}