/*
    Author: Abdelrahman Kamal
    Program: Write a program that reads an integer
    and determines and prints whether it’s odd or even
*/

#include <stdio.h>
int main(void)
{
    int x;
    printf("Enter your integer: ");
    scanf("%d", &x);

    if (x % 2 == 0)
        printf("%d is an even number\n", x);

    else
        printf("%d is an odd number\n", x);

    return 0;
}
