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
        DeleteTree(parent->left);

    parent->left = child;
}

void MakeRightSubTree(BTreeNode *parent, BTreeNode *child)
{
    if(parent->right != NULL)
        DeleteTree(parent->right);
    parent->right = child;
}


void PreorderTraverse(BTreeNode* root)
{
    if(root==NULL) return;
    printf("%d ",root->data);
    PreorderTraverse(root->left);
    PreorderTraverse(root->right);
}
void InorderTraverse(BTreeNode* root)
{
    if(root==NULL)return;

    InorderTraverse(root->left);
    printf("%d ",root->data);
    InorderTraverse(root->right);
}

void PostorderTraverse(BTreeNode* root){
    if(root == NULL) return;

    PostorderTraverse(root->left);
    PostorderTraverse(root->right);
    printf("%d ", root->data);
}

void DeleteTree(BTreeNode* root)
{
     if(root==NULL)return;

    DeleteTree(root->left);
    DeleteTree(root->right);
    free(root);
}
