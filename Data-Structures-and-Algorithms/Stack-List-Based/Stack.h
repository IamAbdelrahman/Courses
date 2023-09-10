/******************************************************************************
 * Copyright (C) 2023 by Abdelrahman Kamal - Introduction to Data Structures
 * By Phd. Walid Youssef - Course introduced by Helwan-University and Recorded
 * on YouTube.
 *****************************************************************************/
/**
 * @file Stack.h
 * @brief Implementaion of Stack-List-Based Data Structure
 *
 * @author Abdelrahman Kamal
 * @date 7/9/2023
 *
 */
#ifndef __STACK_H__
#define __STACK_H__

typedef int STACKENTRY; 

typedef struct stacknode {
    STACKENTRY entry;
    struct stacknode *next;
}StackNode;

typedef struct stack {
    StackNode *top;
}Stack;

/*
* Why not ? typedef StackNode* Stack
* Because of three reasons:-
* a) To make a logical distinction between the stack itself and its top which points to a node.
* b) To be consistent with the definitions/designs of other data structures (stacks-array-based).
* c) For upgradability (adding more functions) that may need other pieces of information to be
* saved than top.
*/

/* Functions Prototypes */
void initializeStack(Stack *);
void Push(STACKENTRY , Stack *);
void Pop (STACKENTRY *, Stack *);
void StackTop (STACKENTRY *, Stack *);
int StackEmpty (Stack *);
int StackFull (Stack *);
int StackSize (Stack *);
void ClearStack (Stack *);
void TraverseStack(Stack *, void (*) (STACKENTRY));
void Display(STACKENTRY);

#endif /* __STACK_H__ */
