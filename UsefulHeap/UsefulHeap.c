#include "UsefulHeap.h"

void HeapInit(Heap* ph,PriorityComp comp)
{
    ph->numOfData = 0;
    ph->comp=comp;
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
        if(ph->comp(ph->heapArr[GetLChildIDX(idx)],ph->heapArr[GetRChildIDX(idx)])>0)
            return GetLChildIDX(idx);
        else
            return GetRChildIDX(idx);
    }
}

void HInsert(Heap* ph, HData data)
{
    int index = ph->numOfData + 1;
    // HeapElem elem = {data, pr};

    while(index!=1){
        if(ph->comp(data,ph->heapArr[GetParentIDX(index)])>0){
           //pr<ph->heapArr[GetParentIDX(index)].pr){
            ph->heapArr[index] = ph->heapArr[GetParentIDX(index)];
            index = GetParentIDX(index);
        }
        else
            break;
    }
    ph->heapArr[index] =data;
    ph->numOfData++;
}
HData HDelete(Heap* ph)
{
    HData rdata=ph->heapArr[1];
    HData lastData=ph->heapArr[ph->numOfData];

    int parentIndex = 1;
    int childIndex;

    while(childIndex=GetHiPriChildIDX(ph,parentIndex))
    {
        if(ph->comp(lastData, ph->heapArr[childIndex])>=0 )
            break;
        ph->heapArr[parentIndex]=ph->heapArr[childIndex];
        parentIndex=childIndex;
    }
    ph->heapArr[parentIndex]=lastData;
    ph->numOfData--;
    return rdata;
}
