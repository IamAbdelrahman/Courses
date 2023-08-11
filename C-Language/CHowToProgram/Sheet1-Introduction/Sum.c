/*
    Author: Abdelrahman Kamal
    Program: Write a program to sum
    3 integers
*/

#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    printf("Enter your 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int result;
    result = num1 + num2 + num3;
    printf("The result is %d\n", result);

    return 0;
}




