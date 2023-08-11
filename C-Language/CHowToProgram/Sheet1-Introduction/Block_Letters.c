/*
    Author: Abdelrahman Kamal
    Program:  Construct block letters out of the letter they represent
*/

#include <stdio.h>
void P_block (void);
void J_block (void);
void D_block (void);

int main(void)
{   
    P_block ();
    printf("\n");

    J_block();
    printf("\n");
    
    D_block();
    return 0;
}

void P_block (void)
{
    int i = 0, j = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i == 0)
                printf("P");

            else if (i == 1 || i == 2 || i == 3)
            {
                if (j == 4 || j == 8)
                    printf("P");
                else
                    printf(" ");
            }
            else
            {
                if (j == 5 || j == 7)
                    printf("P");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}

void J_block (void)
{
    int i = 0, j = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i == 0)
            {
                if (j == 2 || j == 3)
                    printf("J");
                else
                    printf(" ");
            }

            else if (i == 1)
            {
                if (j == 1)
                    printf("J");
                else
                    printf(" ");
            }

            else if (i == 2)
            {
                if (j == 0)
                    printf("J");
                else
                    printf(" ");
            }

            else if (i == 3)
            {
                if (j == 1)
                    printf("J");
                else
                    printf(" ");
            }

            else
                printf("J");
        }
        printf("\n");
    }
}

void D_block (void)
{
    int i = 0, j = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i == 0)
                printf("D");

            else if (i == 1 || i == 2)
            {
                if (j == 0 || j == 8)
                    printf("D");
                else
                    printf(" ");
            }

            else if (i == 3)
            {
                if (j == 1 || j == 7)
                    printf("D");
                else
                    printf(" ");
            }

            else
            {   
                if (j == 2 || j == 3 || j == 4 || j == 5 || j == 6)
                    printf("D");
                else
                    printf(" ");
                
            }
                
        }
        printf("\n");
    }
}