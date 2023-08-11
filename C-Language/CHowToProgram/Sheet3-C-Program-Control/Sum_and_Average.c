/*
   Author: Abdelrahman Kamal
   Program: Write a program to sum a sequence of integers and calcu-
   late their average
   */
#include <stdio.h>
int main(void)
{
   int c = 8 , x , sum = 0 ;
   double avg ;
   float i = 0.0;
    printf("Enter your numbers below: \n");
    for (c; c >= 1; c--){
        scanf("%d",&x);
        sum += x;
        i++;
    }
    avg = (float) sum / i ;
    printf("So sum of numbers is %d and the average is %lf", sum, avg);

} 
