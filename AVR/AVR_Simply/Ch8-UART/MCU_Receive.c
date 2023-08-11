#include <stdio.h>
#include "DIO.h"
#include "UART.h"

int main(void) {
    uint8_t Data;
    LED_Init('C', 0);
    UART_Init(103);
    while (1) {
        Data = UART_Receive();
        if (Data == 'N') {
            LED_On('C', 0);
        }
        else if (Data == 'F') {
            LED_Off('C', 0);
        }
    }
    return 0;
}


