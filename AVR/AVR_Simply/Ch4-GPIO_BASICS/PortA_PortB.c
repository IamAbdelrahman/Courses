#include <stdio.h>
#include "DIO.h"
#include "LED.h"

int main(void) {
    DDRA_Out();
    while (1) {
        PORTA_High();
        PORTB_High();
    }
    return 0;
}