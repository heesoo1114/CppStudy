#include <iostream>
#include <list>
using namespace std;

#pragma region "연결리스트로 스택 쿠현하기"
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
            cout << "입력 오류" << endl;
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
        s_top = temp;        // 2. 헤더 포인터 Top이 노드 D를 가리키도록 한다
    }
    else 
    {
        s_top->next = s_top; // 1. 노드 D의 링크 필드가 노드 C를 가리키도록 한다
        s_top = temp;
    }
}

int Pop() {
    if (isEmpty()) return -1;
    NODE* delTemp = s_top;        // 포인터 변수 p가 노드 C를 가리키도록 한다

    int rData = delTemp->data;

    s_top = s_top->next;          // 2. 헤더 포인터 Top이 B를 가리키도록 한다  
    delete delTemp;               // 3. 마지막으로 포인터 p를 삭제한다

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