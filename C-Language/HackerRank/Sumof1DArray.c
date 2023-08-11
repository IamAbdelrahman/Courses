#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, total = 0;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; ++i)
        total += arr[i];

    printf("%d\n", total);
    return 0;

}
