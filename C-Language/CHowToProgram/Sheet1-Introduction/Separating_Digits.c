/*
    Author: Abdelrahman Kamal
    Program: Write a program that inputs one five-digit number
    separates the number into its individual digits and
    prints the digits separated from one another by three spaces each
*/

#include <stdio.h>
int main(void)
{
    int number;
    int d1, d2, d3, d4, d5;
    printf("Enter your five-digit number: ");
    scanf("%d", &number);

    d1 = (number / 1) % 10;
    d2 = (number / 10) % 10;
    d3 = (number / 100) % 10;
    d4 = (number / 1000) % 10;
    d5 = (number / 10000) % 10;

    printf("%d%3d%3d%3d%3d\n", d5, d4, d3, d2, d1);

    return 0;
}
