/*
	Author: Abdelrahman Kamal
	Program: Write a program that prints the sum, the sum of the
	squares, and the sum of the cubes of all natural numbers from 1 till any number entered by the user
*/

#include<stdio.h>
int main(void)
{
    int x , sum = 0, sum_S = 0 , sum_C = 0;
    printf("Enter your number: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++){
        sum += i;
        sum_S += (i * i);
        sum_C += (i * i * i);}

        printf("\nSum of your numbers: %d\n", sum);
        printf("Sum of your square numbers: %d\n", sum_S);
        printf("Sum of your cube numbers: %d\n", sum_C); 
}
