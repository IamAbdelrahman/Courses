/******************************************************************************
 * Copyright (C) 2023 by Abdelrahman Kamal - Introduction to Data Structures
 * By Phd. Walid Youssef - Course introduced by Helwan-University and Recorded
 * on YouTube.
 *****************************************************************************/
/**
 * @file Stack.c
 * @brief Implementaion of Stack Data Structure
 *
 * @author Abdelrahman Kamal
 * @date 5/9/2023
 *
 */
#include "Stack.h"
#include <stdio.h>
#define MAX_STACK   10
typedef int STACKENTRY; 

/**
 * @brief  Intializing the Stack
 *  
 *  This function is used to initialize the stack through
 *  initializing the top varialbe with zero (i.e. initialize the index of 
 *  the first available place to push in the stack)
 * @param Ps: It takes a pointer to struct stack
 *
 * @return It returns nothing
 */
void initializeStack(Stack *Ps) {
    Ps->top = 0;
}
/***********************************************************************************/

/**
 * @brief  Check if the stack is full or not
 *  
 *  This function is used to check the stack's capacity through
 *  checking the index of the entry whether it's equal to the
 *  MAX_STACK meaning that the stack is full or not
 *  Pre-conditions: The stack exists
 *  Post-conditions: It returns the state of the stack 1 or 0;
 * 
 * @param Ps: It takes a pointer to struct stack
 * @return It returns an integer 1 or 0
 */
int StackFull (Stack *Ps) {
    return (Ps->top == MAX_STACK);
}
/***********************************************************************************/

/**
 * @brief  Push into the Stack's top
 *  
 *  This function is used to push at the top of the stack
 *  through using the pointer 'Ps' to access the struct's elements
 *  by accessing the array with an index equals to the top's value
 *  as the top's value is the index of this array, then assign the 
 *  'e' value entered by the user, and increment the top every time
 *  to get ready for the next pushing.
 *  Pre-conditions: Ths stack should be initialized and not full.
 *  Post-conditions: The element 'e' is stored at the top of the stack 
    and its value doesn't change there.

 * @param  e: It takes a value of the data type STACKENTRY.
 * @param  Ps: It takes a pointer to struct stack. 
 *
 * @return It returns nothing
 */
void Push(STACKENTRY e, Stack *Ps) {
    Ps->entry[Ps->top++] = e;
}
/***********************************************************************************/

/**
 * @brief  Pop off the Stack's top
 *  
 *  This function is used to pop an element off the top of the
 *  stack, through accessing the struct's elements by gettint into
 *  the array with an index of the top's value but pre-decremented
 *  by one, because top's value is post-incremented after each time
 *  we push a value into the stack'top, so we should decrement it
 *  to get the value we want to pop.
 *  Pre-conditions: Ths stack should be initialized and not empty.
 *  Post-conditions: The last element entered is returned.

 * @param  Pe: It takes a pointer to the data type STACKENTRY.
 * @param  Ps: It takes a pointer to struct stack. 
 *
 * @return It returns nothing
 */
void Pop (STACKENTRY *Pe, Stack *Ps) {
    *Pe = Ps->entry[--Ps->top];
}
/***********************************************************************************/

/**
 * @brief  Check if the stack is empty or not
 *  
 *  This function is used to check if the stack is empty
 *  or not, through accessing the struct's elements and
 *  see if the top's value is zero or not, if it's zero
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
 * @brief  Copy the top element of the stack
 *  
 *  This function is used to copy the top element of 
 *  the stack through assigning the value of it into 
 *  the dereferenced pointer 'Pe', and this value is
 *  at the index of top - 1.
 *  Pre-Conditions: The same as pop pre-conditions.
 *  Post-Conditions: It returns the value of the last pushed element.

 * @param  Ps: It takes a pointer to struct stack.
 * @param  Pe: It takes a pointer to the data type STACKENTRY.
 *
 * @return It returns nothing
 */
void StackTop (STACKENTRY *Pe, Stack *Ps) {
    *Pe = Ps->entry[Ps->top-1];
}
/***********************************************************************************/

/**
 * @brief  Get the stack size
 *  
 *  This function is used to get the size of the stack
 *  through accessing the struct stack by the 'Ps' pointer
 *  to get the value of top.
 *  Pre-conditions: The stack is just initialized
 *  Post-conditions: It returns no.elements in the stack.
 *  Note that: This function achieves here the information hiding
 *  in the implementation level (Abstraction), because someone may think
 *  that he can use direclty an access to the stack in the user-level to get
 *  the value of top and then it's the value of the stack size.

 * @param  Ps: It takes a pointer to struct stack.
 *
 * @return It returns an integer, the value of top.
 */
int StackSize (Stack *Ps) {
    return (Ps->top);
}
/***********************************************************************************/

/**
 * @brief  Clearing the stack
 *  
 *  This function is used to clear the stack through
 *  assigning zero to the top variable.
 *  Pre-conditions: The stack is just initialized.
 *  Post-conditions: It destroys all elements in the stack
 *  and it's considered to initialize the stack.
 *  Note that: This function is similar to the createStack() function
 *  in code, but it's different from the concept, beacuse at the user-level
 *  the user doesn't know the details, and it appears that each function has
 *  a different task to do.

 * @param  Ps: It takes a pointer to struct stack.
 *
 * @return It returns nothing
 */
void ClearStack (Stack *Ps) {
    Ps->top = 0;
}
/***********************************************************************************/

/**
 * @brief  Traversing the stack
 *  
 *  This function is used to display each element in the stack
 *  by using a function display() that's well-known for only the
 *  user not the implementer, and this display() function just prints
 *  one element of the data type STACKENTRY.
 *  Pre-conditions: The stack is just initialized.
 *  Post-conditions: It displays all elements in the stack

 * @param  Ps: It takes a pointer to struct stack.
 * @param  Pf: It takes a pointer to function takes a data type
 * of STACKENTRY and returns void
 *
 * @return It returns nothing
 */ 
  void TraverseStack(Stack *Ps, void (*Pf) (STACKENTRY)) {
        int i = 0;
        for (i = Ps->top; i > 0; i--) {
            (*Pf) (Ps->entry[i-1]);
        }
  }
/***********************************************************************************/

