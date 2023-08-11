#include <stdio.h>
int sum (int, int);
int max (int, int);
void main(void)
{
    int days [366];
    int sum = 0;
    int i = 0;

    do {
        printf("day [%d]: ", i+1);
        scanf("%d", &days[i]);
    }
        while (days[i++] > 0);
       // int size = sizeof (days) / sizeof (days[i]);  // Another method

       int size = i - 1;
        for (i = 0; i < size; i++){
            printf("\nTemperature of day %d: is %d C\n",i+1, days[i]);
            sum += days[i];}
            printf("\nAverage is %.2f\n",(float) sum / size);

      char max = 'A' ;
      //int max = -100;
        for (i = 0; i < size; i++)
        {
           if ( days[i] != 'A')
            {
                max = (int) max;
                max = days[i];
            }
            // if (days[i] > max) max = days[i];
        }
         printf("\nMax Temperature is %d\n", max);
}

