#include "Tree.h"
#include <stdlib.h>

BTreeNode* MakeBTreeNode()
{
    BTreeNode* pnode = (BTreeNode*)malloc(sizeof(BTreeNode));;
    pnode->left = NULL;
    pnode->right = NULL;

    return pnode;
}

Data GetData(BTreeNode* bt)
{
    return bt->data;
}

void SetData(BTreeNode* bt, Data data)
{
    bt->data = data;
}

BTreeNode* GetLeftSubTree(BTreeNode *bt)
{
    return bt->left;
}

BTreeNode* GetRightSubTree(BTreeNode *bt)
{
    return bt->right;
}

void MakeLeftSubTree(BTreeNode *parent, BTreeNode *child)
{
    if(parent->left != NULL)
        free(parent->left);

    parent->left = child;
}

void MakeRightSubTree(BTreeNode *parent, BTreeNode *child)
{
    if(parent->right != NULL)
        free(parent->right);
    parent->right = child;
}
