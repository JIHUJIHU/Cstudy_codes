#ifndef ARRAYLIST_H_INCLUDED
#define ARRAYLIST_H_INCLUDED
#define LIST_LEN 100

#include "NameCard.h"

typedef NameCard* LDatea;
typedef struct _nameCard{
    LData arr[LIST_LEN];
    int numOfData;
    int curPosition;
}ArrayList;

typedef ArrayList List;

void ListInit(List* plist);
void LInsert(List* plist, LData data);
int LFirst(List* plist, LData* pdata);
int LNext(List* plist, LData* pdata);
LData LRemove(List* plist);
int LCount(List* plist);

#endif // ARRAYLIST_H_INCLUDED
