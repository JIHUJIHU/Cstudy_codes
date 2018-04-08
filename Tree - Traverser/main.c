#include <stdio.h>
#include <stdlib.h>
#include "Tree.h"

int main()
{
    BTreeNode* p1 = MakeBTreeNode();
    BTreeNode* p2 = MakeBTreeNode();
    BTreeNode* p3 = MakeBTreeNode();
    BTreeNode* p4 = MakeBTreeNode();
    BTreeNode* p5 = MakeBTreeNode();

    SetData(p1,10);
    SetData(p2,20);
    SetData(p3,30);
    SetData(p4,40);

    MakeLeftSubTree(p1,p2);
    MakeRightSubTree(p1,p3);
    MakeLeftSubTree(p2,p4);

    PreorderTraverse(p1);
    printf("\n");
    InorderTraverse(p1);
    printf("\n");
    PostorderTraverse(p1);
    printf("\n");

    SetData(p5, 50);
    MakeLeftSubTree(p1, p5);

    PreorderTraverse(p1);

    return 0;
}
