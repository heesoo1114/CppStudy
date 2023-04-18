#include <iostream>
#include <deque>
#include <vector>
using namespace std;

deque<int> dq;
vector<int> v;

int main()
{
    int size;
    cin >> size;

    v.resize(size);
    for (int i = size - 1; i >= 0; i--)
    {
        cin >> v[i];
    }

    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        if (v[i] == 1)
        {
            dq.push_front(i + 1);
        }
        else if (v[i] == 2)
        {
            temp = dq.front();    // 잠깐 저장
            dq.pop_front();       // 앞 삭제
            dq.push_front(i + 1); // 앞에 넣어줌
            dq.push_front(temp);  // 저장한 거 다시 앞으로 넣어주기
        }
        else if (v[i] == 3)
        {
            dq.push_back(i + 1);
        }
    }

    deque<int>::iterator iter = dq.begin();
    for (; iter != dq.end(); iter++)
    {
        cout << *iter << " ";
    }
}