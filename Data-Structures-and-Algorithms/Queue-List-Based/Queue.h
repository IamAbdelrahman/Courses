/******************************************************************************
 * Copyright (C) 2023 by Abdelrahman Kamal - Introduction to Data Structures
 * By Phd. Walid Youssef - Course introduced by Helwan-University and Recorded
 * on YouTube.
 *****************************************************************************/
/**
 * @file Queue.h
 * @brief Interface of Queue data structures.
 *
 * @author Abdelrahman Kamal
 * @date 5/12/2023
 *
 */
/**
 * The Queue here is implemented using an array with MAXQUEUE size 
 * determined by the user, and there are 3 variables size, front, and 
 * rear. All these are included in a derived-data type > a struct.
 * front is the index of the 1st element to be served.
 * rear is the last index of the last element inserted.
 * 1) If the front = rear that means the queue has one element.
 * 2) If the front > Next to rear that means the queue is empty or full.
 * 
*/
#ifndef __QUEUE_H__
#define __QUEUE_H__
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
typedef uint32_t QUEUEENTRY; 

typedef struct queuenode {
    QUEUEENTRY entry;
    struct queuenode *next;
}QueueNode_t;

typedef struct queue {
    QueueNode_t *front;
    QueueNode_t *rear;
    int size;
}Queue_t;

/* Functions Prototypes */
void initializeQueue (Queue_t *);
int QueueFull (Queue_t *);
int Enqueue(QUEUEENTRY , Queue_t *);
void Dequeue (QUEUEENTRY *, Queue_t *);
int QueueEmpty (Queue_t *);
int QueueTop (Queue_t *);
int QueueSize (Queue_t *);
void ClearQueue (Queue_t *);
void TraverseQueue(Queue_t *, void (*) (QUEUEENTRY));

#endif /* __QUEUE_H__ */
