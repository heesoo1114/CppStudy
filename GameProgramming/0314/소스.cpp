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

void setGame(int &count)
{
	MODE mode;

	cout << "(EASY : 1, NORMAL : 2, HARD : 3)";
	cout << "수를 입력하여 모드를 설정하세요. : ";
	
	int input;
	cin >> input;
	mode = selectMode(input);

	count = mode * 5;
}

int main()
{
	cout << "----------------------------" << endl;
	cout << "       숫자 기억 게임		 " << endl;
	cout << "----------------------------" << endl;

	int count;
	setGame(count);

	int nansu;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < count; i++)
	{
		nansu = rand() % 100 + 1;
		Sleep(1000);
		cout << nansu << " ";
	}
}