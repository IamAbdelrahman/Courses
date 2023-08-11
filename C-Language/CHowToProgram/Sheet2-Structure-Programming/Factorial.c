#include <stdio.h>

int main(void){
    int x , y = 1;
    float e = 0.0 , p = 1.0;
    printf("The approximate value of 'e' \n");

    while (y <= 4){
            x = y;
            p = 1.0;
            
        while (x >= 1){
        p *= x;
        x--;}
        e += (1 / p);
        y++;}
        
        printf("So the value of 'e' is = %f\n", 1.0 + e);
        printf("%d", -8 % 10);
    }
