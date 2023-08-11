#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = (char*) malloc(1024* sizeof(char)) ;
    scanf("%[^\n]", s);  // a11472o5t6
    s = (char*) realloc (s, strlen(s) + 1);
    int len = strlen(s), i;
    printf("%d", '9');
    int arr[10];
    for(i = 0; i < 10; i++)
        arr[i] = 0;

    for(i = 0; i < len; i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            arr[(int)(s[i] - '0')]++;
        }
    }
    for(i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    printf("\n");
    free(s);
    return 0;
}

//  g++ DigitFreq.c