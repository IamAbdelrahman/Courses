/*
    Author: Abdelrahman Kamal
    Program: Create a BMI calculator application that reads the user’s weight in kilograms and height in meters
    then calculates and displays the user’s body mass index
*/

#include <stdio.h>
int main(void)
{
    float weight, height, BMI;
    printf("Enter your weight(km): ");
    scanf("%f", &weight);
    printf("Enter your height(m): ");
    scanf("%f", &height);

    BMI = weight / (height * height);
    printf("BMI Values\n");

    if (BMI < 18.5)
        printf("Underweight: less than 18.5\n");

    else if (BMI >= 18.5 && BMI < 24.9)
        printf("Normal: between 18.5 and 24.9\n");

    else if (BMI >= 25 && BMI < 29.9)
        printf("Overweight: between 25 and 29.9\n");

    else
        printf("Obese: 30 or greater\n");

    return 0;
}
