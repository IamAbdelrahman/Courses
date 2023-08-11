#include <stdio.h>
#include "DIO.h"
#include "LED.h"
#include "BUTTON.h"

int main(void) {
    uint8_t buttonStatus = 0;
    LED_Init('C', 0);
    BUTTON_Init('B', 0);
    while (1) {
        BUTTON_Read('B', 0, &buttonStatus);
        if (buttonStatus == HIGH)
            LED_On('C', 0);
        else
            LED_Off('C', 0);
    }
    return 0;
}