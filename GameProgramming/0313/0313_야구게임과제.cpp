#include <iostream>
using namespace std;

bool isError(int input[])
{
	bool isError = false;

	// ���� ó�� 1 (���� ���� ���ڸ� �Է��Ͽ��� ��)
	if (input[0] < 1 || input[0] > 9 || input[1] < 1 || input[1] > 9 || input[2] < 1 || input[2] > 9)
	{
		cout << "���� ���� ���ڸ� �Է��ϼ���." << endl;
		isError = true;
	}

	// ���� ó�� 2
	else if (input[0] == input[1] || input[1] == input[2] || input[2] == input[0])
	{
		cout << "�ߺ��� ���ڴ� �Է��� �� �����ϴ�." << endl;
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
		cout << "�����մϴ�. ���� ���߾����ϴ�." << endl;
		cout << "Player" << player << "�� �¸��Դϴ�." << endl;
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
	#pragma region ���� ����

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
		cout << "Player" << player << "�� �����Դϴ�." << endl;

		count++;
		cout << count << " ȸ" << endl;

		cout << "1 ~ 9 ���� �� ���� 3���� �Է��Ͻÿ�. (0 : ����) :  ";
		cin >> input[0] >> input[1] >> input[2];

		if (input[0] == 0 || input[1] == 0 || input[2] == 0) break;
		
		// �Է��� �˸°� �޾Ҵ��� Ȯ��
		if (isError(input)) continue;

		// �� üũ
		strike = ball = 0;
		answerCheck(strike, ball, number, input);
	
		// Ŭ���� �ߴ��� Ȯ��
		if (isClear(strike, ball, player)) break;
		
		cout << "strike : " << strike << " ball : " << ball << endl;
	}

	return 0;
}