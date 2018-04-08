#include <stdio.h>
#include <string.h>
#include "PriorityQueue.h"

int DataPriorityComp(char *str1, char *str2){
    return strlen(str2)-strlen(str1);
}

int main()
{
    PQueue pq;
    PQueueInit(&pq, DataPriorityComp);

    PEnqueue(&pq, "HELLO WORLD!");
    PEnqueue(&pq, "HI");
    PEnqueue(&pq, "BYE");

    while(!PQIsEmpty(&pq))
        printf("%s\n", PDequeue(&pq));

    return 0;
}
