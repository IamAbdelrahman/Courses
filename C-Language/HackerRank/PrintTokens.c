#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = (char*) malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = (char*) realloc(s, strlen(s) + 1);
    
    char *tokenPtr = strtok(s, " ");
    while (tokenPtr != NULL) {
      printf("%s\n", tokenPtr);
      tokenPtr = strtok(NULL, " "); // get next token
    }

    return 0;
}