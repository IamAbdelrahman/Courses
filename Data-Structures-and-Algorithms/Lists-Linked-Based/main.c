#include "List.h"
void Display (LISTENTRY);
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
    RetrieveList(0, &item, &L);
    printf("The retrieved element is %u\n", item);
    printf("The list size is %u\n", ListSize(&L));
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
