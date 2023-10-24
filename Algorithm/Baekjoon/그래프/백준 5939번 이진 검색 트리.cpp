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
    if (numValue == root->value) // �ߺ�
    {
        return;
    }
    else if (numValue < root->value) // �������� ���� �θ� ������ ���� ��
    {
        // �θ��� ���� ��尡 ����� ��
        if (root->left == NULL)
        {
            // �θ��� ���ʿ� ���ο� ��带 ������ְ� ���� �־���
            root->left = new Node;
            root->left->value = numValue;
        }
        // �θ��� ���� ��尡 ������ ��
        else
        {
            // �θ��� ���� ����� �ڽ����� ���Եǰ� �ٽ� �����Լ� ����
            Insert(numValue, root->left);
        }
    }
    else if (numValue > root->value)  // �������� ���� �θ� ������ Ŭ ��
    {
        // �θ��� ������ ��尡 ����� ��
        if (root->right == NULL)
        {
            // �θ��� �����ʿ� ���ο� ��带 ������ְ� ���� �־���
            root->right = new Node;
            root->right->value = numValue;
        }
        // �θ��� ������ ��尡 ������ ��
        else
        {
            // �θ��� ������ ����� �ڽ����� ���Եǰ� �ٽ� �����Լ� ����
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
