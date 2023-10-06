#include "bt.h"
#include <iostream>

// -> : �����Ͱ� ����Ű�� ���� ����
// (�ּҺ���)-> �� (*�ּ�) �� ���� ����.
BTreeNode* MakeBTreeNode(void)
{
	//make binary tree
	BTreeNode* nd = new BTreeNode;
	
	//initialize
	nd->left = NULL;
	nd->right = NULL;
	
	//return pointer
	return nd;
}

void DeleteBTreeNode(BTreeNode* bt) { delete bt; }
int GetData(BTreeNode* bt) { return bt->data; }
void SetData(BTreeNode* bt, int data) { bt->data = data; }

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub) 
{
	if (main->left != NULL) 
	{
		delete main->left;
	}
	main->left = sub;
}

void MakeRightSubTree(BTreeNode* main, BTreeNode* sub) 
{
	if (main->right != NULL)
	{
		delete main->right;
	}
	main->right = sub;
}

// ������ȸ
void PreorderTraverse(BTreeNode* bt)
{
	// ���� ����
	if (bt == NULL) return;

	// �湮�� ��� ���
	cout << bt->data << " ";

	// ���� ��� �湮 (��, ��)
	PreorderTraverse(bt->left);
	PreorderTraverse(bt->right);

	return;
}

// ������ȸ
void InorderTraverse(BTreeNode* bt)
{
	if (bt == NULL) return;

	InorderTraverse(bt->left);
	cout << bt->data << " ";
	InorderTraverse(bt->right);
	
	return;
}

// ������ȸ
void PostorderTraverse(BTreeNode* bt)
{
	if (bt == NULL) return;
	
	PostorderTraverse(bt->left);
	PostorderTraverse(bt->right);
	cout << bt->data << " ";
	
	return;
}