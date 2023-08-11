/*
	Author: Abdelrahman Kamal
	Program: Write a program to calculate and print the sum of all
	multiples of 7 from 1 to 100.
*/

#include<stdio.h>
int main(void){
    int sum = 0;
    for (int i = 1; i <= 100; i++){
        sum += (i * 7);
    }
    printf("Sum is %d", sum);
    }
