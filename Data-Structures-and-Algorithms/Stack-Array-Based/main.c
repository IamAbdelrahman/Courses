#include <stdio.h>
#include "Stack.h"

int main(void) {
    STACKENTRY e = 0;
    Stack s;
    initializeStack(&s);
    
    int i = 0, j = 0;
    for (i = 0; i < 6; i++) {
        scanf("%d", &j);
        if (!StackFull(&s)) {
            push(j, &s);
        }       
    }

    for (i = 0; i < 3; i++) {
        if (!StackEmpty(&s)) {
            pop(&e, &s);
        }
    }

    TraverseStack(&s, &Display);
    ClearStack(&s);
    return 0;
}