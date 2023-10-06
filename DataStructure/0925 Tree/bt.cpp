#include "bt.h"
#include <iostream>

// -> : 포인터가 가리키는 곳에 접근
// (주소변수)-> 와 (*주소) 는 서로 같다.
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

// 전위순회
void PreorderTraverse(BTreeNode* bt)
{
	// 종료 조건
	if (bt == NULL) return;

	// 방문한 노드 출력
	cout << bt->data << " ";

	// 다음 노드 방문 (왼, 오)
	PreorderTraverse(bt->left);
	PreorderTraverse(bt->right);

	return;
}

// 중위순회
void InorderTraverse(BTreeNode* bt)
{
	if (bt == NULL) return;

	InorderTraverse(bt->left);
	cout << bt->data << " ";
	InorderTraverse(bt->right);
	
	return;
}

// 후위순회
void PostorderTraverse(BTreeNode* bt)
{
	if (bt == NULL) return;
	
	PostorderTraverse(bt->left);
	PostorderTraverse(bt->right);
	cout << bt->data << " ";
	
	return;
}