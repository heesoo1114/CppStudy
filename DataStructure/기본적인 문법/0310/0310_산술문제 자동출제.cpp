#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	int a, b;

	srand((unsigned int)time(NULL));

	a = rand() % 100 + 1; // 0 ~ 99 + 1

	// �����̸� ���� ������ a�� b�� ���� ����
	Sleep(500);
	
	b = rand() % 100 + 1;

	cout << a << " + " << b << " = ";

	int answer = a + b;

	while (true)
	{
		int input;
		cin >> input;

		if (input == answer) break;
		else cout << "Ʋ�Ƚ��ϴ�" << endl;
	}

	cout << "�¾ҽ��ϴ�" << endl;

	return 0;
}