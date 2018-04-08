#ifndef LISTBASEDQUEUE_H_INCLUDED
#define LISTBASEDQUEUE_H_INCLUDED

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node{
    Data data;
    struct _node* next;
}Node;

typedef struct{
    Node* front;
    Node* rear;
}ListQueue;

typedef ListQueue Queue;


void QueueInit(Queue* pq);
int QIsEmpty(Queue* pq);
void Enqueue(Queue* pq,Data data);
Data Dequeue(Queue* pq);
Data QPeek(Queue* pq);


#endif // LISTBASEDQUEUE_H_INCLUDED
