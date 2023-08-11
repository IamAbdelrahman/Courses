/*
    Author: Abdelrahman Kamal
    Program: Write a program than asks the user to enter the initial velocity and acceler-
    ation of an object, and the time that has elapsed,
    places them in the variables u , a , and t , and
    printsthe final velocity, v , and distance traversed, s , using the following equations
    a) v = u + at
    b) s = ut + .5 a(t*t)
*/

#include <stdio.h>
int main(void)
{
    // v: final velocity - u: initial velocity - t: time - a:acceleration - s: distance
    float u, v, t, a, s;

    printf("Enter the initial velocity, acceleration and time: ");
    scanf("%f %f %f", &u, &a, &t);
    v = u + (a * t);
    printf("So the finial velocity is %.2f m/s\n", v);
    s = (u * t) + 0.5 * (a * t * t);
    printf("And the distance is %.2f m\n", s);

    return 0;
}
