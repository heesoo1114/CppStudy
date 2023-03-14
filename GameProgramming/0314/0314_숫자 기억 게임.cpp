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
		// ����ó��
		cout << "�߸��� �Է��Դϴ�." << endl;
	}
		break;
	}

	return mode;
}

void setGame(int &count, int &delayTime)
{
	MODE mode;

	cout << "(EASY : 1, NORMAL : 2, HARD : 3)";
	cout << "���� �Է��Ͽ� ��带 �����ϼ��� : ";
	
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
	cout << "       ���� ��� ����		 " << endl;
	cout << "----------------------------" << endl;

	int count, delayTime;
	setGame(count, delayTime);

	int nansu[15] = {};

	// ���� �����ֱ�
	srand((unsigned int)time(NULL));
	for (int i = 0; i < count; i++)
	{
		nansu[i] = rand() % 100 + 1;
		cout << nansu[i] << " ";
		
		Sleep(delayTime);
	}

	system("cls");

	// �Է� �´��� Ȯ��
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
			cout << "��! Ʋ�Ƚ��ϴ�!" << endl;
			return 0;
		}
	}

	system("cls");
	cout << "�����մϴ�. ��� ���߼̳׿�." << endl;
}