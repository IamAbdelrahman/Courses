/*
    Author: Abdelrahman Kamal
    Program: Write a program to draw shapes with asteriks
*/

#include <stdio.h>
void square_shape (void);
void circle_shape (void);
void diamond_shape (void);
void tree_shape (void);

int main(void)
{   
    square_shape();
    printf("\n");

    circle_shape();
    printf("\n");

    diamond_shape();
    printf("\n");
    
    tree_shape();
    return 0;
}

void square_shape (void)
{
    int i = 0 , j = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i == 0 || i == 8)
                printf("*");

            else
            {
                if (j == 0 || j == 8)
                    printf("*");
                else
                    printf(" ");
            }
                
        }
        printf("\n");
    }   
}

void circle_shape (void)
{
    int i = 0, j = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i == 0 || i == 8)
            {
                if (j == 3 || j == 4 || j == 5)
                    printf("*");
                else
                    printf(" ");
            }
            else if (i == 1 || i == 7)
            {
                if (j == 1 || j == 7)
                    printf("*");
                else
                    printf(" ");
            }

            else
            {
                if (j == 0 || j == 8)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }

}

void diamond_shape (void)
{
    int i = 0, j = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i == 0 || i == 8)
            {
                if (j == 4)
                    printf("*");
                else
                    printf(" ");
            }
            else if (i == 1 || i == 7)
            {
                if (j == 3 || j == 5)
                    printf("*");
                else
                    printf(" ");
            }
            else if (i == 2 || i == 6)
            {
                if (j == 2 || j == 6)
                    printf("*");
                else
                    printf(" ");
            }
            else if (i == 3 || i == 5)
            {
                if (j == 1 || j == 7)
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                if (j == 0 || j == 8)
                    printf("*");
                else
                    printf(" ");
            }
            
        }
        printf("\n");
    }
}

void tree_shape (void)
{
    int i = 0, j = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (i == 0)
            {
                if (j == 4)
                    printf("*");
                else
                    printf(" ");
            }
            else if (i == 1)
            {
                if (j == 3 || j == 4 || j == 5)
                    printf("*");
                else
                    printf(" ");
            }
            else if (i == 2)
            {
                if (j == 2 || j == 3 || j == 4 || j == 5 || j == 6)
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                if (j == 4)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}