/******************************************************************************
 * Copyright (C) 2023 by Abdelrahman Kamal - Introduction to Data Structures
 * By Phd. Walid Youssef - Course introduced by Helwan-University and Recorded
 * on YouTube.
 *****************************************************************************/
/**
 * @file Stack.h
 * @brief Implementaion of Stack Data Structure
 *
 * @author Abdelrahman Kamal
 * @date 5/9/2023
 *
 */
#ifndef __STACK_H__
#define __STACK_H__

#define MAX_STACK   10
typedef int STACKENTRY; 

typedef struct stack {
    int top;
    STACKENTRY entry[MAX_STACK];
}Stack;

/* Functions Prototypes */
void initializeStack(Stack *);
int StackFull (Stack *);
void push(STACKENTRY , Stack *);
void pop (STACKENTRY *, Stack *);
int StackEmpty (Stack *);
void StackTop (STACKENTRY *, Stack *);
int StackSize (Stack *);
void ClearStack (Stack *);
void TraverseStack(Stack *, void (*) (STACKENTRY));
void Display(STACKENTRY);

#endif /* __STACK_H__ */
