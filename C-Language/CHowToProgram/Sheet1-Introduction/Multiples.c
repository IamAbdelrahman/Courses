/*
    Author: Abdelrahman Kamal
    Program: Write a program that reads in two integers
    and determines and prints whether the first is a multiple of the second.
*/

#include <stdio.h>
int main(void)
{
    int x, y;
    printf("Enter your two numbers: ");
    scanf("%d %d", &x, &y);

    if (x % y == 0)
        printf("%d is a multiple of %d\n", x, y);

    else
        printf("%d is not a multiple of %d\n", x, y);
    return 0;
}
