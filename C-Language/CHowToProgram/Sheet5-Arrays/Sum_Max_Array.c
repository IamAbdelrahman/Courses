#include <stdio.h>

int Sum (int a[], int);
int Max (int b [], int);

int main(void)
{
    int days [7] = {10, 20, 60, 30, 40, 50, 11};
    int res_1 = Sum(days, 7);
    int res_2 = Max (days, 7);

    printf("Sum of the array is %d\n", res_1);
    printf("Max of the array is %d\n", res_2);

}

int Sum (int a [], int size1)
{
    int sum = 0;

    for (int i = 0; i < size1; i++)
        sum += a[i];

    return sum;
}

int Max (int b [], int size2)
{
  char max = 'A';

    for (int i = 0; i < size2; i++)
    {
        if (max == 'A')
        {
            max = (int) max;
            max = b[i];
        }
       if (b[i] > max) max = b[i];
        }

    return (int) max;
}
