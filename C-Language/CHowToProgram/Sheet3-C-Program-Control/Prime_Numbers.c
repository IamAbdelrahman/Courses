/*
	Author: Abdelrahman Kamal
	Program: Write a program to calculate and print a list of all prime numbers from
    1 to 100.
*/

#include<stdio.h>
int prime (int);
int main(void)
{
    for (int i = 1; i <= 100; i++)
    {
        if (prime(i) == 1)  // check if the number is a prime or not.
            printf("%d\n", i);
    }
}

int prime (int n)
{
    int prime = 1;
    for (int x = n - 1; x > 1; x--)
    {
        if  (n % x == 0 )
            prime = 0;
    }
    return prime;
}


