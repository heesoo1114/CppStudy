#include <iostream>
#include <conio.h>
using namespace std;

// 초기화
void Init(int _pNumber[25])
{
	// 배열 초기화
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

// 그리기
void RenderNumber(int* _pNumber)
{
	cout << "=====================================" << endl;
	cout << "l\t 숫자 퍼즐 게임\tl" << endl;
	cout << "=====================================" << endl;
	cout << "*을 움직이여 1~24까지 퍼즐을 맞춰라" << endl;

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

// 움직이기 (키 입력)
char Update(int* _pNumber)
{
	cout << "W : 위, S : 아래, A : 왼쪽, D : 오른쪽, Q : 종료" << endl;
	static int startIndex = 24; // static으로
	char cInput = _getch();
	switch (cInput)
	{
	case 'w':
	case 'W':
	{
		if (startIndex > 4)  // 맨 윗줄이 아닐 때
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
		if (startIndex % 5 != 0) // 맨 왼쪽줄이 아닐 떄
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
		if (startIndex % 5 != 4) // 맨 오른쪽줄이 아닐 떄
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

// 게임 오버 체크
void PuzzleCheck(int* _pNumber)
{
	bool check = true; // 다 맞추었을 때
	for (int i = 0; i < 24; i++)
	{
		if (_pNumber[i] != i + 1) // 연속적인 숫자가 아닐 때
		{
			check = false;
			break;
		}
	}

	if (check == true)
	{
		cout << "숫자 다 맞췄습니다. " << endl;
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
		if (check == 'q' || check == 'Q') // Q 키 눌렀을 때 게임 종료
		{
			break;
		}
	}

	cout << "게임을 종료합니다." << endl;
}
