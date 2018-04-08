#include "ArryabasedStack.h"
#include <stdio.h>
#include <stdlib.h>


void StackInit(Stack *pstack)
{
    pstack->topIndex = -1;
}
int SIsEmpty(Stack *pstack)
{
    if(pstack->topIndex == -1)
        return TRUE;
    else
        return FALSE;
}

void SPush(Stack *pstack, Data data)
{
    if(pstack->topIndex>=STACK_LEN-1){
        printf("Stack is full.\n");
        exit(-1);
    }
    pstack->topIndex++;
    pstack->arr[pstack->topIndex] = data;
}
Data SPop(Stack *pstack)
{
    if(pstack->topIndex == -1){
        printf("Stack is empty.\n");
        exit(-1);
    }

    Data data = pstack->arr[pstack->topIndex];
    pstack->topIndex--;

    return data;
}
Data SPeek(Stack *pstack)
{
    if(SIsEmpty(pstack)){
        printf("Stack Memory Error!");
        exit(-1);
    }
    return pstack->arr[pstack->topIndex];
}
