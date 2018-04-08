#include <stdio.h>
#include <stdlib.h>
#include "UsefulHeap.h"

/*int comp(HData d1,HData d2)
{
    return d2-d1;
}


int main()
{
    Heap heap;

    HeapInit(&heap,comp);

    HInsert(&heap, 'A');
    HInsert(&heap, 'C');
    HInsert(&heap, 'B');
    HInsert(&heap, 'E');
    HInsert(&heap, 'D');

    HInsert(&heap, 'a');
    HInsert(&heap, 'b');
    HInsert(&heap, 'c');
    HInsert(&heap, 'e');
    HInsert(&heap, 'd');

    while(!HIsEmpty(&heap))
        printf("%c ",HDelete(&heap));
    return 0;
}*/
int compare(int d1,int d2)
{
    return d2-d1;
}

void HeapSort(int arr[],int len, int (*comp)(int,int)){
    Heap h;
    HeapInit(&h,comp);
    int i;

    for(i=0;i<len;i++)
        HInsert(&h,arr[i]);
    i=0;
    while(!HIsEmpty(&h))
    {
        arr[i]=HDelete(&h),i++;
    }

}


int main(){
    int arr[]={10,5,6,8,2,12,9,0,1,20};
    int i;

    HeapSort(arr,sizeof(arr)/sizeof(int),compare);

    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}




























