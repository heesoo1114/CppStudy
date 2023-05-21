#include <iostream>
#include <list>
using namespace std;

#pragma region "���Ḯ��Ʈ�� ���� �����ϱ�"
struct NODE {
    NODE* next;
    int data;
};

void Push(int _data);
int Pop();
bool isEmpty();
void printData();
void Menu();
NODE* s_top;

int main() {
    int data, nKey = 0;
    while (true) {
        Menu();
        cin >> nKey;
        cout << "\n";
        switch (nKey) {
        case 1:
            cout << "Push : ";
            cin >> data;
            Push(data);
            break;
        case 2:
            cout << "Pop : " << Pop() << endl;
            break;
        case 3:
            printData();
            break;
        default:
            cout << "�Է� ����" << endl;
            break;
        }
        cout << "\n";
    }
    return 0;
}

void Push(int _data) {
    NODE* temp = new NODE;
    temp->next = NULL;
    temp->data = _data;
    if (isEmpty()) 
    {
        s_top = temp;        // 2. ��� ������ Top�� ��� D�� ����Ű���� �Ѵ�
    }
    else 
    {
        s_top->next = s_top; // 1. ��� D�� ��ũ �ʵ尡 ��� C�� ����Ű���� �Ѵ�
        s_top = temp;
    }
}

int Pop() {
    if (isEmpty()) return -1;
    NODE* delTemp = s_top;        // ������ ���� p�� ��� C�� ����Ű���� �Ѵ�

    int rData = delTemp->data;

    s_top = s_top->next;          // 2. ��� ������ Top�� B�� ����Ű���� �Ѵ�  
    delete delTemp;               // 3. ���������� ������ p�� �����Ѵ�

    return rData;
}

void printData() {
    if (isEmpty()) 
    {
        cout << "Stack is Empty" << endl;
        return;
    }
    NODE* top = s_top;
    for (; top != NULL; top = top->next) 
    {
        cout << "| " << top->data << " |" << endl;
    }
    cout << "-----" << endl;
}

bool isEmpty() { return s_top == NULL; }

void Menu()
{
    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Show Stack" << endl;
    cout << "INPUT : ";
}
#pragma endregion