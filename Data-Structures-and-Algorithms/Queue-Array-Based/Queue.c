/******************************************************************************
 * Copyright (C) 2023 by Abdelrahman Kamal - Introduction to Data Structures
 * By Phd. Walid Youssef - Course introduced by Helwan-University and Recorded
 * on YouTube.
 *****************************************************************************/
/**
 * @file Queue.c
 * @brief Implementaion of Queue Data Structure
 *
 * @author Abdelrahman Kamal
 * @date 12/9/2023
 *
 */
#include "Queue.h"
#define MAXQUEUE   10
typedef uint32_t QUEUEENTRY; 

/**
 * @brief  Intializing the Queue
 *  
 *  This function is used to initialize the Queue through
 *  initializing front with zero and the front here is the index of the place
 *  that the first elemnet will be served or removed there, but the rear is the index 
 *  of the place that when we increment it by one we will add a new element
 * @param Pq: It takes a pointer to struct Queue
 *
 * @return It returns nothing
 */
void initializeQueue(Queue_t *Pq) {
    Pq->front = 0;
    Pq->rear = -1;
    Pq->size = 0;
}
/***********************************************************************************/

/**
 * @brief  Adding a new element to the Queue.
 *  
 *  This function is used to append or add a new element 
 *  at the rear of the queue, through incrementing the rear by 1
 *  to be the index of the new element, but as the queue is a circular so the 
 *  rear can be at the end of the array (QueueMax - 1) so it should be 0.
 * @param Pq: It takes a pointer to struct Queue
 * @param e: It takes an element of type QUEUEENTRY
 *
 * @return It returns nothing
 */
void Enqueue (QUEUEENTRY e, Queue_t *Pq) {
    Pq->rear = (Pq->rear + 1) % MAXQUEUE;
    Pq->entry[Pq->rear] = e;
    Pq->size++;
}
/***********************************************************************************/

/**
 * @brief  Removing an element from the Queue.
 *  
 *  This function is used to serve or remove an element at the front of 
 *  the queue, and then moving the front by one, note that if the front at 
 *  the maxqueue-1, it will back to zero as it's a circular queue.
 * @param Pq: It takes a pointer to struct Queue
 * @param Pe: It takes a pointer to an element of type QUEUEENTRY
 *
 * @return It returns nothing
 */
void Dequeue (QUEUEENTRY *Pe, Queue_t *Pq) {
   *Pe = Pq->entry[Pq->front];
    Pq->front = (Pq->front + 1) % MAXQUEUE;
    Pq->size--;
}
/***********************************************************************************/

/**
 * @brief  Checking if the queue is empty or not
 *  
 *  This function is used to check if the queue empty or not by checking the
 *  size of the queue and the size here is an item in the queue struct.
 * @param Pq: It takes a pointer to struct Queue
 *
 * @return It returns an int 1 or 0
 */
int QueueEmpty (Queue_t *Pq) {
    return !(Pq->size);
}
/***********************************************************************************/

/**
 * @brief  Checking if the queue is full or not
 *  
 *  This function is used to check if the queue full or not by checking if the
 *  size of the queue equals the MAXQUEUE that determined by the user or not
 *  and the size here is an item in the queue struct.
 * @param Pq: It takes a pointer to struct Queue
 *
 * @return It returns an int 1 or 0
 */
int QueueFull (Queue_t *Pq) {
    return (Pq->size == MAXQUEUE);
}
/***********************************************************************************/

/**
 * @brief  Checking the current size of the queue.
 *  
 *  This function is used to check the size of the queue by returning
 *  the size of the queue.
 * @param Pq: It takes a pointer to struct Queue
 *
 * @return It returns an int
 */
int QueueSize (Queue_t *Pq) {
    return Pq->size;
}

/***********************************************************************************/

/**
 * @brief  Clearing the queue.
 *  
 *  This function is used to clear the queue by doing the some functionalities
 *  of the initializeQueue() function.
 * @param Pq: It takes a pointer to struct Queue
 *
 * @return It returns void
 */
void ClearQueue (Queue_t *Pq) {
    Pq->front = 0;
    Pq->rear = -1;
    Pq->size = 0;
}
/***********************************************************************************/

/**
 * @brief  Copying the front element of the queue.
 *  
 *  This function is used to copy the element that is at the front of 
 *  the queue without changing the queue itself.
 * @param Pq: It takes a pointer to struct Queue
 * @param Pe: It takes a pointer to an element of type QUEUEENTRY.
 *
 * @return It returns void.
 */
int QueueTop (Queue_t *Pq) {
    return (Pq->entry[Pq->front]);
}
/***********************************************************************************/
/**
 * @brief  Traversing the queue.
 *  
 *  This function is used to traverse all the elements of the queue
 *  through moving the 'pos' variable as an index that starts at the 
 *  front and is increased in the range of the MAXQUEUE, till reaching
 *  the size of the queue and can return to zero as it's a circular queue
 *  
 * @param Pq: It takes a pointer to struct Queue
 * @param Pf: It takes a pointer to a function takes an element 
 *  of QUEUEENTRY and returns void.
 *
 * @return It returns void.
 */
void TraverseQueue(Queue_t *Pq, void (*Pf) (QUEUEENTRY)) {
    int pos, s = 0;
    for (pos = Pq->front; s < Pq->size; s++) {
        (*Pf) (Pq->entry[pos]);
        pos = (pos + 1) % MAXQUEUE;
    } 
}
/***********************************************************************************/