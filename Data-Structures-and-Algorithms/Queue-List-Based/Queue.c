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
typedef uint32_t QUEUEENTRY; 

/**
 * @brief  Intializing the Queue
 *  
 *  This function is used to initialize the Queue through
 *  initializing front and rear pointers with NULL, and initializing
 *  the size with zero.
 * @param Pq: It takes a pointer to struct Queue
 *
 * @return It returns nothing
 */
void initializeQueue(Queue_t *Pq) {
    Pq->front = NULL;
    Pq->rear = NULL;
    Pq->size = 0;
}
/***********************************************************************************/

/**
 * @brief  Adding a new element to the Queue.
 *  
 *  This function is used to append or add a new element 
 *  at the rear of the queue, through reserving an area of the new node
 *  to be inserted by using a 'Pn' local pointer, and we check the 'Pn'
 *  because it may returns NULL, the memory might be full, so here
 *  the process of enqueuing must be terminated, otherwise we complete
 *  to use it for inserting the 'e' value and make the 'next' pointer to point to NULL, 
 *  then checking, if the 'rear' points to NULL and that means this is the first time we enqueue
 *  so in this case we will make the 'front' points to the 1st node created by 'Pn'
 *  and then we will make the 'rear' points to the same place too, however, if the 'rear'
 *  doesn't point to NULL and that means this is not the first time we enqueue an element
 *  so, we will use the 'rear' to access the last node it points to, in order to make the 'next'
 *  pointer points to the new node inserted, then we will make the 'rear' points to the new
 *  node inserted. Then increasing the size by one.
 * 
 * @param Pq: It takes a pointer to struct Queue
 * @param e: It takes an element of type QUEUEENTRY
 *
 * @return It returns an int
 */
int Enqueue (QUEUEENTRY e, Queue_t *Pq) {
    QueueNode_t *Pn = (QueueNode_t *) malloc(sizeof(QueueNode_t));
    if (!Pn) {
        return 0;
    }
    else {
        Pn->entry = e;
        Pn->next = NULL;
        if (!Pq->rear) {
            Pq->front = Pn;
        }
        else {
            Pq->rear->next = Pn;
        }
        Pq->rear = Pn;
        Pq->size++;
    }
    return 1;
    
}
/***********************************************************************************/

/**
 * @brief  Removing an element from the Queue.
 *  
 *  This function is used to serve or remove an element at the front of 
 *  the queue, through allocating a local pointer 'Pn' points to 1st node
 *  inserted, then we move the 'front' to point to the next node if exists, then
 *  we free the 'Pn', but if there's no next node and that means we dequeue the 
 *  last element in the queue, so the 'front' here points to NULL, and after freeing
 *  the 'Pn' the 'rear' also must points to NULL, then decreasing the size by one.
 * 
 * @param Pq: It takes a pointer to struct Queue
 * @param Pe: It takes a pointer to an element of type QUEUEENTRY
 *
 * @return It returns nothing
 */
void Dequeue (QUEUEENTRY *Pe, Queue_t *Pq) {
    QueueNode_t *Pn = Pq->front;
    *Pe = Pn->entry;
    Pq->front = Pq->front->next;
    free(Pn);
    if (!Pq->front) {
        Pq->rear = NULL;
    }
    Pq->size--;
}
/***********************************************************************************/

/**
 * @brief  Checking if the queue is empty or not
 *  
 *  This function is used to check if the queue empty or not by checking
 *  the 'front' pointer if it points to NULL or not.
 * @param Pq: It takes a pointer to struct Queue
 *
 * @return It returns an int 1 or 0
 */
int QueueEmpty (Queue_t *Pq) {
    return !(Pq->front);
}
/***********************************************************************************/

/**
 * @brief  Checking if the queue is full or not
 * 
 *  This function is supposed to check if the queue is full or not
 *  but here the queue will not be full (suppose if the user doesn't
 *  exceed the size of the physical .stack segment in RAM).
 *  Pre-conditions: The queue exists
 *  Post-conditions: It returns always 0;
 * @param Pq: It takes a pointer to struct Queue
 *
 * @return It returns an int.
 */
int QueueFull (Queue_t *Pq) {
    return 0;
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
 *  This function is used to clear the queue by checking if the 'front' points to NULL
 *  so the 'queue' is already cleared or empty so we assign a zero to the size, but if
 *  there are elements in the queue, so the 'front' points to the 1st element there, and
 *  the condition of that the 'front' points to NULL is false, therefore the 'rear' will
 *  point to the 'next' node after the first node, then we free the 'front', after freeing
 *  the 'front' we will move the 'front' to move to the next node as the 'rear' points to it
 *  then we move the 'rear' again to the next node, and we repeat this process till reaching
 *  the 'rear' points to NULL, and so the 'front' will point to NULL too.
 * 
 * @param Pq: It takes a pointer to struct Queue
 *
 * @return It returns void
 */
void ClearQueue (Queue_t *Pq) {
    if (Pq->front) {
        Pq->rear = Pq->front->next;
        free(Pq->front);
        Pq->front = Pq->rear;
    }
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
    return (Pq->front->entry);
}
/***********************************************************************************/
/**
 * @brief  Traversing the queue.
 *  
 *  This function is used to traverse all the elements of the queue
 *  through moving a local pointer 'Pn' we create it inside the function
 *  to move it through all the elements, and after passing each entry to
 *  the (*Pf)() function, it moves to the next node, till becoming NULL and
 *  then break the loop.
 *   
 * @param Pq: It takes a pointer to struct Queue
 * @param Pf: It takes a pointer to a function takes an element 
 *  of QUEUEENTRY and returns void.
 *
 * @return It returns void.
 */
void TraverseQueue(Queue_t *Pq, void (*Pf) (QUEUEENTRY)) {
    if (Pq->front == NULL) return ;

    QueueNode_t *Pn = Pq->front;
    for (Pn = Pq->front; Pn; Pn = Pn->next) {
            (*Pf) (Pn->entry);
    }
}
/***********************************************************************************/