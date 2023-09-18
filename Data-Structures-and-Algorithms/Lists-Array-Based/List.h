/******************************************************************************
 * Copyright (C) 2023 by Abdelrahman Kamal - Introduction to Data Structures
 * By Phd. Walid Youssef - Course introduced by Helwan-University and Recorded
 * on YouTube.
 *****************************************************************************/
/**
 * @file List.h
 * @brief Interface of List data structures.
 *
 * @author Abdelrahman Kamal
 * @date 5/12/2023
 *
 */
#ifndef __LIST_H__
#define __LIST_H__
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#define MAXLIST   10
typedef uint32_t LISTENTRY; 

typedef struct list {
    int size;
    LISTENTRY entry [MAXLIST];
}List_t;

/* Functions Prototypes */
void initializeList (List_t *);
int ListFull (List_t *);
int ListEmpty (List_t *);
int ListSize (List_t *);
void DestroyList (List_t *);
void InsertList(int, LISTENTRY , List_t *);
void DeleteList(int, LISTENTRY *, List_t *);
void RetrieveList (int, LISTENTRY *, List_t *);
void ReplaceList (int, LISTENTRY, List_t *);
void TraverseList(List_t *, void (*) (LISTENTRY));

#endif /* __LIST_H__ */
