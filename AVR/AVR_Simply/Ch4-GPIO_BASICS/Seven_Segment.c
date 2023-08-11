#include <stdio.h>
#include "DIO.h"
#include "LED.h"
int main(void) {
    DDRA_Out();
    while (1) {
        PORTA = 0b00111111; // Number 0
        _delay_ms(1000);
        PORTA = 0b00000110; // Number 1
        _delay_ms(1000);
        PORTA = 0b01011011; // Number 2
        _delay_ms(1000);
        PORTA = 0b01001111; // Number 3
        _delay_ms(1000);
        PORTA = 0b01100110; // Number 4
        _delay_ms(1000);
        PORTA = 0b01101101; // Number 5
        _delay_ms(1000);
        PORTA = 0b01111101; // Number 6
        _delay_ms(1000);
        PORTA = 0b00000111; // Number 7
        _delay_ms(1000);
        PORTA = 0b11111111; // Number 8
        _delay_ms(1000);
        PORTA = 0b01101111; // Number 9
        _delay_ms(1000);
    }
    return 0;
}