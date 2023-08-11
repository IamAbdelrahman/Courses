#include <stdio.h>
#include "DIO.h"
#include "LED.h"

int main(void) {
    LED_Init('B', 0);

    while (1) {
        LED_Toggle('B', 0);
        _delay_ms(100);
    }
    return 0;
}
