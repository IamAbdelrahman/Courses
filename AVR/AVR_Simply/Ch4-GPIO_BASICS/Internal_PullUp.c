#include <stdio.h>
#include "DIO.h"
#include "LED.h"
#include "BUTTON.h"

int main(void) {
    uint8_t button1Status = 1;
    uint8_t button2Status = 1;
    uint8_t button3Status = 1;
    
    LED_Init('A', 0);
    LED_Init('A', 1);
    LED_Init('A', 2);
    
    BUTTON_Init('B', 0);
    BUTTON_Init('B', 1);
    BUTTON_Init('B', 2);
    DIO_Write_Pin('B', 0, HIGH); // Enable internal pull-up R
    DIO_Write_Pin('B', 1, HIGH); // Enable internal pull-up R
    DIO_Write_Pin('B', 2, HIGH); // Enable internal pull-up R
    
    while (1) {
        BUTTON_Read('B', 0, &button1Status);
        BUTTON_Read('B', 1, &button2Status);
        BUTTON_Read('B', 2, &button3Status);
        
        if (button1Status == 0) {
            LED_On('A', 0);
        } else if (button2Status == 0) {
            LED_On('A', 0);
            LED_On('A', 1);
        } else if (button3Status == 0) {
            LED_On('A', 0);
            LED_On('A', 1);
            LED_On('A', 2);
        } else {
            LED_Off('A', 0);
            LED_Off('A', 1);
            LED_Off('A', 2);
        }
        
        
    }
    return 0;
}
