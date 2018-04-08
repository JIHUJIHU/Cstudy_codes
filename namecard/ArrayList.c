#include "ArrayList.h"

void ListInit(List* plist)
{
    plist->numOfData=0;
    plist->curPosition=-1;
}
void LInsert(List* plist, LData data)
{
    //LIST_LEN ºñ±³

    plist->arr[plist->numOfData++]=data;
}
int LFirst(List* plist, LData* pdata)
{

}
int LNext(List* plist, LData* pdata)
{

}
LData LRemove(List* plist)
{

}
int LCount(List* plist)
{
    /*
}
