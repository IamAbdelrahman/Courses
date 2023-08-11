/*
    Author: Abdelrahman Kamal
    Program: Display the checkerboard pattern with eight
printf statements and then display the same pattern with as few printf statements as possible.
*/

#include <stdio.h>
void checkboard_pattern (void);
void checkboard_pattern2 (void);
int main(void)
{   
    // Method 1
    checkboard_pattern();
    printf("\n");
    // Method 2
    checkboard_pattern2();
    return 0;
}

void checkboard_pattern(void)
{
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
}

void checkboard_pattern2 (void)
{
    int i = 0;
    for (i = 0; i < 8; i++)
    {
        if (i % 2 == 0)
            printf("* * * * * * * *\n");
        else
            printf(" * * * * * * * *\n");
    }
}