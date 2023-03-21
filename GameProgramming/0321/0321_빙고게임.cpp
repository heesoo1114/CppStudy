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

int main()
{
	int iNumber[25] = {};
	int iBingo = 0;
	int iInput;
	Init(iNumber);

	while (true)
	{
		system("cls");
		RenderNumber(iNumber, iBingo);

		// 게임 승리 조건
		if (iBingo >= 5)
		{
			cout << "게임에서 승리하셨습니다." << endl;
			break;
		}

		cout << "숫자를 입력하세요. (0 : 종료)" << endl;
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

		Update(iNumber, iInput);
		iBingo = CountBingo(iNumber, iBingo);
	}
}