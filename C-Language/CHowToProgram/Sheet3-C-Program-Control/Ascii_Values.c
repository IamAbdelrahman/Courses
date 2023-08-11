/*
	Author: Abdelrahman Kamal
	Program: Write a program to convert and print characters that ascii value
	of them is 1:127 and each line must contain 10 letters only
*/

#include<stdio.h>
int main(void)
{
    for (int i = 1; i <= 127; i++)
    {
        printf("%c ", i );
        if (i % 10 == 0)
            puts("\n ");
    }
    return 0;
}
