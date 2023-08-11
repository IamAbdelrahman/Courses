// Current world population >= 7.9 billion
// Annual world population growth rate >= around 1.05% per year
#include<stdio.h>
int main(void){

    double P = 0.0, R = 0.0, Z ;
    int Y = 2022, X, C = 1;// P for population and R for Rate.
    
    printf("Hello and Welcome to the world population app!\n");
    printf("Please, Enter the Current World Population: ");
    scanf("%lf", &P);
    
    printf("\nPlease Enter the annual world population: ");
    scanf("%lf",&R);
    printf("\nSo the current population is %lf and the annual rate is %lf\n",P,R);
    
    X = P * (R / 100.0);
    while (C <= 5){
        Z = P + X * C;
    printf("Population of Year:%d is %.2lf billion\n", Y, Z/1000000000);
    
    C++;
    Y++;}
}
