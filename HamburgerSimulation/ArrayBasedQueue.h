#ifndef ARRAYBASEDQUEUE_H_INCLUDED
#define ARRAYBASEDQUEUE_H_INCLUDED

#define QUEUE_LEN 30
#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct{
    Data arr[QUEUE_LEN];
    int front;
    int rear;
}ArrayQueue;

typedef ArrayQueue Queue;

void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);
int QIsFull(Queue* pq);
void Enqueue(Queue* pq,Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);


#endif // ARRAYBASEDQUEUE_H_INCLUDED
