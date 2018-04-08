#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

typedef int Data;

typedef struct _treeNode{
    Data data;
    struct _treeNode* left;
    struct _treeNode* right;
}BTreeNode;


BTreeNode* MakeBTreeNode();

Data GetData(BTreeNode* bt);
void SetData(BTreeNode* bt, Data data);

BTreeNode* GetLeftSubTree(BTreeNode *bt);
BTreeNode* GetRightSubTree(BTreeNode *bt);

void MakeLeftSubTree(BTreeNode *parent, BTreeNode *child);
void MakeRightSubTree(BTreeNode *parent, BTreeNode *child);

#endif // TREE_H_INCLUDED
