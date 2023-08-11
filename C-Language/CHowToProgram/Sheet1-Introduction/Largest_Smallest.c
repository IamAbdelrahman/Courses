/*
    Author: Abdelrahman Kamal
    Program: Write a program that reads in three integers and then
    determines and prints the largest and the smallest integers in the group
*/

#include <stdio.h>
int main(void)
{
    int x, y, z;
    printf("Enter your 3 integers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x >= y && x >= z)
        printf("The largest number is %d\n", x);

    if (y >= x && y >= z)
        printf("The largest number is %d\n", y);

    if (z >= y && z >= x)
        printf("The largest number is %d\n", z);

    if (x <= y && x <= z)
        printf("The smallest number is %d\n", x);

    if (y <= x && y <= z)
        printf("The smallest number is %d\n", y);

    if (z <= y && z <= x)
        printf("The smallest number is %d\n", z);

    return 0;
}
