#include <iostream>
#include <Windows.h>
using namespace std;

enum class AI_MODE
{
	AM_EASY = 1,
	AM_NORMAL
};

void Init(int* _pNumber)
{
	// �迭 �ʱ�ȭ
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 25; i++)
	{
		_pNumber[i] = i + 1;
	}

	// ����
	int temp, idx1, idx2;
	for (int i = 0; i < 100; i++)
	{
		idx1 = rand() % 25; // 0 ~ 24
		idx2 = rand() % 25;

		temp = _pNumber[idx1];
		_pNumber[idx1] = _pNumber[idx2];
		_pNumber[idx2] = temp;
	}
}

AI_MODE SelectMode()
{
	AI_MODE temp;
	int modeInput;
	cout << "EASY : 1, NORMAL : 2" << endl;
	cout << "���ڸ� �Է��Ͽ� ��带 �����ϼ���" << endl;
	cin >> modeInput;
	switch (modeInput)
	{
		case 1:
		{
			temp = AI_MODE::AM_EASY;
			cout << "������ ���� " << "EASY MODE " << "�Դϴ�." << endl;
		}
		break;
		case 2:
		{
			temp = AI_MODE::AM_NORMAL;
			cout << "������ ���� " << "NORMAL MODE " << "�Դϴ�." << endl;
		}
		default:
		{
			cout << "������ ���� " << "NONE " << "�Դϴ�." << endl;
		}
		break;
	}

	return temp;
}

void RenderNumber(int* _pNumber, int _iBingo)
{
	cout << "=====================================" << endl;
	cout << "\t ���� ����\t" << endl;
	cout << "=====================================" << endl;
	cout << "�������� 5�� �̻��� �Ǹ� ���ӿ��� �¸��մϴ�." << endl;

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
	cout << "Bingo Line : " << _iBingo << endl;
}

void Update(int* _pNumber, int* _pAiNumber, int& _iInput)
{
	for (int i = 0; i < 25; i++)
	{
		if (_iInput == _pNumber[i])
		{
			_pNumber[i] = INT_MAX;
		}

		if (_iInput == _pAiNumber[i])
		{
			_pAiNumber[i] = INT_MAX;
		}
	}
}

void EasyModeUpdate(int* _pAiNumber, int* _pNumber)
{
	while (true)
	{
		int input;
		input = rand() % 25;

		if (_pAiNumber[input] == INT_MAX) continue;

		cout << input << endl;

		for (int i = 0; i < 25; i++)
		{
			if (input == _pAiNumber[i])
			{
				_pAiNumber[i] = INT_MAX;
			}

			if (input == _pNumber[i])
			{
				_pNumber[i] = INT_MAX;
			}
		}

		break;
	}
}

int CountBingo(int* _pNumber, int iBingo)
{
	int iCheckBingo = 0;
	int iHorStar = 0, iVerStar = 0, iLTStar = 0, iRTStar = 0;

	for (int i = 0; i < 5; i++)
	{
		iHorStar = iVerStar = 0;
		for (int j = 0; j < 5; j++)
		{
			if (_pNumber[i * 5 + j] == INT_MAX) // ����
			{
				iHorStar++;
			}
			if (_pNumber[j * 5 + i] == INT_MAX) // ����
			{
				iVerStar++;
			}
		}

		if (iHorStar == 5)
		{
			iCheckBingo++;
		}
		if (iVerStar == 5)
		{
			iCheckBingo++;
		}
	}

	// �밢��
	for (int i = 0; i < 25; i += 6)
	{
		if (_pNumber[i] == INT_MAX)
		{
			iRTStar++;
		}
	}
	for (int i = 4; i <= 20; i += 4)
	{
		if (_pNumber[i] == INT_MAX)
		{
			iLTStar++;
		}
	}
	if (iLTStar == 5)
	{
		iCheckBingo++;
	}
	if (iRTStar == 5)
	{
		iCheckBingo++;
	}

	return iCheckBingo;
}

void AIPlay(AI_MODE mode, int* iAiNumber, int* iNumber, int &iAiBingo)
{
	if (mode == AI_MODE::AM_EASY)
	{
		EasyModeUpdate(iAiNumber, iNumber);
		iAiBingo = CountBingo(iAiNumber, iAiBingo);
	}
	else if (mode == AI_MODE::AM_NORMAL)
	{

	}
}

void WinnerCheck(int iBingo, int iAiBingo)
{
	if (iBingo == 5 && iAiBingo == 5)
	{
		cout << "���º�" << endl;
		return;
	}

	// ���� �¸� ����
	if (iBingo >= 5)
	{
		cout << "���ӿ��� �¸��ϼ̽��ϴ�." << endl;
		return;
	}

	if (iAiBingo >= 5)
	{
		cout << "���ӿ��� �¸��ϼ̽��ϴ�." << endl;
		return;
	}
}

int main()
{
	int iNumber[25] = {};
	int iAiNumber[25] = {};
	int iBingo = 0;
	int iAiBingo = 0;

	int iInput;

	AI_MODE mode = SelectMode();

	Init(iNumber);
	Sleep(1000);
	Init(iAiNumber);

	while (true)
	{
		// �׸���
		system("cls");
		RenderNumber(iNumber, iBingo);
		RenderNumber(iAiNumber, iAiBingo);

		// ���� üũ
		WinnerCheck(iBingo, iAiBingo);

		// �Է¹ޱ�
		cout << "���ڸ� �Է��ϼ���. (0 : ����)" << endl;
		cout << "�Է� : ";
		cin >> iInput;

		// ����ó��
		if (iInput == 0)
		{
			cout << "������ �����մϴ�." << endl;
			break;
		}
		else if (iInput < 1 || iInput > 25) // �Էµ� ���ڰ� ������ ��� ���� ��
		{
			cout << "�߸��Է��ϼ̽��ϴ�." << endl;
			continue;
		}

		Update(iNumber, iAiNumber, iInput);
		iBingo = CountBingo(iNumber, iBingo);

		AIPlay(mode, iAiNumber, iNumber, iBingo);
	}
}