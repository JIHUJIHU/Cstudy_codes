#ifndef USEFULLHEAP_H_INCLUDED
#define USEFULLHEAP_H_INCLUDED

#define HEAP_LEN 100

typedef char *HData;

typedef int (*PriorityComp)(HData, HData);

typedef struct {
    PriorityComp comp;
    int numOfData;
    HData heapArr[HEAP_LEN];
} Heap;

void HeapInit(Heap *ph, PriorityComp comp/**/);
int HIsEmpty(Heap *ph);

void HInsert(Heap *ph, HData data);
HData HDelete(Heap *ph);

#endif // USEFULLHEAP_H_INCLUDED
