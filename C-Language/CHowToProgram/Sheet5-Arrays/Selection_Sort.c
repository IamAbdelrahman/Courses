// Sorting Arrays - Selection Sort
#include <stdio.h>

void sort (int[], int);
void print_arr (int [], int);

void main(void)

{
    int data[] = {220, 232, 30, 330, 34, 0};    // Initialize an array with some data.
    int size = sizeof(data) / sizeof(data[0]);  // Calculate the size of the array.

    print_arr(data, size);  // Use a user-defined function to print the array
    sort (data, size);  // Use a user-defined function to sort the array.

    printf("----------------\n");

    print_arr(data, size);  // Then print the sorted array.


}

void sort (int a[], int n)  // Sorting function declaration.
{
    int sorted;

    do
        {   sorted = 1;

            for (int i = 0; i < n - 1; ++i)
                if (a[i] > a[i + 1])
                {
                    int temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                    sorted = 0;
                }
        } while (sorted == 0);


}

void print_arr(int b[], int n)
{
    for (int i = 0; i < n ; ++i)

        printf("Value data[%d]: %d\n", i, b[i]);
}


