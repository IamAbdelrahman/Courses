#define SIZE 5
#include <stdio.h>

void merge_array (int a[], int b[], int c[], int size);
void print_array (int data[], int size, char *str);

int main(void)
{
    int a[SIZE] = {67, 82, 88, 90, 99}; // a and b have the same size.
    int b[SIZE] = {36, 45, 68, 77, 100};
    int c [2 * SIZE];

    print_array (a, SIZE, "My sorted data1");
    printf("\n\n");

    print_array (b, SIZE, "My sorted data2");
    printf("\n\n");

    merge_array (a, b, c, SIZE);

    print_array (c, 2*SIZE, "My finally sorted data");
    printf("\n\n");
}

void print_array (int data[], int size, char *str)
{
    printf("%s\n", str);

    for (int i = 0; i < size; ++i)
        printf("%d\t", data [i]);
}

void merge_array (int a[], int b[], int c[], int size) // a and b are sorted arrays and have the same size.
{
    int i = 0, j = 0, k = 0;  // Initialize the index of each array.

    while (i < size && j < size)
    {
        if (a[i] < b [j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
            }

    while (i < size)
        c[k++] = a[i++];
    while (j < size)
        c[k++] = b[j++];
}
