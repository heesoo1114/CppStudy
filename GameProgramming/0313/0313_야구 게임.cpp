#include <iostream>

using namespace std;

int main()
{
	// number에 1 ~ 9 넣어주기
	int number[9] = {  };
	for (int i = 0; i < 9; i++)
	{
		number[i] = i + 1;
	}

	int idx1, idx2, temp;
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 100; i++)
	{
		// 무작위로 인덱스 넣어주기
		idx1 = rand() % 9;
		idx2 = rand() % 9;

		// 무작위로 받은 인덱스의 배열들끼리 서로 바꿔주기
		temp = number[idx1];
		number[idx1] = number[idx2];
		number[idx2] = temp;
	}

	cout << "* * *" << endl;
	
	// 힌트 변수
	int strike = 0, ball = 0, same = 0;
	int count = 0; // 몇 회

	// 답 입력받기
	int input[3];

	while (true)
	{
		count++;
		cout << count << " 회" << endl;
		cout << "1 ~ 9 숫자 중 숫자 3개를 입력하시오. (0 : 종료) :  ";
		cin >> input[0] >> input[1] >> input[2];
		
		// 종료 조건
		if (input[0] == 0 || input[1] == 0 || input[2] == 0) break;
		
		// 예외 처리 1 (범위 밖의 숫자를 입력하였을 때)
		else if (input[0] < 1 || input[0] > 9 || input[1] < 1 || input[1] > 9 || input[2] < 1 || input[2] > 9)
		{
			cout << "범위 안의 숫자를 입력하세요." << endl;
			continue;
		}

		// 예외 처리 2
		else if (input[0] == input[1] || input[1] == input[2] || input[2] == input[0])
		{
			cout << "중복된 숫자는 입력할 수 없습니다." << endl;
			continue;
		}

		// strike, ball
		strike = 0;
		ball = 0;
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

		if (strike >= 3)
		{
			system("cls");
			cout << "축하합니다. 답을 맞추었습니다." << endl;
			break; // 정확한 답 입력
		}
		else if (strike == 0 && ball == 0)
		{
			cout << "out" << endl;
			continue;
		}

		cout << "strike : " << strike << " ball : " << ball << endl;
	}

	return 0;
}