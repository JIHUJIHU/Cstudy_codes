#include <stdio.h>
#include <stdlib.h>
#include "ArrayBasedQueue.h"
int main()
{
    Queue q;
    QueueInit(&q);

    /*Enqueue(&q,10);0
    Enqueue(&q,20);
    Enqueue(&q,30);
    Enqueue(&q,40);
    Enqueue(&q,50);*/
    int n,i;
    while(1){
        scanf("%d",&n);
        if(n==-1)
            break;
        if(!QIsFull(&q)){
            Enqueue(&q,n);
        }
        else{
            printf("더 이상 삽입할 수 없습니다.");
            break;
        }
    }
    /*for(i=0;i<QUEUE_LEN-1;i++){
        scanf("%d",&n);
        if(n==-1)
            break;
        else
            Enqueue(&q,n);
    }*/


    while(!QIsEmpty(&q))
        printf("%d ",Dequeue(&q));


    return 0;
}
