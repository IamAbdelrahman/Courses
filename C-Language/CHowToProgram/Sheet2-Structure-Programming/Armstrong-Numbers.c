// Armstrong number (digits)
#include<stdio.h>
#include<math.h>
int main(void){
    printf("Enter your 3 digits number: ");
    int n ;
    double A;
    scanf("%d",&n);
    
    int a = n % 10;
    int b = (n/10) % 10;
    int c = (n / 100) % 10;
    
    printf("%d %d %d\n",c,b,a);
    
    A = pow (b,3) + pow (c,3) + pow (a,3);
    
    printf("Armstrong is = %lf", A); 
    }
