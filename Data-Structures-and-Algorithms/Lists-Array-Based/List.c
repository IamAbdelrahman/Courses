/******************************************************************************
 * Copyright (C) 2023 by Abdelrahman Kamal - Introduction to Data Structures
 * By Phd. Walid Youssef - Course introduced by Helwan-University and Recorded
 * on YouTube.
 *****************************************************************************/
/**
 * @file List.c
 * @brief Implementaion of List Data Structure
 *
 * @author Abdelrahman Kamal
 * @date 12/9/2023
 *
 */
#include "List.h"

/**
 * @brief  Initialize the List
 *  
 *  This function is used to initialize the List through initializing the size with zero.
 *  Pre-condition: The list is just declared or created.
 *  Post-condition: The list is just initialized.
 * @param Pl: It takes a pointer to struct List
 *
 * @return It returns nothing
 */
void initializeList(List_t *Pl) {
    Pl->size = 0;
}
/***********************************************************************************/

/**
 * @brief  Check if the list is empty or not
 *  
 *  This function is used to check if the list is empty or not by
 *  checking the value of the size, if the size is 0, it returned 1
 *  that means the list is truely empty and vice versa.
 *  Pre-condition: The list is initialized.
 *  Post-condition: It returns the state of the list.
 * @param Pl: It takes a pointer to struct List
 *
 * @return It returns an integer 0 or 1
 */
int ListEmpty (List_t *Pl) {
    return !(Pl->size);
}
/***********************************************************************************/

/**
 * @brief  Check if the list is full or not
 *  
 *  This function is used to check if the list is full or not
 *  by checking the equality between the size and MAXLIST.
 *  Pre-condition: The list is just initialized.
 *  Post-condition: It returns the state of the list.
 * @param Pl: It takes a pointer to struct List
 *
 * @return It returns an integer 0 or 1.
 */
int ListFull (List_t *Pl) {
    return (Pl->size == MAXLIST);
}
/***********************************************************************************/

/**
 * @brief  Get the size of the List
 *  
 *  This function is used to get the size of the list through
 *  returning the current size of the list, as the size increments
 *  when inserting new elemnts in the list, and decrments in the opposite
 *  process.
 * @param Pl: It takes a pointer to struct List
 *
 * @return It returns an integer 0 or 1.
 */
int ListSize (List_t *Pl) {
    return (Pl->size);
}
/***********************************************************************************/

/**
 * @brief  Destroy the List
 *  
 *  This function is used to destroy the List through changing the size to zero.
 * @param Pl: It takes a pointer to struct List
 *
 * @return It returns nothing
 */
void DestroyList(List_t *Pl) {
    Pl->size = 0;
}
/***********************************************************************************/

/**
 * @brief  Insert elements in the List
 *  
 *  This function is used to insert new elements in the list
 *  in the 'pos' position, note that the 0 <= p <= size, that means
 *  we can insert only in this range, so the loop shifts up all the elements
 *  in that ragne to free the Pth location, to be ready to insert in
 *  Pre-condition: The list is just initialized, not full, and the p position
 *  follows the range.
 *  Post-condition: The element 'e' is inserted in the 'p' location and 
 *  the size is increased by one.
 * @param Pl: It takes a pointer to struct List.
 * @param e: It takes an element of a LISTENTRY data type.
 * @param pos: It takes an int pos indicates the position of the inserted element.
 *
 * @return It returns nothing
 */
void InsertList(int pos, LISTENTRY e, List_t *Pl) {
    int i = 0;
    for (i = Pl->size - 1; i >= pos; i--) {
        Pl->entry[i+1] = Pl->entry[i];
    }
    Pl->entry[pos] = e;
    Pl->size++; 
}
/***********************************************************************************/

/**
 * @brief  Delete elements in the List
 *  
 *  This function is used to delete an already existed element in 
 *  the list at location p, and p follows this relationship 
 *  0 <= p <= size-1, so the size is the index of the next location to be
 *  inserted in, so if p = size, it doesn't make sense as this place is empty
 *  so here the loop shifts down all the elements in the range [p+1, size-1] to
 *  free the Pth location
 *  Pre-condition: The list is just initialized, not empty, and the p position
 *  follows the range.
 *  Post-condition: The element 'e' is returned and the size is decreased by one.
 * @param Pl: It takes a pointer to struct List.
 * @param Pe: It takes a pointer to a element of LISTENTRY data type.
 * @param pos: It takes an int indicating the index/location of the element.
 *
 * @return It returns nothing
 */
void DeleteList(int pos, LISTENTRY *Pe, List_t *Pl) {
    int i = 0;
    *Pe = Pl->entry[pos];
    for (i = pos; i < Pl->size ; i++) {
        Pl->entry[i] = Pl->entry[i+1];
    }
    Pl->size--; 
}
/***********************************************************************************/

/**
 * @brief  Retrieve elements from the List
 *  
 *  This function is used to copy an already existed element in 
 *  the list at location p, and p follows this relationship 
 *  0<= p <= size-1, so the size is the index of the next location to be
 *  inserted in, so if p = size, it doesn't make sense as this place is empty
 *  so here the loop shifts down all the elements in the range [p+1, size-1] to
 *  free the Pth location
 *  Pre-condition: The list is just initialized, not empty, and the p position
 *  follows the range.
 *  Post-condition: The element 'e' is returned and the list doesn't change
 * @param Pl: It takes a pointer to struct List.
 * @param Pe: It takes a pointer to a element of LISTENTRY data type.
 * @param p: It takes an int indicating the index/location of the element.
 *
 * @return It returns nothing
 */
void RetrieveList(int p, LISTENTRY *Pe, List_t *Pl) {
    *Pe = Pl->entry[p];
}
/***********************************************************************************/

/**
 * @brief  Replace an element in the List
 *  
 *  This function is used to replace an element in the list with an element
 *  entered by a user.
 *  Pre-condition: The list is just initialized, and not empty.
 *  Post-condition: The element 'e' is returned and the size doesn't change.
 * @param Pl: It takes a pointer to struct List.
 * @param e: It takes an element of LISTENTRY data type.
 * @param p: It takes an int indicating the index/location of the element.
 *
 * @return It returns nothing
 */
void ReplaceList(int p, LISTENTRY e, List_t *Pl) {
    Pl->entry[p] = e;
}
/***********************************************************************************/

/**
 * @brief  Traverse elements in the List
 *  
 *  This function is used to traverse all elements in the list
 *  so the user can use a function from his own idea to do some actions
 *  on all elements, so the implementer visits each element and pass it
 *  to a pointer to a function to the user.
 *  Pre-condition: The list is just initialized.
 *  Post-condition: All elements are passed to the user's function (e.g. Display())
 *  Post-condition: The element 'e' is returned and the size is decreased by one.
 * @param Pl: It takes a pointer to struct List.
 * @param Pf: It takes a pointer to a function takes LISTENTRY and returns void.
 *
 * @return It returns nothing
 */
void TraverseList(List_t *Pl, void (*Pf) (LISTENTRY)) {
    int i;
    for (i = 0; i < Pl->size; i++) {
        (*Pf) (Pl->entry[i]);
    }
}
/***********************************************************************************/