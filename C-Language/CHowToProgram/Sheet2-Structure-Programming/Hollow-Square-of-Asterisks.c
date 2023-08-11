#include<stdio.h>

int main(void){

    int size = 1;
    printf("Hello, please enter your size 1:20: ");
    scanf("%d",&size);
    
    int i = 1;
    while (i <= size){
    
            int j = 1;
            while (j<= size){
            
                if (i == 1 || i == size){
                        printf("*");}
                        
                else {
                
                    if (j==1 || j == size) {printf("*");}
                    else {printf(" ");}
                }
                j++;
                }

        printf("\n");
        i++;}

    }
