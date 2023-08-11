#include <stdio.h>
#define SIZE    100

void main(void)
{
    int range [SIZE];
    int count = 1000;

    for (size_t i = 0; i < SIZE; ++i )
    {


        range[i] = count;
        count++;
    }
    printf("%s %10s\n", "Sales People", "Amount");

    for (size_t j = 0; j < SIZE; ++j)
    {
        printf("%d %10.2f$\n", j+1, 200.0 + (9.0 * range[j] / 100.0) );
    }
}
