#include "dequebasedqueue.h"

void QueueInit(Queue *pq){
    DequeInit(pq);
}

int QIsEmpty(Queue *pq){
    return DQIsEmpty(pq);
}

void Enqueue(Queue *pq, Data data){    //- �ڷ� �ֱ�
    DQAddLast(pq, data);
}

Data Dequeue(Queue *pq){
    return DQRemoveFirst(pq);          //- �տ��� ���� ����
}

Data QPeek(Queue *pq){
    return DQGetFirst(pq);             //- �տ��� ���� ������ ����
}
