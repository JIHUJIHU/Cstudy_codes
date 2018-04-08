#include "dequebasedqueue.h"

void QueueInit(Queue *pq){
    DequeInit(pq);
}

int QIsEmpty(Queue *pq){
    return DQIsEmpty(pq);
}

void Enqueue(Queue *pq, Data data){    //- 뒤로 넣기
    DQAddLast(pq, data);
}

Data Dequeue(Queue *pq){
    return DQRemoveFirst(pq);          //- 앞에서 부터 삭제
}

Data QPeek(Queue *pq){
    return DQGetFirst(pq);             //- 앞에서 부터 데이터 참조
}
