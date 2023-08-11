#include <stdio.h>
#define SIZE 10
// Searching algorithm (Binary Search).

void main(void)
{
    float data[SIZE];
    float key;
    int size;

    int lower, upper, mid;

    printf("Please enter size < 100: ");
    scanf("%d", &size);

    for (int i = 0; i < size; ++i)
    {
        printf(" value data[%d]: ", i);
        scanf("%f", &data[i]);
    }

    printf("\nPlease enter your key: ");
    scanf("%f", &key);

    // Binary Search Code:
    int pos = -1;
    lower = 0;
    upper = size - 1;

    do
        {
            mid = (lower + upper) / 2;  // calculate the mid of the array.
            if (key == data[mid])   // check if the mid equals to the array.
            {
                pos = mid;  // if we find it then put its position to the pos variable and break.
                break;
            }

            else if (key > data[mid])   // if we could not find the key so we have two paths.
                lower = mid + 1;    // if the key > mid so we will continue searching in the right side of the array.

            else upper = mid - 1;   // Otherwise, we will continue searching in the left side of the array.

        } while (lower <= upper);   // all these processes occur when only lower is less than or equal upper

    if (pos == -1)
        printf("Your key is not found in your data\n");

    else printf("Your key is located at position %d", pos);
    }

    }

