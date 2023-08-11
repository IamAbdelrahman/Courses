#include <stdio.h>
#include "UART.h"

int main(void) {
  
    UART_Init(103);
    while (1) {
        UART_TransmitChar('A');
        _delay_ms(1000);
}
    return 0;

}
