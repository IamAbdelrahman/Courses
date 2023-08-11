#include <stdio.h>

int main()
{
    int n, y;
    int i = 0, j = 0;

    scanf("%d", &n);

    if (n > 1)
        y = n + (n - 1);

    int arr[y][y];
    j = y;

    while (n >= 1)
        {

        for (int r = i; r < j; ++r)
                for (int c = i; c < j; ++c)
                    arr[r][c] = n;

        n--;
        i++;
        j--;
        }

        for (int r = 0; r < y; r++)
        {
            for (int c = 0; c < y; c++)
                printf("%d ", arr[r][c]);

            puts("");
        }


    return 0;
}





