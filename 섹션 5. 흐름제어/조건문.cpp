#include <iostream>

using namespace std;

int main()
{
	#pragma region if

	int a = 5;

	if (a >= 5)
	{
		cout << "a is bigger than 5" << endl;
	}
	else if (a == 0)
	{
		cout << "a is 0" << endl;
	}
	else // (a <= 5) ��� ���ǽ��� ������ �ִٰ� �����ϸ� �� (�ش� else�� ¦�� if�� ���ǽ��� �ݴ�)
	{
		cout << "a is smaller than 5" << endl;
	}

	#pragma endregion

	#pragma region switch

	int b = 2;

	switch (b)
	{
		case 1: 
			cout << "b is 1" << endl;
			break;
		case 2:
			cout << "b is 2" << endl;
			break; // ���� break�� �����ٸ� case3���� �����
		case 3:
			cout << "b is 3" << endl;
			break;
		default: // �տ��� ������ case �̿��� ����� ��
			break;
	}

	#pragma endregion

	#pragma region ���ǻ���

	int x = 3;

	switch (x)
	{
		int a;
		int b = 1; // �����ڵ� (case�� �����ϱ� ������ ������ ������ ���������� �ʱ�ȭ�� �� �� ����)

		/*
			���� ������ switch���� ������ ������ ������ �Ҵ�� ���� �ش� case������ ������ 
		*/

		case 0:
			a = 0; // case �ȿ����� ���� �ʱ�ȭ�� ������
			int c; // ���� ���� ���� ������
			c = 1;
			break;
		case 2:
			cout << c << endl; 
			// case0���� ����� ���� c�� ����� ���� ������ c�� 1�� �Ҵ��� �� ���� �𸣱� ������ ������ ���� ��µ�
			break;
		case 3:
			cout << x << endl;
			// �ٱ����� ����� x�� �� �۵�
			break;
		default:
			break;
	}

	#pragma endregion

	return 0;
}