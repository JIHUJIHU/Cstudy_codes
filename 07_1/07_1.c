#include "07_1.h"
#include <stdio.h>
#include <stdlib.h> //exit

void DequeInit(Deque *pdeq) {
    pdeq->head = NULL;
    pdeq->tail = NULL;
}

int DQIsEmpty(Deque *pdeq) {
    if(pdeq->head == NULL)
        return TRUE;
    else
        return FALSE;
}

void DQAddFirst(Deque *pdeq, Data data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = pdeq->head;

    if(DQIsEmpty(pdeq))
        pdeq->tail = newNode;
    else
        pdeq->head->prev = newNode;

    pdeq->head = newNode;
}

void DQAddLast(Deque *pdeq, Data data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = pdeq->tail;

    if(DQIsEmpty(pdeq))
        pdeq->head = newNode;
    else
        pdeq->tail->next = newNode;

    pdeq->tail = newNode;
}

Data DQRemoveFirst(Deque *pdeq){
    Node *rnode = pdeq->head;
    Data data;

    if(DQIsEmpty(pdeq)){
        printf("Deque Memory Error.\n");
        exit(-1);
    }

    data = rnode->data;

    pdeq->head = pdeq->head->next;

    if(pdeq->head == NULL)
        pdeq->tail = NULL;
    else
        pdeq->head->prev = NULL;

    free(rnode);

    return data;
}

Data DQRemoveLast(Deque *pdeq) {
    Node *rnode = pdeq->tail;
    Data data;

    if(DQIsEmpty(pdeq)){
        printf("Deque Memory Error.\n");
        exit(-1);
    }

    data = rnode->data;

    pdeq->tail = pdeq->tail->prev;

    if(pdeq->tail == NULL)
        pdeq->head = NULL;
    else
        pdeq->tail->prev = NULL;

    free(rnode);

    return data;
}

Data DQGetFirst(Deque *pdeq) {
    if(DQIsEmpty(pdeq)){
        printf("Deque Memory Error.\n");
        exit(-1);
    }

    return pdeq->head->data;
}

Data DQGetLast(Deque *pdeq) {
    if(DQIsEmpty(pdeq)){
        printf("Deque Memory Error.\n");
        exit(-1);
    }

    return pdeq->tail->data;
}

