#include <stdio.h>
#include <stdlib.h>
#include "dequebasedqueue.h"

int main()
{
    Queue q;
    QueueInit(&q);

    Enqueue(&q, 10);
    Enqueue(&q, 20);
    Enqueue(&q, 30);
    Enqueue(&q, 40);
    Enqueue(&q, 50);

    while(!QIsEmpty(&q))
        printf("%d ", Dequeue(&q));

    return 0;
}
