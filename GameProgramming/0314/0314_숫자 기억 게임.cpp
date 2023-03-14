#include<iostream>
#include<windows.h>
using namespace std;

enum MODE
{
	EASY = 1,
	NORMAL, // = 2
	HARD // = 3
};

MODE selectMode(int input)
{
	MODE mode;

	switch (input)
	{
	case EASY:
	{
		mode = EASY;
		cout << "MODE : EASY" << endl;
	}
		break;
	case NORMAL:
	{
		mode = NORMAL;
		cout << "MODE : NORMAL" << endl;
	}
		break;
	case HARD:
	{
		mode = HARD;
		cout << "MODE : HARD" << endl;
	}
		break;
	default:
	{
		// 예외처리
		cout << "잘못된 입력입니다." << endl;
	}
		break;
	}

	return mode;
}

void setGame(int &count, int &delayTime)
{
	MODE mode;

	cout << "(EASY : 1, NORMAL : 2, HARD : 3)";
	cout << "수를 입력하여 모드를 설정하세요 : ";
	
	int input;
	cin >> input;
	mode = selectMode(input);

	if (mode == 1)
	{
		delayTime = 1000;
	}
	else if (mode == 2)
	{
		delayTime = 700;
	}
	else
	{
		delayTime = 500;
	}

	count = mode * 5;
}

int main()
{
	cout << "----------------------------" << endl;
	cout << "       숫자 기억 게임		 " << endl;
	cout << "----------------------------" << endl;

	int count, delayTime;
	setGame(count, delayTime);

	int nansu[15] = {};

	// 숫자 보여주기
	srand((unsigned int)time(NULL));
	for (int i = 0; i < count; i++)
	{
		nansu[i] = rand() % 100 + 1;
		cout << nansu[i] << " ";
		
		Sleep(delayTime);
	}

	system("cls");

	// 입력 맞는지 확인
	for (int i = 0; i < count; i++)
	{
		int num;
		cin >> num;

		if (num == nansu[i])
		{
			continue;
		}
		else
		{
			system("cls");
			cout << "땡! 틀렸습니다!" << endl;
			return 0;
		}
	}

	system("cls");
	cout << "축하합니다. 모두 맞추셨네요." << endl;
}