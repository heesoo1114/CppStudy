#include <iostream>
#include <conio.h>
using namespace std;

// �ʱ�ȭ
void Init(int _pNumber[25])
{
	// �迭 �ʱ�ȭ
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 24; i++)
	{
		_pNumber[i] = i + 1;
	}
	_pNumber[24] = INT_MAX;

	int temp, idx1, idx2;
	for (int i = 0; i < 100; i++)
	{
		idx1 = rand() % 24;// 0 ~ 23
		idx2 = rand() % 24;

		temp = _pNumber[idx1];
		_pNumber[idx1] = _pNumber[idx2];
		_pNumber[idx2] = temp;
	}
}

// �׸���
void RenderNumber(int* _pNumber)
{
	cout << "=====================================" << endl;
	cout << "l\t ���� ���� ����\tl" << endl;
	cout << "=====================================" << endl;
	cout << "*�� �����̿� 1~24���� ������ �����" << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (_pNumber[i * 5 + j] == INT_MAX)
			{
				cout << "*" << "\t";
			}
			else
			{
				cout << _pNumber[i * 5 + j] << "\t";
			}
		}
		cout << endl;
	}
}

// �����̱� (Ű �Է�)
char Update(int* _pNumber)
{
	cout << "W : ��, S : �Ʒ�, A : ����, D : ������, Q : ����" << endl;
	static int startIndex = 24; // static����
	char cInput = _getch();
	switch (cInput)
	{
	case 'w':
	case 'W':
	{
		if (startIndex > 4)  // �� ������ �ƴ� ��
		{
			_pNumber[startIndex] = _pNumber[startIndex - 5];
			_pNumber[startIndex - 5] = INT_MAX;
			startIndex -= 5;
		}
	}
		break;
	case 'a':
	case 'A':
	{
		if (startIndex % 5 != 0) // �� �������� �ƴ� ��
		{
			_pNumber[startIndex] = _pNumber[startIndex - 1];
			_pNumber[startIndex - 1] = INT_MAX;
			startIndex -= 1;
		}
	}
		break;
	case 's':
	case 'S':
	{
		if (startIndex < 20)
		{
			_pNumber[startIndex] = _pNumber[startIndex + 5];
			_pNumber[startIndex + 5] = INT_MAX;
			startIndex += 5;
		}
	}
		break;
	case 'd':
	case 'D':
	{
		if (startIndex % 5 != 4) // �� ���������� �ƴ� ��
		{
			_pNumber[startIndex] = _pNumber[startIndex + 1];
			_pNumber[startIndex + 1] = INT_MAX;
			startIndex += 1;
		}
	}
		break;
	default:
		break;
	}

	return cInput;
}

// ���� ���� üũ
void PuzzleCheck(int* _pNumber)
{
	bool check = true; // �� ���߾��� ��
	for (int i = 0; i < 24; i++)
	{
		if (_pNumber[i] != i + 1) // �������� ���ڰ� �ƴ� ��
		{
			check = false;
			break;
		}
	}

	if (check == true)
	{
		cout << "���� �� ������ϴ�. " << endl;
		return;
	}
}

int main()
{
	int iNumber[25] = {};

	Init(iNumber);

	while (true)
	{
		system("cls");
		RenderNumber(iNumber);
		PuzzleCheck(iNumber);
		Update(iNumber);

		char check = Update(iNumber);
		if (check == 'q' || check == 'Q') // Q Ű ������ �� ���� ����
		{
			break;
		}
	}

	cout << "������ �����մϴ�." << endl;
}
