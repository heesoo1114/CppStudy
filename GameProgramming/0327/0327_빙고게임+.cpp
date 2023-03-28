#include <iostream>
#include <Windows.h>
using namespace std;

// enum : ���� ����
// enum class : ���� ����
enum class AI_MODE
{
	AM_EASY = 1,
	AM_NORMAL
};

enum class LINE_NUMBER
{
	LN_H1, LN_H2, LN_H3, LN_H4, LN_H5,
	LN_V1, LN_V2, LN_V3, LN_V4, LN_V5,
	LN_LT, LN_RT
};

void Init(int* _pNumber)
{
	for (int i = 0; i < 25; i++)
	{
		_pNumber[i] = i + 1;
	}

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

	// ��� �� �Է½� �ٽ� �Է��ϰ�
	if (modeInput < (int)AI_MODE::AM_EASY || modeInput >(int)AI_MODE::AM_NORMAL)
	{
		cout << "�ٽ� �Է��� �ּ���" << endl;
		return SelectMode();
	}

	switch (modeInput)
	{
		case (int)AI_MODE::AM_EASY:
		{
			temp = AI_MODE::AM_EASY;
			cout << "������ ���� " << "EASY MODE " << "�Դϴ�." << endl;
		}
		break;
		case (int)AI_MODE::AM_NORMAL:
		{
			temp = AI_MODE::AM_NORMAL;
			cout << "������ ���� " << "NORMAL MODE " << "�Դϴ�." << endl;
		}
		break;
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

void Update(int* _pNumber, int& _iInput)
{
	for (int i = 0; i < 25; i++)
	{
		if (_iInput == _pNumber[i])
		{
			_pNumber[i] = INT_MAX;
		}
	}
}

int SelectAiNumber(int* _pNumber, AI_MODE _eMode)
{
	int iNoneSelect[25] = {};
	int iNoneSelectcnt = 0;
	switch (_eMode)
	{
	case AI_MODE::AM_EASY:
	{
		for (int i = 0; i < 25; ++i)
		{
			if (_pNumber[i] != INT_MAX)
			{
				iNoneSelect[iNoneSelectcnt] = _pNumber[i];
				++iNoneSelectcnt;
			}
		}
		return iNoneSelect[rand() % iNoneSelectcnt];
	}
		break;
	case AI_MODE::AM_NORMAL:
	{
		int iLine = 0;
		int iStarcnt = 0;
		int iSavecnt = 0;

		// ������
		for (int i = 0; i < 5; i++)
		{
			iStarcnt = 0;
			for (int j = 0; j < 5; j++)
			{
				if (_pNumber[i * 5 + j] == INT_MAX) // ������
				{
					iStarcnt++;
				}
			}

			// ������ üũ ��
			if (iStarcnt < 5 && iSavecnt < iStarcnt) // ���� Ȯ���� ���� ��
			{
				iLine = i; // �������� 0 ~ 4�̹Ƿ�
				iSavecnt = iStarcnt;
			}
		}

		// ������
		for (int i = 0; i < 5; i++)
		{
			iStarcnt = 0;
			for (int j = 0; j < 5; j++)
			{
				if (_pNumber[j * 5 + i] == INT_MAX) // ������
				{
					iStarcnt++;
				}
			}

			// ������ üũ ��
			if (iStarcnt < 5 && iSavecnt < iStarcnt) // ���� Ȯ���� ���� ��
			{
				iLine = i + 5; 
				iSavecnt = iStarcnt;
			}
		}

		// LT �밢�� üũ
		for (int i = 0; i < 25; i += 6)
		{
			if (_pNumber[i] == INT_MAX)
			{
				iStarcnt++;
			}
		}
		if (iStarcnt < 5 && iSavecnt < iStarcnt)
		{
			iLine = (int)LINE_NUMBER::LN_LT;
			iSavecnt = iStarcnt;
		}

		// RT �밢�� üũ
		for (int i = 4; i <= 20; i += 4)
		{
			if (_pNumber[i] == INT_MAX)
			{
				iStarcnt++;
			}
		}
		if (iStarcnt < 5 && iSavecnt < iStarcnt)
		{
			iLine = (int)LINE_NUMBER::LN_RT;
			iSavecnt = iStarcnt;
		}

		if (iLine <= (int)LINE_NUMBER::LN_H5) // ����
		{
			for (int i = 0; i < 5; i++)
			{
				if (_pNumber[iLine * 5 + i] != INT_MAX)
				{
					return _pNumber[iLine * 5 + i];
				}
			}
		}
		else if (iLine <= (int)LINE_NUMBER::LN_V5) // ����
		{
			for (int i = 0; i < 5; i++)
			{
				if (_pNumber[i * 5 + (iLine - 5)] != INT_MAX)
				{
					return _pNumber[i * 5 + (iLine - 5)];
				}
			}
		}
		else if (iLine <= (int)LINE_NUMBER::LN_LT) // LT �밢��
		{
			for (int i = 0; i < 25; i += 6) // iLine : 10
			{
				if (_pNumber[i] != INT_MAX)
				{
					return _pNumber[i];
				}
			}
		}
		else if (iLine <= (int)LINE_NUMBER::LN_RT) // RT �밢��
		{
			for (int i = 4; i <= 20; i += 4) // iLine : 10
			{
				if (_pNumber[i] != INT_MAX)
				{
					return _pNumber[i];
				}
			}
		}
	}
		break;
	default:
		break;
	}
	return -1;
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

bool WinnerCheck(int iBingo, int iAiBingo)
{
	if (iBingo == 5 && iAiBingo == 5)
	{
		cout << "���º�" << endl;
		return true;
	}

	// ���� �¸� ����
	if (iBingo >= 5)
	{
		cout << "�÷��̾ ���ӿ��� �¸��ϼ̽��ϴ�." << endl;
		return true;
	}

	if (iAiBingo >= 5)
	{
		cout << "AI�� ���ӿ��� �¸��ϼ̽��ϴ�." << endl;
		return true;
	}

	return false;
}

int main()
{
	srand((unsigned int)time(NULL));

	int iNumber[25] = {};
	int iAiNumber[25] = {};
	int iBingo = 0;
	int iAiBingo = 0;

	int iInput;

	AI_MODE mode = SelectMode();

	Init(iNumber);
	Init(iAiNumber);

	while (true)
	{
		// �׸���
		system("cls");
		RenderNumber(iNumber, iBingo);
		cout << "=============Player===============" << endl;
		RenderNumber(iAiNumber, iAiBingo);
		cout << "===============AI=================" << endl;

		// ���� üũ
		if (WinnerCheck(iBingo, iAiBingo)) break;

		// �Է¹ޱ�
		cout << "���ڸ� �Է��ϼ���. (0 : ����)" << endl;
		cout << "�Է� : ";
		cin >> iInput;

		// 0 �Է½� ����
		if (iInput == 0)
		{
			cout << "������ �����մϴ�." << endl;
			break;
		}
		// ����ó��
		else if (iInput < 1 || iInput > 25) // �Էµ� ���ڰ� ������ ��� ���� ��
		{
			cout << "�߸��Է��ϼ̽��ϴ�." << endl;
			continue;
		}

		// �÷��̾� �÷���
		Update(iNumber, iInput);
		iBingo = CountBingo(iNumber, iBingo);
		Update(iAiNumber, iInput);
		iAiBingo = CountBingo(iAiNumber, iAiBingo);

		// AI �÷���
		iInput = SelectAiNumber(iAiNumber, mode);
		Update(iAiNumber, iInput);
		iAiBingo = CountBingo(iAiNumber, iAiBingo);
		Update(iNumber, iInput);
		iBingo = CountBingo(iNumber, iBingo);
	}
}