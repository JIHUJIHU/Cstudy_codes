#ifndef PRIORITYQUEUE_H_INCLUDED
#define PRIORITYQUEUE_H_INCLUDED

#include "UseFulHeap.h"

typedef Heap PQueue;
typedef HData PQData;

void PQueueInit(PQueue *ppq, PriorityComp pc);
int PQIsEmpty(PQueue *ppq);

void PEnqueue(PQueue *ppq, PQData data);
PQData PDequeue(PQueue *ppq);

#endif // PRIORITYQUEUE_H_INCLUDED
