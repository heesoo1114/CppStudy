#include <iostream>

using namespace std;

int main()
{
	// number�� 1 ~ 9 �־��ֱ�
	int number[9] = {  };
	for (int i = 0; i < 9; i++)
	{
		number[i] = i + 1;
	}

	int idx1, idx2, temp;
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 100; i++)
	{
		// �������� �ε��� �־��ֱ�
		idx1 = rand() % 9;
		idx2 = rand() % 9;

		// �������� ���� �ε����� �迭�鳢�� ���� �ٲ��ֱ�
		temp = number[idx1];
		number[idx1] = number[idx2];
		number[idx2] = temp;
	}

	cout << "* * *" << endl;
	
	// ��Ʈ ����
	int strike = 0, ball = 0, same = 0;
	int count = 0; // �� ȸ

	// �� �Է¹ޱ�
	int input[3];

	while (true)
	{
		count++;
		cout << count << " ȸ" << endl;
		cout << "1 ~ 9 ���� �� ���� 3���� �Է��Ͻÿ�. (0 : ����) :  ";
		cin >> input[0] >> input[1] >> input[2];
		
		// ���� ����
		if (input[0] == 0 || input[1] == 0 || input[2] == 0) break;
		
		// ���� ó�� 1 (���� ���� ���ڸ� �Է��Ͽ��� ��)
		else if (input[0] < 1 || input[0] > 9 || input[1] < 1 || input[1] > 9 || input[2] < 1 || input[2] > 9)
		{
			cout << "���� ���� ���ڸ� �Է��ϼ���." << endl;
			continue;
		}

		// ���� ó�� 2
		else if (input[0] == input[1] || input[1] == input[2] || input[2] == input[0])
		{
			cout << "�ߺ��� ���ڴ� �Է��� �� �����ϴ�." << endl;
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
			cout << "�����մϴ�. ���� ���߾����ϴ�." << endl;
			break; // ��Ȯ�� �� �Է�
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