#ifndef LISTBASEDSTACK_H_INCLUDED
#define LISTBASEDSTACK_H_INCLUDED

#define TRUE 1
#define FALSE 0

typedef double Data;

typedef struct _node{
    Data data;
    struct _node *next;
}Node;

typedef struct _Stack{
    Node *head;
}Stack;

void StackInit(Stack *pstack);
int SIsEmpty(Stack *pstack);

void SPush(Stack *pstack, Data data);
Data SPop(Stack *pstack);
Data SPeek(Stack *pstack);

#endif // LISTBASEDSTACK_H_INCLUDED
