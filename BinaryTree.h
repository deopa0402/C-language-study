#ifndef __BINARY_TREE_H__
#define __BINARY_TREE_H__

typedef int BTData;

typedef struct _bTreeNode
{
    BTData data;
    struct _bTreeNode * left;
    struct _bTreeNode * right;
}BTreeNode;

//BTreeNode 관련 연산들

BTreeNode * MakeBTreeNode(void); /*노드의 생성*/
BTData getData(BTreeNode * bt);
void SetData(BTreeNode * bt , BTData data);

BTreeNode * GetLeftSubTree(BTreeNode * bt);
BTreeNode * GetRightSubTree(BTreeNode * bt);

void MakeLeftSubTree(BTreeNode * main, BTreeNode sub);
void MakeRightSubTree(BTreeNode * main, BTreeNode sub);

#endif