#include <iostream>
using namespace std;

int main()
{
    bool can = false;
    
    int input = 0;
    cin >> input;
    
    int temp = 0;
    for (int i = 1; i < input; i++)
    {
        for (int j = i; j < input - i; j++) // �� ��° ���� ���̴� ù ��° ���� ���̺��� ���� �ϰ�, �ּ� ��ü ������ ù ��° ���̱��� ���� �� ����
        {
            temp = input - i - j;
            if (temp < i + j && temp >= j) // �� ���� ���̰� �������� ŭ, ������ ���̰� �� ��° ���̺��� ŭ
            {
                cout << i << " " << j << " " << temp << endl;
                can = true;
            }
        }
    }

    if (!can) // �� ���� �ﰢ���� ������ �� ��
    {
        cout << "-1";
    }
}