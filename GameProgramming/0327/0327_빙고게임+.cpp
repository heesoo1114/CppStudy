#include <iostream>
#include <Windows.h>
using namespace std;

// enum : 범위 없음
// enum class : 범위 있음
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
	cout << "숫자를 입력하여 모드를 선택하세요" << endl;
	cin >> modeInput;

	// 벗어난 값 입력시 다시 입력하게
	if (modeInput < (int)AI_MODE::AM_EASY || modeInput >(int)AI_MODE::AM_NORMAL)
	{
		cout << "다시 입력해 주세요" << endl;
		return SelectMode();
	}

	switch (modeInput)
	{
		case (int)AI_MODE::AM_EASY:
		{
			temp = AI_MODE::AM_EASY;
			cout << "선택한 모드는 " << "EASY MODE " << "입니다." << endl;
		}
		break;
		case (int)AI_MODE::AM_NORMAL:
		{
			temp = AI_MODE::AM_NORMAL;
			cout << "선택한 모드는 " << "NORMAL MODE " << "입니다." << endl;
		}
		break;
		default:
		{
			cout << "선택한 모드는 " << "NONE " << "입니다." << endl;
		}
		break;
	}

	return temp;
}

void RenderNumber(int* _pNumber, int _iBingo)
{
	cout << "=====================================" << endl;
	cout << "\t 빙고 게임\t" << endl;
	cout << "=====================================" << endl;
	cout << "빙고줄이 5줄 이상이 되면 게임에서 승리합니다." << endl;

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

		// 가로줄
		for (int i = 0; i < 5; i++)
		{
			iStarcnt = 0;
			for (int j = 0; j < 5; j++)
			{
				if (_pNumber[i * 5 + j] == INT_MAX) // 가로줄
				{
					iStarcnt++;
				}
			}

			// 가로줄 체크 후
			if (iStarcnt < 5 && iSavecnt < iStarcnt) // 가장 확률이 높은 줄
			{
				iLine = i; // 가로줄이 0 ~ 4이므로
				iSavecnt = iStarcnt;
			}
		}

		// 세로줄
		for (int i = 0; i < 5; i++)
		{
			iStarcnt = 0;
			for (int j = 0; j < 5; j++)
			{
				if (_pNumber[j * 5 + i] == INT_MAX) // 세로줄
				{
					iStarcnt++;
				}
			}

			// 세로줄 체크 후
			if (iStarcnt < 5 && iSavecnt < iStarcnt) // 가장 확률이 높은 줄
			{
				iLine = i + 5; 
				iSavecnt = iStarcnt;
			}
		}

		// LT 대각선 체크
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

		// RT 대각선 체크
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

		if (iLine <= (int)LINE_NUMBER::LN_H5) // 가로
		{
			for (int i = 0; i < 5; i++)
			{
				if (_pNumber[iLine * 5 + i] != INT_MAX)
				{
					return _pNumber[iLine * 5 + i];
				}
			}
		}
		else if (iLine <= (int)LINE_NUMBER::LN_V5) // 세로
		{
			for (int i = 0; i < 5; i++)
			{
				if (_pNumber[i * 5 + (iLine - 5)] != INT_MAX)
				{
					return _pNumber[i * 5 + (iLine - 5)];
				}
			}
		}
		else if (iLine <= (int)LINE_NUMBER::LN_LT) // LT 대각선
		{
			for (int i = 0; i < 25; i += 6) // iLine : 10
			{
				if (_pNumber[i] != INT_MAX)
				{
					return _pNumber[i];
				}
			}
		}
		else if (iLine <= (int)LINE_NUMBER::LN_RT) // RT 대각선
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
			if (_pNumber[i * 5 + j] == INT_MAX) // 가로
			{
				iHorStar++;
			}
			if (_pNumber[j * 5 + i] == INT_MAX) // 세로
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

	// 대각선
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
		cout << "무승부" << endl;
		return true;
	}

	// 게임 승리 조건
	if (iBingo >= 5)
	{
		cout << "플레이어가 게임에서 승리하셨습니다." << endl;
		return true;
	}

	if (iAiBingo >= 5)
	{
		cout << "AI가 게임에서 승리하셨습니다." << endl;
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
		// 그리기
		system("cls");
		RenderNumber(iNumber, iBingo);
		cout << "=============Player===============" << endl;
		RenderNumber(iAiNumber, iAiBingo);
		cout << "===============AI=================" << endl;

		// 승자 체크
		if (WinnerCheck(iBingo, iAiBingo)) break;

		// 입력받기
		cout << "숫자를 입력하세요. (0 : 종료)" << endl;
		cout << "입력 : ";
		cin >> iInput;

		// 0 입력시 종료
		if (iInput == 0)
		{
			cout << "게임을 종료합니다." << endl;
			break;
		}
		// 예외처리
		else if (iInput < 1 || iInput > 25) // 입력된 숫자가 범위를 벗어난 수일 때
		{
			cout << "잘못입력하셨습니다." << endl;
			continue;
		}

		// 플레이어 플레이
		Update(iNumber, iInput);
		iBingo = CountBingo(iNumber, iBingo);
		Update(iAiNumber, iInput);
		iAiBingo = CountBingo(iAiNumber, iAiBingo);

		// AI 플레이
		iInput = SelectAiNumber(iAiNumber, mode);
		Update(iAiNumber, iInput);
		iAiBingo = CountBingo(iAiNumber, iAiBingo);
		Update(iNumber, iInput);
		iBingo = CountBingo(iNumber, iBingo);
	}
}