/*
	Author: Abdelrahman Kamal
	Program: Write a program that converts temperatures from 30 ° C
	to 50 ° C to the Fahrenheit scale. The program should print a table displaying temperatures in the
	two scales side by side.
*/

#include<stdio.h>
int main (void){
    int C ;
    float F;
    printf("Temperature\n");
    printf("Celsius\tFahrenheit \n");

    for (C = 30; C <= 50; C++){
        F = 32 + (C * 9/5);
        printf("%d\t %g \n",C,F);
    }
    }
    
    
   
