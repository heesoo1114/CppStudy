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
	// 배열 초기화
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 25; i++)
	{
		_pNumber[i] = i + 1;
	}

	// 셔플
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
	switch (modeInput)
	{
		case 1:
		{
			temp = AI_MODE::AM_EASY;
			cout << "선택한 모드는 " << "EASY MODE " << "입니다." << endl;
		}
		break;
		case 2:
		{
			temp = AI_MODE::AM_NORMAL;
			cout << "선택한 모드는 " << "NORMAL MODE " << "입니다." << endl;
		}
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
		cout << "무승부" << endl;
		return;
	}

	// 게임 승리 조건
	if (iBingo >= 5)
	{
		cout << "게임에서 승리하셨습니다." << endl;
		return;
	}

	if (iAiBingo >= 5)
	{
		cout << "게임에서 승리하셨습니다." << endl;
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
		// 그리기
		system("cls");
		RenderNumber(iNumber, iBingo);
		RenderNumber(iAiNumber, iAiBingo);

		// 승자 체크
		WinnerCheck(iBingo, iAiBingo);

		// 입력받기
		cout << "숫자를 입력하세요. (0 : 종료)" << endl;
		cout << "입력 : ";
		cin >> iInput;

		// 예외처리
		if (iInput == 0)
		{
			cout << "게임을 종료합니다." << endl;
			break;
		}
		else if (iInput < 1 || iInput > 25) // 입력된 숫자가 범위를 벗어난 수일 때
		{
			cout << "잘못입력하셨습니다." << endl;
			continue;
		}

		Update(iNumber, iAiNumber, iInput);
		iBingo = CountBingo(iNumber, iBingo);

		AIPlay(mode, iAiNumber, iNumber, iBingo);
	}
}