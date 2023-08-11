#include <stdio.h>
#include "DIO.h"
#include "LED.h"

int main(void) {
    uint8_t count = 0;
    DDRA_Out();
    while (1) {
        for (count = 0; count <= 7; count++) {
            PORTA = (1 << count);
            _delay_ms(500);
        }
    }
    return 0;
}
