#ifndef ARRYABASEDSTACK_H_INCLUDED
#define ARRYABASEDSTACK_H_INCLUDED

#define TRUE 1
#define FALSE 0
#define STACK_LEN 100

typedef int Data;

typedef struct _stack{
    Data arr[STACK_LEN];
    int topIndex;
}Stack;

void StackInit(Stack *pstack);
int SIsEmpty(Stack *pstack);

void SPush(Stack *pstack, Data data);
Data SPop(Stack *pstack);
Data SPeek(Stack *pstack);

#endif // ARRYABASEDSTACK_H_INCLUDED
