/******************************************************************************
 * Copyright (C) 2023 by Abdelrahman Kamal - Introduction to Data Structures
 * By Phd. Walid Youssef - Course introduced by Helwan-University and Recorded
 * on YouTube.
 *****************************************************************************/
/**
 * @file Stack.c
 * @brief Implementaion of Stack-List-Based Data Structure
 *
 * @author Abdelrahman Kamal
 * @date 7/9/2023
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
/**
 * @brief  Intializing the Stack
 *  
 *  This function is used to initialize the stack through
 *  initializing the top pointer with NULL.
 * @param Ps: It takes a pointer to struct stack
 *
 * @return It returns nothing
 */
void initializeStack(Stack *Ps) {
    Ps->top = NULL;
}
/***********************************************************************************/

/**
 * @brief  Push into the Stack's top
 *  
 *  This function is used to push at the top of the stack
 *  through using the pointer 'Ps' to access ths struct stack
 *  and holds the top pointer, then we define a local pointer 'Pn'
 *  which will be allocated dynamically with the size of the stacknode
 *  and points to it, and we access the stacknode using this pointer 'Pn'
 *  to put the 'e' value in the node and to make the pointer inside this node
 *  points to the same place that the top pointer points (Initially it's NULL)
 *  after that we make the top pointer points to this struct node to make it at
 *  the top of the stack and finally the next pointer will be ready to point to 
 *  the next elements in the stack
 *  
 *  Pre-conditions: Ths stack exists and should be initialized.
 *  Post-conditions: The element 'e' is stored at the top of the stack 
    and its value doesn't change there.

 * @param  e: It takes a value of the data type STACKENTRY.
 * @param  Ps: It takes a pointer to struct stack. 
 *
 * @return It returns nothing
 */
void Push(STACKENTRY e, Stack *Ps) {
    StackNode *Pn = (StackNode*) malloc(sizeof(StackNode));
    Pn->entry = e;
    Pn->next = Ps->top;
    Ps->top = Pn;
}
/***********************************************************************************/

/**
 * @brief  Pop off the Stack's top
 *  
 *  This function is used to pop an element at the top of the stack
 *  through using a pointer 'Pe' that points to the entry element in 
 *  the stacknode to get it and store in the 'e' element, then by creating 
 *  a local pointer 'Pn' points to the structnode, and make the top pointer
 *  points to the area that next pointer in the structnode points to, then free
 *  the local pointer 'Pn'.
 *  Pre-conditions: Ths stack should be initialized and not empty.
 *  Post-conditions: The last element entered is returned.

 * @param  Pe: It takes a pointer to the data type STACKENTRY.
 * @param  Ps: It takes a pointer to struct stack. 
 *
 * @return It returns nothing
 */
void Pop (STACKENTRY *Pe, Stack *Ps) {
    StackNode *Pn;
    *Pe = Ps->top->entry;
    Pn = Ps->top;
    Ps->top = Ps->top->next;
    free(Pn);
}
/***********************************************************************************/

/**
 * @brief  Copy the top element of the stack
 *  
 *  This function is used to copy the top element of 
 *  the stack through assigning the value of it into 
 *  the dereferenced pointer 'Pe'.
 *  Pre-Conditions: The same as pop pre-conditions.
 *  Post-Conditions: It returns the value of the last pushed element.

 * @param  Ps: It takes a pointer to struct stack.
 * @param  Pe: It takes a pointer to the data type STACKENTRY.
 *
 * @return It returns nothing
 */
void StackTop (STACKENTRY *Pe, Stack *Ps) {
    *Pe = Ps->top->entry;
}
/***********************************************************************************/

/**
 * @brief  Check if the stack is empty or not
 *  
 *  This function is used to check if the stack is empty
 *  or not, through accessing the struct's elements and
 *  see if the top points to null or not, if it points to null
 *  the function returns 1 and vice versa.
 *  Pre-conditions: The stack exists
 *  Post-conditions: It returns the state of the stack 1 or 0;
 * @param  Ps: It takes a pointer to struct stack. 
 *
 * @return It returns an integer 1 or 0.
 */
int StackEmpty (Stack *Ps) {
    return !(Ps->top);
}
/***********************************************************************************/

/**
 * @brief  Check if the stack is full or not
 *  
 *  This function is supposed to check if the stack is full or not
 *  but here the stack will not be full (suppose if the user doesn't
 *  exceed the size of the physical .stack segment in RAM).
 *  Pre-conditions: The stack exists
 *  Post-conditions: It returns the state of the stack 1 or 0;
 * 
 * @param Ps: It takes a pointer to struct stack
 * @return It returns always 0
 */
int StackFull (Stack *Ps) {
    return 0;
}
/***********************************************************************************/

/**
 * @brief  Clearing the stack
 *  
 *  This function is used to clear the stack through
 *  creating a local pointer 'Pn' that points to the stacknode
 *  and we have already the top pointer that points to the top node
 *  by making the 'Pn' points to the same node the top pointer points to,
 *  we will move the 'Pn' pointer to point to the next node by using the address
 *  of the area that the next pointer in the 1st node points to, then we free
 *  the top pointer, and make it points to the next node that 'Pn' has become 
 *  pointed to, this process occurs in a loop its condition is true if the 'Pn' 
 *  points to anything but NULL.
 *  Pre-conditions: The stack exists.
 *  Post-conditions: All elements are freed.
 * @param  Ps: It takes a pointer to struct stack.
 *
 * @return It returns nothing
 */
void ClearStack (Stack *Ps) {
    StackNode *Pn = Ps->top;
    while (Pn) {
        Pn = Pn->next;
        free(Ps->top);
        Ps->top = Pn;
    }
}
/***********************************************************************************/

/**
 * @brief  Traversing the stack
 *  
 *  This function is used to display each element in the stack
 *  by using a function display() that's well-known for only the
 *  user not the implementer, and this display() function just prints
 *  one element of the data type STACKENTRY. We created a local pointer 'Pn'
 *  which points to the first node that the top pointer points to too, and 
 *  while this pointer 'Pn' points to nodes not NULL, we will access the node 
 *  to get the entry argument to pass it to the display() function.
 *  Pre-conditions: The stack is just initialized.
 *  Post-conditions: It displays all elements in the stack

 * @param  Ps: It takes a pointer to struct stack.
 * @param  Pf: It takes a pointer to function takes a data type
 * of STACKENTRY and returns void
 *
 * @return It returns nothing
 */ 
  void TraverseStack(Stack *Ps, void (*Pf) (STACKENTRY)) {
        for (StackNode *Pn = Ps->top; Pn; Pn = Pn->next) {
            (*Pf) (Pn->entry);
        }
  }
/***********************************************************************************/

/**
 * @brief  Get the stack size
 *  
 *  This function is used to get the size of the stack
 *  through creating a local pointer 'Pn' that points to
 *  the 1st node and we start counting till we find that
 *  'Pn' points to NULL and we return the count.
 *  Note that here: we may use another approach if we
 *  define a new field in the struct stack (int size)
 *  and we change its value whenever we push/pop, then
 *  we directly return its value in the stacksize() function
 *  Pre-conditions: The stack is just initialized
 *  Post-conditions: It returns no.elements in the stack.

 * @param  Ps: It takes a pointer to struct stack.
 *
 * @return It returns an integer, the value of top.
 */
int StackSize (Stack *Ps) {
    int x = 0;
    StackNode *Pn = Ps->top;
    for (x = 0; Pn; Pn = Pn->next) {
        x++;
    }
    return x;
}