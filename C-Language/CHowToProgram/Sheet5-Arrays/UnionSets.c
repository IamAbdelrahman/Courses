#include <stdio.h>
#define SIZE    5
void main(void)
{
    int set1[SIZE];
    int set2 [SIZE];

    int Union [2 * SIZE];

    printf("Enter your first set:\n");
    for (size_t i = 0; i < SIZE; ++i)
        scanf("%d", &set1[i]);

    printf("Enter your second set:\n");
    for (size_t j = 0; j < SIZE; ++j)
        scanf("%d", &set2[j]);

    int i = 0;
    for (size_t k = 0; k < SIZE; ++k)

            for (size_t w = 0; w < SIZE; ++w)
        {
                if (set1[k] == set2[w])
                {


                    Union[i] = set1[k];
                    ++i;
                }
        }



    for (size_t j = 0; j < i; ++j)
        printf("Union[%lu] = %d\n", j, Union[j]);

}
}
