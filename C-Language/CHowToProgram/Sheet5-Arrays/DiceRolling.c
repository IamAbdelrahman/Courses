#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#define SIZE    13  // No. results, two rolls will have 2-12

int main(void)
{
    int d1, d2, result;
    int freq[SIZE] = {0};
    srand(time(NULL));  // to make sure that every time rand() will produce a new number.

    for (size_t i = 0; i < 36000; ++i)
    {
        d1 = 1 + (rand() % 6);
        d2 = 1 + (rand() % 6);
        result = d1 + d2;
        ++freq[result]; // instead of using switch cases. Increment each result as it appears.
    }
    printf("%s\t%s\n", "result", "No.times");

    for (size_t j = 1; j < SIZE; ++j)   // display the results.
        printf("%lu\t%d\n", j, freq[j]);

}
