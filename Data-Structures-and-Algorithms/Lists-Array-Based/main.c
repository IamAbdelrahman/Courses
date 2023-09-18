#include "List.h"
void Display (LISTENTRY);
void Stack();
void Queue();
int main(void) {
    List_t L;
    LISTENTRY item;
    initializeList(&L);
    LISTENTRY i = 0;
    for (i = 0; i < 4; i++) {
        if (!ListFull(&L))
            InsertList(i, (i + 1), &L);
    }
    if (!ListEmpty(&L)) {
        DeleteList(0, &item, &L);
    }
    printf("----Traverse the list----\n");
    TraverseList(&L, Display);
    printf("The list size is %u\n", ListSize(&L));
    DestroyList(&L);
    printf("----Traverse the list----\n");
    TraverseList(&L, Display);
    printf("Using the general list to create a stack\n\n");
    Stack();
    Queue();

    return 0;
}
/**
 * @brief  Displaying an element of the list
 *  
 *  This function is used to print an element of the list
 *  using the printf() function with a specifier that's known
 *  to only the user level who decides on the LISTENTRY.

 * @param  e: It takes an element of a data type of LISTENTRY.
 *
 * @return It returns nothing
 */
 void Display (LISTENTRY e) {
    printf("%u\n", e);
}

/**************************************************************/
/**
 * @brief  Using the general list as a stack
 *  
 *  This function is used to form a stack using the general list
 *  through inserting always at the end of the list.
 *
 * @return It returns nothing
 */
void Stack () {
    List_t stack;
    LISTENTRY e;
    initializeList(&stack);
    LISTENTRY i = 0;
    for (i = 0; i < 4; i++) {
        if (!ListFull(&stack)) {
            InsertList(ListSize(&stack), (i+1), &stack);
        }
    }
    RetrieveList(ListSize(&stack) - 1, &e, &stack);
    printf("Last in first out is %u\n", e);
}
/**************************************************************************/

/**
 * @brief  Using the general list as a queue
 *  
 *  This function is used to form a queue using the general list
 *  through inserting always at the end of the list, and deleting
 *  always at the beginning of the list.
 *
 * @return It returns nothing
 */
void Queue () {
    List_t queue;
    LISTENTRY e;
    initializeList(&queue);
    LISTENTRY i = 0;
    for (i = 0; i < 4; i++) {
        if (!ListFull(&queue)) {
            InsertList(ListSize(&queue), (i+1), &queue);
        }
    }
    RetrieveList(0, &e, &queue);
    printf("First in first out is %u\n", e);
}
/**************************************************************************/
