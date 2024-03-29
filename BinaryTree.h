
#ifndef C_BINARY_TREE_H
#define C_BINARY_TREE_H

typedef int BTData;

typedef struct _bTreeNode {
    BTData data;
    struct _bTreeNode* left;
    struct _bTreeNode* right;
} BTreeNode;

BTreeNode* MakeBTreeNode(void);
BTData GetData(BTreeNode* bt);
void SetData(BTreeNode* bt, BTData data);

BTreeNode* GetLeftSubTree(BTreeNode* bt);
BTreeNode* GetRightSubTree(BTreeNode* bt);

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub);
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub);

#endif //C_BINARY_TREE_H