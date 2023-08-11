#include <stdio.h>
#include <string.h>

void main(void)
{
    char names [100][30];
    int n;
    printf("please, enter your size < 100: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("data[%d]: ", i);
        scanf("\n");
        scanf("%[^\n]%*c", names[i]);
    }
    printf("\n=============\n");

    for (int i = 0; i < n; i++)
        printf("data[%d]: %s\n",i, names[i] );

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)

        if ((strcmp(names[i], names[j])) > 0)
        {
            char temp [30];
            strcpy(temp, names[i]);
            strcpy(names[i], names[j]);
            strcpy(names[j], temp);
        }

        printf("\n=============\n");

        for (int i = 0; i < n; i++)
            printf("data[%d]: %s\n",i, names[i] );

}

