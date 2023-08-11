#include <stdio.h>
#include "DIO.h"
#include "UART.h"

int main(void) {
    uint8_t button1State = 1;
    uint8_t button2State = 1;
    BUTTON_Init('C', 0); // Button 1 >> Send 'N'
    BUTTON_Init('C', 3); // Button 2 >> Send 'F'
    DIO_Write_Pin('C', 0, HIGH);
    DIO_Write_Pin('C', 3, HIGH);
    UART_Init(103);
    while (1) {
        BUTTON_Read('C', 0, &button1State);
        BUTTON_Read('C', 3, &button2State);
        if (button1State == LOW) {
            UART_Transmit('N');
            _delay_ms(300);
        }
        if (button2State == LOW) {
            UART_Transmit('F');
            _delay_ms(300);
        }
    }
    return 0;
}


