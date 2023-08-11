/*
    Author: Abdelrahman Kamal
    Program: Create an application that calculates your daily driving cost,
    so that you can estimate how much money could be saved by car pooling
*/

#include <stdio.h>
int main(void)
{
    float miles, gallon_cost, fees, tolls, total_cost;
    printf("Enter your miles per day: ");
    scanf("%f", &miles);    // 12.5 miles/day

    printf("Enter your parking fees per day: ");
    scanf("%f", &fees);

    printf("Enter your tolls per day: ");
    scanf("%f", &tolls);

    printf("Enter your cost per gallon: ");
    scanf("%f", &gallon_cost); // 41.5 $ / gallon

    total_cost = fees + tolls + (miles * 1.27);
    printf("So the total cost per day is %f\n", total_cost);

    return 0;
}
