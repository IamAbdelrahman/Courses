#define SIZE 8
#include <stdio.h>

void merge_array (int a[], int b[], int c[], int size);
void print_array (int data[], int size, char *str);
void merge_sort (int key[], int size);

int main(void)
{
    int a[SIZE] = {93, 82, 88, 90, 99, 6, 7, 103}; // a and b have the same size.
    //int b[SIZE] = {36, 45, 68, 77, 100};
    //int c [2 * SIZE];

    print_array (a, SIZE, "My unsorted data");
    printf("\n\n");

    merge_sort(a, SIZE);

    print_array (a, SIZE, "My unsorted data");
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

void merge_sort (int key[], int size)
{
    int j, k;
    int w [size];

    for (k = 1; k < size; k *= 2)
    {
        for (j = 0; j < size - k; j += 2*k)
            merge_array(key + j, key + j + k, w + j, k);

        for (j = 0; j < size; ++j)
            key[j] = w[j];
            }
}


