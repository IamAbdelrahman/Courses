#include <stdio.h>
#include "DIO.h"
#include "INTERRUPT.h"
#include "LED.h"
#include "BUTTON.h"

int main(void) {
    LED_Init('A', 0);
    LED_Init('B', 0);
    BUTTON_Init('D', 2);
    DIO_Write_Pin('D', 2, HIGH); // Internal Pull-Up 
    Enable_INT0(FALLING);
    sei();
    while (1) {
        LED_Toggle('A', 0);
        _delay_ms(1000);       
    }
    return 0;
}

ISR (EXT_INT_0) {
    LED_Toggle('B', 0);
}