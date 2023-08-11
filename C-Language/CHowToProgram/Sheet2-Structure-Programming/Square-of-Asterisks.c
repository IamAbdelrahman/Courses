#include<stdio.h>

int main(void){

    int size = 1;
    printf("Hello, please enter your size 1:20: ");
    scanf("%d",&size);
    
    int i = 1;
    while (i <= size){
    
            int j = 1;
            while (j<= size){
                printf("*");
                j++;
                }
                
        printf("\n");
        i++;
    }

}


