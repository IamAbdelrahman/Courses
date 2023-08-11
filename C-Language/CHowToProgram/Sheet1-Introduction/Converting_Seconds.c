/*
    Author: Abdelrahman Kamal
    Program: Write a program that asks the
    user to enter the total time elapsed, in seconds, and
    converts the time to hours, minutes and seconds.
    The time should be displayed as hours:minutes:seconds
*/

#include <stdio.h>
int main(void)
{
    int total_time = 0;
    printf("%s\n","Enter the total_time elapsed in seconds" );
    scanf("%d", &total_time);

    int seconds = total_time % 60;
    total_time = (total_time - seconds) / 60;
    int minutes = total_time % 60;
    int hours = (total_time - minutes) / 60;

    printf("%d: %d: %d\n",hours, minutes, seconds );
    return 0;
}
