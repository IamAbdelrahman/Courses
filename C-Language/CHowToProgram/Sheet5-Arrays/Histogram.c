#include<stdio.h>
#define SIZE 5
int main(void)
{
    int c [SIZE] = {14, 3, 4, 22, 2};

    printf("%s%11s %11s\n", "Element", "Value", "Histo");
    for (unsigned int i = 0; i < SIZE; ++i)
    {
        printf("%u %11d\t\t", i, c[i]);

        for (int j = 0; j < c[i]; ++j)
            printf("%s", "*");
        puts("");
    }
}
