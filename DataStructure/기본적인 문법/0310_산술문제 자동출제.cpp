#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
	int a, b;

	srand((unsigned int)time(NULL));

	a = rand() % 101;

	// �����̸� ���� ������ a�� b�� ���� ����
	Sleep(500);
	
	b = rand() % 101;

	cout << a << " + " << b << " = " << endl;

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