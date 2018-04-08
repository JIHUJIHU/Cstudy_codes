#include <stdio.h>
#include <stdlib.h>
#include "SimpleHeap.h"
int main()
{
    Heap heap;

    HeapInit(&heap);

    HInsert(&heap, 'A',1);
    HInsert(&heap, 'C',3);
    HInsert(&heap, 'B',2);
    HInsert(&heap, 'E',5);
    HInsert(&heap, 'D',4);

    HInsert(&heap, 'a',1);
    HInsert(&heap, 'b',2);
    HInsert(&heap, 'c',3);
    HInsert(&heap, 'e',5);
    HInsert(&heap, 'd',4);

    while(!HIsEmpty(&heap))
        printf("%c ",HDelete(&heap));
    return 0;
}
