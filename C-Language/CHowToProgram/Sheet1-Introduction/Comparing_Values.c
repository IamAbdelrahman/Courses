/*
    Author: Abdelrahman Kamal
    Program: Write a program that inputs three different
    integers from the keyboard, then prints the sum, the average, the product, the smallest
    and the largest of these numbers.
*/

#include <stdio.h>
int main(void)
{
    int x, y, z, sum;
    float avg;
    printf("Enter your 3 numbers:");
    scanf("%d %d %d", &x, &y, &z);
    sum = x + y + z;
    printf("The sum is %d\n", sum);

    avg = sum / 3.0;
    printf("The average is %f\n", avg);

    if ( x >= y && x >= z)
        printf("The largest is %d\n", x);

    if ( y >= x && y >= z)
        printf("The largest is %d\n", y);

    if ( z >= x && z >= y )
        printf("The largest is %d\n", z);

    if ( x <= y && x <= z)
        printf("The smallest is %d\n", x);

    if ( y <= x && y <= z)
        printf("The smallest is %d\n", y);

    if ( z <= x && z <= y )
        printf("The smallest is %d\n", z);
    return 0;
}
