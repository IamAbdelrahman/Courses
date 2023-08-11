#include<stdio.h>
int main(void){
    printf("Welcome to TargetHeartRate Program!\n");
    int year,month,day, current, age;
    float Max_Heart = 0.0, Range;

    printf("Please Enter your birthday(format y-m-d): ");
    scanf("%d - %d - %d", &year, &month, &day);
    current = 2022;

    age = current - year;
    printf("\nSo your age in years is %d", age);
    Max_Heart = 220 - age;
    printf("\n Your Max_Heart_Rate is %g beats/minutes", Max_Heart);

    Range = (Max_Heart * 85 / 100) - (Max_Heart * 50 / 100);
    printf("\n Your Heart_Target_Range is %f\n",Range);


    }
