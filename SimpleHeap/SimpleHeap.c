#include "SimpleHeap.h"

void HeapInit(Heap* ph)
{
    ph->numOfData = 0;
}
int HIsEmpty(Heap* ph)
{
    return ph->numOfData == 0;
}

int GetParentIDX(int idx)
{
    return idx/2;
}
int GetLChildIDX(int idx)
{
    return idx*2;
}
int GetRChildIDX(int idx)
{
    return idx*2+1;
}
int GetHiPriChildIDX(Heap* ph, int idx)
{
    if(GetLChildIDX(idx) > ph->numOfData)
        return 0;
    else if(GetLChildIDX(idx) == ph->numOfData)
        return GetLChildIDX(idx);
    else{
        if(ph->heapArr[GetLChildIDX(idx)].pr < ph->heapArr[GetRChildIDX(idx)].pr)
            return GetLChildIDX(idx);
        else
            return GetRChildIDX(idx);
    }
}

void HInsert(Heap* ph, HData data, Priority pr)
{
    int index = ph->numOfData + 1;
    HeapElem elem;// HeapElem elem = {data, pr};
    elem.data = data;
    elem.pr = pr;

    while(index!=1){
        if(pr<ph->heapArr[GetParentIDX(index)].pr){
            ph->heapArr[index] = ph->heapArr[GetParentIDX(index)];
            index = GetParentIDX(index);
        }
        else
            break;
    }
    ph->heapArr[index] = elem;
    ph->numOfData++;
}
HData HDelete(Heap* ph)
{
    HData rdata=ph->heapArr[1].data;
    HeapElem lastElem=ph->heapArr[ph->numOfData];

    int parentIndex = 1;
    int childIndex;

    while(childIndex=GetHiPriChildIDX(ph,parentIndex))
    {
        if(lastElem.pr <= ph->heapArr[childIndex].pr)
            break;
        ph->heapArr[parentIndex]=ph->heapArr[childIndex];
        parentIndex=childIndex;
    }
    ph->heapArr[parentIndex]=lastElem;
    ph->numOfData--;
    return rdata;
}
