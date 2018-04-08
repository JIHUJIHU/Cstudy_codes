#include "ArrayBasedQueue.h"
#include <stdlib.h>

void QueueInit(Queue* pq)
{
    pq->front = 0;
    pq->rear = 0;
}

int QIsEmpty(Queue* pq)
{
    if(pq->front == pq->rear)
        return TRUE;
    else
        return FALSE;
}

int getNextPos(int index)
{
    if(index == QUEUE_LEN-1)
        return 0;
    else
        return index + 1;
}

int QIsFull(Queue* pq)
{
    if(pq->front == getNextPos(pq->rear))
        return TRUE;
    else
        return FALSE;
}

void Enqueue(Queue* pq,Data data)
{
    if(QIsFull(pq)){
        printf("Queue is full.\n");
        exit(-1);
    }
    pq->rear = (pq->rear+1)%QUEUE_LEN;
    pq->arr[pq->rear]=data;
}

Data Dequeue(Queue* pq)
{
    Data rdata;

    if(QIsEmpty(pq))
    {
        printf("Queue is empty.\n");
        exit(-1);
    }

    pq->front = (pq->front+1)%QUEUE_LEN;
    return pq->arr[pq->front];
}
Data QPeek(Queue* pq)
{
    if(QIsEmpty(pq)){
        printf("Queue is empty.\n");
        exit(-1);
    }

    return pq->arr[pq->front+1];
}
