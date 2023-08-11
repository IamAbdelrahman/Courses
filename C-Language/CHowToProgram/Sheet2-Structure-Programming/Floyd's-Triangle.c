#include<stdio.h>
int main(void){
    // Floyd's Triangle of 4 rows.
    int i = 1;
    int a = 1;
    int n;
    scanf("%d",&n);
    while (i <= n){ // outer loop to count the rows.
            int j = 1;
            while (j <= i){
                    printf("%d ",a);
                    j++;
                    a++;}

        printf("\n");
        i++;}
}
