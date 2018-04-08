#ifndef CLINKEDLIST_H_INCLUDED
#define CLINKEDLIST_H_INCLUDED

#define TRUE 1
#define FALSE 0

typedef int LData;

typedef struct _node{
    LData data;
    struct _node *next;
} Node;

typedef struct _linkedList{
    Node *head;
    Node *cur;
    Node *before;
    int numOfData;
}CList;

typedef CList List;

void ListInit(List *plist);
void LInsert(List *plist, LData data);

int LFirst(List *plist, LData *pdata);
int LNext(List *plist, LData *pdata);

LData LRemove(List *plist);
int LCount(List *plist);

#endif // CLINKEDLIST_H_INCLUDED
