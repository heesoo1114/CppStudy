#include <iostream>
using namespace std;

bool isError(int input[])
{
	bool isError = false;

	// 예외 처리 1 (범위 밖의 숫자를 입력하였을 때)
	if (input[0] < 1 || input[0] > 9 || input[1] < 1 || input[1] > 9 || input[2] < 1 || input[2] > 9)
	{
		cout << "범위 안의 숫자를 입력하세요." << endl;
		isError = true;
	}

	// 예외 처리 2
	else if (input[0] == input[1] || input[1] == input[2] || input[2] == input[0])
	{
		cout << "중복된 숫자는 입력할 수 없습니다." << endl;
		isError = false;
	}

	return isError;
}

void answerCheck(int &strike, int &ball, int number[], int input[])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (number[i] == input[j])
			{
				if (i == j)
				{
					strike++;
				}
				else
				{
					ball++;
				}
			}
		}
	}
}

bool isClear(int strike, int ball, int player)
{
	bool isClear = false;

	if (strike >= 3)
	{
		system("cls");
		cout << "축하합니다. 답을 맞추었습니다." << endl;
		cout << "Player" << player << "의 승리입니다." << endl;
		isClear = true;
	}
	else if (strike == 0 && ball == 0)
	{
		cout << "out" << endl;
		isClear = false;
	}

	return isClear;
}

int main()
{
	#pragma region 난수 생성

	int number[9] = {  };
	for (int i = 0; i < 9; i++)
	{
		number[i] = i + 1;
	}

	int idx1, idx2, temp;
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 100; i++)
	{
		idx1 = rand() % 9;
		idx2 = rand() % 9;
		swap(number[idx1], number[idx2]);
	}

	// cout << number[0] << number[1] << number[2] << endl;

	#pragma endregion

	int strike = 0, ball = 0, same = 0;
	int count = 0; 

	int input[3];

	while (true)
	{
		cout << "_________________________" << endl;
		int player = count % 2 + 1;
		cout << "Player" << player << "의 차례입니다." << endl;

		count++;
		cout << count << " 회" << endl;

		cout << "1 ~ 9 숫자 중 숫자 3개를 입력하시오. (0 : 종료) :  ";
		cin >> input[0] >> input[1] >> input[2];

		if (input[0] == 0 || input[1] == 0 || input[2] == 0) break;
		
		// 입력을 알맞게 받았는지 확인
		if (isError(input)) continue;

		// 답 체크
		strike = ball = 0;
		answerCheck(strike, ball, number, input);
	
		// 클리어 했는지 확인
		if (isClear(strike, ball, player)) break;
		
		cout << "strike : " << strike << " ball : " << ball << endl;
	}

	return 0;
}