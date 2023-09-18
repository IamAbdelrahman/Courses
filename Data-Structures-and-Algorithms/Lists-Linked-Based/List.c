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
 *  This function is used to initialize the List through
 *  initializing the size with zero, and the 'head' pointer to 
 *  point to NULL.
 *  Pre-condition: The list is just declared or created.
 *  Post-condition: The list is just initialized.
 * @param Pl: It takes a pointer to struct List
 *
 * @return It returns nothing
 */
void initializeList(List_t *Pl) {
    Pl->size = 0;
    Pl->currentpos = -1;
    Pl->head = NULL;
    Pl->current = NULL;
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
 *  but here, the list is always not full (supposed if the user doesn't
 *  exceed the physical size of the memory).
 *  Pre-condition: The list is just initialized.
 *  Post-condition: It returns always false.
 * @param Pl: It takes a pointer to struct List
 *
 * @return It returns an integer 0 or 1.
 */
int ListFull (List_t *Pl) {
    return 0;
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
 *  This function is used to destroy the List through
 *  creating a local pointer 'Pn' that points to the next node
 *  after the node the head points to, so now we have two pointers, the 'head'
 *  holds the 1st node and 'Pn' holds the second node, now we free the 'head',
 *  repeating this process until we find out the 'head' points to NULL, then we 
 *  zero the size.
 * @param Pl: It takes a pointer to struct List
 *
 * @return It returns nothing
 */
void DestroyList(List_t *Pl) {
    List_Node_t *Pn;
    while (Pl->head) {
        Pn = Pl->head->next;
        free(Pl->head);
        Pl->head = Pn;
    }
    Pl->size = 0;
}
/***********************************************************************************/

/**
 * @brief  Insert elements in the List
 *  
 *  This function is used to insert new elements in the list
 *  in the 'p' position, through creating a pointer that point to a listnode, 
 *  the first one is 'Pn' and it's dynamically allocated to store 
 *  the element we want to insert in the list, and it access the listnode
 *  to make the next pointer points to NULL as an initial value, then we check 
 *  the position, if it is the 1st position (i.e. the list is empty) so directly
 *  the next pointer of the 'Pn' will point to NULL, and the head pointer will point 
 *  to the 'Pn', and the 'current' pointer points to the inserted node and the currentpos will be 0
 *  if not and the position is > 1, we check again about the 'pos' and the current position
 *  to see if the position less than or equal, we will iterate from the head till the position
 *  that is before the position we want to insert in then we make the the next pointer of the node 
 *  before the inserted node points to the new node, and the next pointer of the inserted node points
 *  to the node the current->next points to, but if the position is higher than the current position
 *  the iteration will start from the current position till the determined position, and hence 
 *  we enhance the performance here and save the execution time of this function.
 *  Pre-condition: The list is just initialized, and not full
 *  Post-condition: The element 'e' is inserted in the 'p' location and 
 *  the size is increased by one. 
 * @param Pl: It takes a pointer to struct List.
 * @param e: It takes an element of a LISTENTRY data type.
 * @param pos: It takes an int pos indicates the index/location.
 *
 * @return It returns nothing
 */
int InsertList(int pos, LISTENTRY e, List_t *Pl) {
    List_Node_t *Pn;
    if((Pn = (List_Node_t*) malloc(sizeof(List_Node_t)))) {
    Pn->entry = e;
    Pn->next = NULL;
    if (pos == 0) {
        Pn->next = Pl->head;
        Pl->head = Pn;
        Pl->current = Pl->head;
        Pl->currentpos = 0;
    }
    else {
        if (pos <= Pl->currentpos) {
            Pl->current = Pl->head;
            Pl->currentpos = 0;
        }
        for (; Pl->currentpos != pos - 1; Pl->currentpos++) {
            Pl->current = Pl->current->next; 
        }
        Pn->next = Pl->current->next;
        Pl->current->next= Pn;
        Pl->size++;
        return 1;
    }
}
else return 0;
}
/***********************************************************************************/

/**
 * @brief  Delete elements in the List
 *  
 *  This function is used to delete an already existed element in 
 *  the list at location p, by creating two local pointers that point
 *  to listnode 'Qn' and 'temp', if the position equals zero, so we want to 
 *  delete the only element in the list, so we will get the element from 
 *  the only node and store it in the (*Pe) that is passed by the user, then we use
 *  the 'temp' pointer to point to the areat that the 'next' pointer of the 1st node
 *  points to which is NULL here, and then we free the 'head' pointer, and make it 
 *  points to the temp, but if the position is not zero, and we want to delete from 
 *  any position in the list, so we use the 'Qn' pointer to loop inside the list
 *  to get the node before the node we want to delete it, then we get the value of the
 *  element of the node we want to delete it by using this pointer 'Qn', and we make the 
 *  'temp' pointer to point to the node that the deleted-node points to, then we free the 'Qn->next'
 *  pointer, to use this pointer to point to the node that's after the deleted node.
 *  Pre-condition: The list is just initialized and not empty
 *  Post-condition: The element 'e' is returned and the size is decreased by one.
 * @param Pl: It takes a pointer to struct List.
 * @param Pe: It takes a pointer to a element of LISTENTRY data type.
 * @param pos: It takes an int indicating the index/location of the element.
 *
 * @return It returns nothing
 */
void DeleteList(int pos, LISTENTRY *Pe, List_t *Pl) {
    List_Node_t *temp;
    if (pos == 0) {
        *Pe = Pl->head->entry;
        Pl->current = Pl->head->next;
        free(Pl->head);
        Pl->head = Pl->current;
        Pl->currentpos = 0;
    }
    else {
        if (pos <= Pl->currentpos) {
            Pl->current = Pl->head;
            Pl->currentpos = 0;
        }
        for (; Pl->currentpos != pos - 1; Pl->currentpos++) {
            Pl->current = Pl->current->next; 
        }
        *Pe = Pl->current->next->entry;
        temp = Pl->current->next->next;
        free(Pl->current->next);
        Pl->current->next = temp;
        Pl->size--;
    }
}
/***********************************************************************************/

/**
 * @brief  Retrieve elements from the List
 *  
 *  This function is used to copy an already existed element in 
 *  the list at location pos, through creating a 'Qn' pointer 
 *  to loop till reaching the position of the node we want to
 *  retrieve its element, and get the value in the '*Pe' that's
 *  passed by the user.
 *  Pre-condition: The list is just initialized and not empty
 *  Post-condition: The element 'e' is returned and the list doesn't change
 * @param Pl: It takes a pointer to struct List.
 * @param Pe: It takes a pointer to a element of LISTENTRY data type.
 * @param pos: It takes an int indicating the index/location of the element.
 *
 * @return It returns nothing
 */
void RetrieveList(int pos, LISTENTRY *Pe, List_t *Pl) {
    // int i = 0;
    // List_Node_t *Qn;
    // for (Qn = Pl->head; i < pos; i++) {
    //     Qn = Qn->next;
    // }
    // *Pe = Qn->entry;
    if (pos == 0) {
        *Pe = Pl->head->entry;
        Pl->currentpos = 0;
    }
    else {
        if (pos <= Pl->currentpos) {
            
        }
    }
}
/***********************************************************************************/

/**
 * @brief  Replace an element in the List
 *  
 *  This function is used to replace an element in the list with an element
 *  entered by a user, through creating a 'Qn' pointer 
 *  to loop till reaching the position of the node we want to
 *  replace its element, and replace the value of the node with the value that's
 *  passed by the user.
 *  Pre-condition: The list is just initialized, and not empty.
 *  Post-condition: The element 'e' is returned and the size doesn't change.
 * @param Pl: It takes a pointer to struct List.
 * @param e: It takes an element of LISTENTRY data type.
 * @param p: It takes an int indicating the index/location of the element.
 *
 * @return It returns nothing
 */
void ReplaceList(int pos, LISTENTRY e, List_t *Pl) {
    int i = 0;
    List_Node_t *Qn;
    for (Qn = Pl->head; i < pos; i++) {
        Qn = Qn->next;
    }
    Qn->entry = e;
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
    List_Node_t *Pn = Pl->head;
    while (Pn) {
        (*Pf) (Pn->entry);
        Pn = Pn->next;
    }
}
/***********************************************************************************/