#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Sound.h"
using namespace std;

void PlayAllSound(double soundID[8], string outputList[8])
{
	for (int i = 0; i < 8; i++)
	{
		Beep(soundID[i], 500);
		cout << outputList[i] << " ";
		Sleep(500);
	}
}

int GetInput(string outputList[8])
{
	cout << "입력하세요" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << outputList[i] << " ";
	}
	cout << endl;

	int input;
	cin >> input;
	input -= 1;

	return input;
}

void ThreeSecondDelay()
{
	// 여기서 3, 2, 1
	for (int i = 0; i < 3; i++)
	{
		cout << "\r" << 3 - i << "...";

		// \r은 그 줄의 맨 앞으로 커서를 옮김
		// 근데 이미 출력이 된 자리야
		// 하지만 커서를 앞으로 보내서 이미 출력된 자리여도
		// 다시 출력을 하면 지우고 새로 출력하는 것이 보임

		Sleep(2000);
	}
}

int main()
{
	double soundList[8] = { 523.25, 587.33, 659.26, 698.46, 783.99, 880, 987.77, 1046.50 };
	string outputList[8] = { "도(1)", "레(2)", "미(3)", "파(4)", "솔(5)", "라(6)", "시(7)", "도(8)" };

	cout << "---------------------------" << endl;
	cout << "	   절대 음감 게임       " << endl;
	cout << "---------------------------" << endl;
	cout << "설명 : 처음에 8음계를 들려주고 ." << endl;
	cout << "다음에 8개 중 한 개의 음을 들려 준다." << endl;
	cout << "---------------------------" << endl;
	cout << "준비하고 아무 키나 누른다." << endl;

	_getch(); // 아무 키 입력

	cout << "---------------------------" << endl;

	// 처음 소리 들려주기
	PlayAllSound(soundList, outputList);
	cout << endl;

	// 딜레이 주고 랜덤으로 답 정하기
	srand((unsigned int)time(NULL));
	int answer = rand() % 8;

	cout << "3초 뒤 답 음 PLAY" << endl;
	Sleep(3000);

	ThreeSecondDelay();
	Beep(soundList[answer], 500);

	while (true)
	{
		Sleep(2000);
		
		int input = GetInput(outputList);

		// 정답 체크
		if (input != answer)
		{
			cout << "틀렸습니다" << endl;
			PlayAllSound(soundList, outputList);
			cout << endl;
		}
		else if (input == answer)
		{
			system("cls");
			cout << "맞았습니다" << endl;
			break;
		}
	}
}