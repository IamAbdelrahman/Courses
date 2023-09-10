#include <stdio.h>
#include "Stack.h"
void Display (STACKENTRY);
int main(void) {
    STACKENTRY e = 0;
    Stack s;
    initializeStack(&s);
    
    int i = 0, j = 0;
    for (i = 0; i < 6; i++) {
        scanf("%d", &j);
        if (!StackFull(&s)) {
            Push(j, &s);
        }       
    }

    for (i = 0; i < 3; i++) {
        if (!StackEmpty(&s)) {
            Pop(&e, &s);
        }
    }

    TraverseStack(&s, &Display);
    ClearStack(&s);
    return 0;
}

/**
 * @brief  Displaying an element of the stack
 *  
 *  This function is used to print an element of the stack
 *  using the printf() function with a specifier that's known
 *  to only the user level who decides on the STACKENTRY.

 * @param  e: It takes an element of a data type of STACKENTRY.
 *
 * @return It returns nothing
 */
 void Display (STACKENTRY e) {
    printf("%d\n", e);
}
