#include "Queue.h"
void Display (QUEUEENTRY);
int main(void) {
    QUEUEENTRY e = 0;
    Queue_t q;
    initializeQueue(&q);
    
    int i = 0;
    for (i = 0; i < 5; i++) {
        if (!QueueFull(&q)) {
            Enqueue(i, &q);
        }       
    }

    for (i = 0; i < 2; i++) {
        if (!QueueEmpty(&q)) {
            Dequeue(&e, &q);
        }
    }

    printf("Queue size is %d\n", QueueSize(&q));
    printf("------------\n");
    printf("The 1st element to be served is %d\n", QueueTop(&q));
    printf("------------\n");
    TraverseQueue(&q, &Display);
    ClearQueue(&q);
    printf("------------\n");
    TraverseQueue(&q, &Display);
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
 void Display (QUEUEENTRY e) {
    printf("%d\n", e);
}
