#ifndef DEQUEBASEQUEUE_H_INCLUDED
#define DEQUEBASEQUEUE_H_INCLUDED

#include "07_1.h"

typedef Deque Queue;

void QueueInit(Queue *pq);              //- ť�� �ʱ�ȭ
int QIsEmpty(Queue *pq);     //- ť�� ������� Ȯ��

void Enqueue(Queue *pq, Data data);     //- ������ �ֱ�
Data Dequeue(Queue *pq);                //- ������ ����
Data QPeek(Queue *pq);                  //- ������ ��

#endif // DEQUEBASEQUEUE_H_INCLUDED
