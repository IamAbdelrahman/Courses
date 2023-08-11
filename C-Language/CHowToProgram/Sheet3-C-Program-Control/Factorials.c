/*
	Author: Abdelrahman Kamal
	Program: Write a program that evaluates the factorials of the integers from 1 to 5
*/

#include<stdio.h>
int fact(int); 
int main (void) 
{
    for (int x = 1; x <= 5; x++)
        printf("Factorial of %d = %d\n", x, fact(x));
}

int fact (int n)
{
    int p = 1;
    for (; n > 0; n--)
        p *= n;

    return p;

}
