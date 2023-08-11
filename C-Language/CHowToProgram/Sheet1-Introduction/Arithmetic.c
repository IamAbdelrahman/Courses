/*
    Author: Abdelrahman Kamal
    Program: Write a program that asks the user to enter two numbers,
    obtains them from the user and prints their
    sum, product, difference, quotient and remainder.
*/

#include <stdio.h>
int main(void)
{
    int num1, num2;
    printf("Enter your two numbers:");
    scanf("%d %d", &num1, &num2);

    printf("The sum is %d\n", num1 + num2);
    printf("The difference is %d\n", num1 - num2);
    printf("The product is %d\n", num1 * num2);

    if (num1 > num2)
    {
        printf("The quotient is %d\n", num1 / num2);
        printf("The reminder is %d\n", num1 % num2);
    }

    else
    {
        printf("The quotient is %d\n", num2 / num1);
        printf("The reminder is %d\n", num2 % num1);
    }
    return 0;
}
