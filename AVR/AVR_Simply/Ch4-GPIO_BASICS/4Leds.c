#include <stdio.h>
#include "DIO.h"
#include "LED.h"

int main(void) {
    LED_Init('A', 0);
    LED_Init('A', 1);
    LED_Init('A', 2);
    LED_Init('A', 3);
    while (1) {
        LED_On('A', 0);
        _delay_ms(500);
        LED_On('A', 1);
        _delay_ms(500);
        LED_On('A', 2);
        _delay_ms(500);
        LED_On('A', 3);
        _delay_ms(500);
        
    }
    return 0;
}