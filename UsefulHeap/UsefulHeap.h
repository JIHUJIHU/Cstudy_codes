#ifndef SIMPLEHEAP_H_INCLUDED
#define SIMPLEHEAP_H_INCLUDED

#define TRUE 1
#define FALSE 0

#define HEAP_LEN 100

typedef char HData;

typedef int(*PriorityComp)(HData,HData);

typedef struct{
    PriorityComp comp;
    int numOfData;
    HData heapArr[HEAP_LEN];
}Heap;

void HeapInit(Heap* ph,PriorityComp comp);
int HIsEmpty(Heap* ph);

void HInsert(Heap* ph, HData data);
HData HDelete(Heap* ph);

int GetRChildIDX(int idx);
int GetLChildIDX(int idx);
int GetParentIDX(int idx);

int GetHiPriChildIDX(Heap* ph,int idx);

#endif // SIMPLEHEAP_H_INCLUDED
