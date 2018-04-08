#include <stdio.h>
#include <stdlib.h>
#include "ArryabasedStack.h"
int main()
{
    Stack stack;
    StackInit(&stack);

    SPush(&stack,1);
    SPush(&stack,2);
    SPush(&stack,3);
    SPush(&stack,4);
    SPush(&stack,5);

    while(SIsEmpty(&stack)==FALSE){
        if(SPeek(&stack)!=3){
            printf("%d ",SPop(&stack));
        }
        else
            break;
    }
    return 0;
}
