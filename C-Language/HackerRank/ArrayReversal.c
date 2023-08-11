#include <stdio.h>
#include <stdlib.h>

void reverse (int* b);
static int len;

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    len = num;
    reverse (arr);

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
void reverse (int *b)
{
  void swap(int*, int*);
  int i = 0, j = len-1;
  for (int k = 0; k < len; ++k)
  {
     swap(&b[i++], &b[j--]);
     if (i >= j) break;
  }

}


void swap(int *a, int* b)
{
  int hold = *a;
  *a = *b;
  *b = hold;
}

