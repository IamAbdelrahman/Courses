#include <stdio.h>
#include "DIO.h"
#include "ADC.h"
#include "LED.h"

int main(void) {
    DDRC_Out();
    ADC_Config_Pot();
    ADC_Init('A', 0);
    while (1) {
        PORTC = ADC_Read(0);
    }
    return 0;
}


