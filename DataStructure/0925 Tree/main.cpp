#include "bt.h"
#include <iostream>

#pragma region tree

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

#pragma endregion

int main() 
{

	int nodeCnt = 0;
	cin >> nodeCnt;
	
	BTreeNode* treeList = new BTreeNode[nodeCnt];

	char node, left, right;
	for (int i = 0; i < nodeCnt; i++)
	{

	}

    BTreeNode* bt1 = MakeBTreeNode();
    BTreeNode* bt2 = MakeBTreeNode();
    BTreeNode* bt3 = MakeBTreeNode();
    BTreeNode* bt4 = MakeBTreeNode();
    BTreeNode* bt5 = MakeBTreeNode();
    BTreeNode* bt6 = MakeBTreeNode();
    SetData(bt1, 1);
    SetData(bt2, 2);
    SetData(bt3, 3);
    SetData(bt4, 4);
    SetData(bt5, 5);
    SetData(bt6, 6);
    MakeLeftSubTree(bt1, bt2);
    MakeRightSubTree(bt1, bt3);
    MakeLeftSubTree(bt2, bt4);
    MakeRightSubTree(bt2, bt5);
    MakeRightSubTree(bt3, bt6);

    cout << "전위 순회한 결과 : ";
    PreorderTraverse(bt1);
    cout << endl;
    cout << "중위 순회한 결과 : " ;
    InorderTraverse(bt1);
    cout << endl;
    cout << "후위 순회한 결과 : ";
    PostorderTraverse(bt1);
    cout << endl;

}