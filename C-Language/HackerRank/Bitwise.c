#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 2000

void calculate_the_maximum(int n, int k) {

int large (int arr[], int size, int threshold);

  int a [n], b [n];
  int and [n*n], or [n*n] , xor [n*n];
  int z = 0;

  for (size_t i = 0; i < n; ++i)
    a[i] = i + 1;

  for (size_t i = 0; i < n; ++i)
    b[i] = i + 1;


  for (size_t j = 0; j < n; ++j)
  {
      for (size_t w = 0; w < n; ++w)
      {
          if ( j >= w ) continue ;

          else
            {

            and[z] = a[j] & b[w];

            or[z] = a[j] | b[w];

            xor[z] = a[j] ^ b[w];

            }
        z++;

      }
  }



  int l1 = large (and, z, k);
  int l2 = large (or, z, k);
  int l3 = large (xor, z, k);



 printf("%d\n", l1);
 printf("%d\n", l2);
 printf("%d\n", l3);

}
int large (int arr[], int size, int threshold)
{
  int largest = 0;

  for (size_t i = 0; i < size; ++i)
  {
    if (arr[i] < threshold)
  {
        if (largest < arr[i]) largest = arr[i];
  }

  }

  return largest;
}
int main() {

    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

/* Algorithm

define an array of a and b to get all possibilities of comparing
define an array of and, or and xor operators to store the results in
iteration in all arrays of bitwise operators to determine the max number that is less than k*/
