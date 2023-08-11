/*
    Author: Abdelrahman Kamal
    Program: Write a C program that calculate the
    product of the two matrices and store them in a third matrix
*/

#include <stdio.h>

int main(void)
{
    // Set the 3 matrices
    int Mat_1 [2] [2] = {{1, 2}, {3, 4}};
    int Mat_2 [2] [3] = {{1, 2, 3}, {4, 5, 6}};
    int Mat_3 [2] [3];

    // Set the row and col to be used in multiplication process
    int row [2] = {0, 1};
    int col [3] = {0, 1, 2};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // Each process the row of 1st matrix and the col of 2nd matrix are constant
            Mat_3[i][j] = Mat_1 [ row[i] ][ col[0] ] * Mat_2 [ row[0] ][ col[j] ] +
            Mat_1 [ row[i] ][ col[1] ] * Mat_2 [ row[1] ][ col[j] ];
        }
    }

    // Display the result matrix.
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", Mat_3[i][j]);

        puts(" ");
    }

    return 0;
}
