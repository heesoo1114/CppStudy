#include <iostream>
using namespace std;

struct Node
{
    int value = NULL;
    Node* left = NULL;
    Node* right = NULL;
};

void Insert(int numValue, Node* root)
{
    if (numValue == root->value) // 중복
    {
        return;
    }
    else if (numValue < root->value) // 넣으려는 값이 부모 값보다 작을 때
    {
        // 부모의 왼쪽 노드가 비었을 때
        if (root->left == NULL)
        {
            // 부모의 왼쪽에 새로운 노드를 만들어주고 값을 넣어줌
            root->left = new Node;
            root->left->value = numValue;
        }
        // 부모의 왼쪽 노드가 존재할 때
        else
        {
            // 부모의 왼쪽 노드의 자식으로 삽입되게 다시 삽입함수 실행
            Insert(numValue, root->left);
        }
    }
    else if (numValue > root->value)  // 넣으려는 값이 부모 값보다 클 때
    {
        // 부모의 오른쪽 노드가 비었을 때
        if (root->right == NULL)
        {
            // 부모의 오른쪽에 새로운 노드를 만들어주고 값을 넣어줌
            root->right = new Node;
            root->right->value = numValue;
        }
        // 부모의 오른쪽 노드가 존재할 때
        else
        {
            // 부모의 오른쪽 노드의 자식으로 삽입되게 다시 삽입함수 실행
            Insert(numValue, root->right);
        }
    }
}

void PostorderTraversal(Node& findNode)
{
    if (findNode.left != NULL)
    {
        PostorderTraversal(*findNode.left);
    }
    if (findNode.right != NULL)
    {
        PostorderTraversal(*findNode.right);
    }

    cout << findNode.value << " ";
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    Node root;
    root.value = NULL;
    int input;

    while (cin >> input)
    {
        if (input == -1)
            break;

        if (root.value == NULL)
        {
            root.value = input;
        }
        else
        {
            Insert(input, &root);
        }
    }

    PostorderTraversal(root);
}
