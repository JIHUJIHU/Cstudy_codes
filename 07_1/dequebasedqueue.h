#ifndef DEQUEBASEQUEUE_H_INCLUDED
#define DEQUEBASEQUEUE_H_INCLUDED

#include "07_1.h"

typedef Deque Queue;

void QueueInit(Queue *pq);              //- 큐의 초기화
int QIsEmpty(Queue *pq);     //- 큐가 비었는지 확인

void Enqueue(Queue *pq, Data data);     //- 데이터 넣기
Data Dequeue(Queue *pq);                //- 데이터 빼기
Data QPeek(Queue *pq);                  //- 데이터 반

#endif // DEQUEBASEQUEUE_H_INCLUDED
