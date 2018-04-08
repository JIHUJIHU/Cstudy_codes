#include <stdio.h>
#include <stdlib.h>
#include "ListBasedQueue.h"
int main()
{
    Queue q;
    QueueInit(&q);

    int n;
    while(1){
        scanf("%d",&n);
        if(n==-1)
            break;
        Enqueue(&q,n);
    }


    while(!QIsEmpty(&q))
        printf("%d ",Dequeue(&q));


    return 0;
}
