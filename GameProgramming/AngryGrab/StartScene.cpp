#include <iostream>
#include <windows.h>
#include <conio.h>
#include "StartScene.h"
#include "Console.h"
using namespace std;

int GameMenu()
{
	int x = 44, y = 12;
	Gotoxy(x, y);
	cout << "���� ����" << endl;
	Gotoxy(x, y + 1);
	cout << "���� ����" << endl;
	Gotoxy(x, y + 2);
	cout << "���� ����" << endl;

	while (true)
	{
		int iKey = KeyController();

		switch (iKey)
		{
		case (int)KEY::UP:
		{
			if (y > 12) // 13 ~ 14�� ��
			{
				Gotoxy(x - 2, y);
				cout << " "; // �ش� �ڸ��� ������ �����ֱ�
				Gotoxy(x - 2, --y);
				cout << ">";
			}
		}
		break;
		case (int)KEY::DOWN:
		{
			if (y < 14) // 13 ~ 14�� ��
			{
				Gotoxy(x - 2, y);
				cout << " "; // �ش� �ڸ��� ������ �����ֱ�
				Gotoxy(x - 2, ++y);
				cout << ">";
			}
		}
		break;
		case (int)KEY::SPACE:
		{
			return y - 12;
		}
		break;
		default:
			break;
		}
	}

	return -1;
}

int KeyController()
{
	int iKey = _getch();
	if (iKey == 224)
	{
		iKey = _getch();
		switch (iKey)
		{
		case 72: // UP
		{
			return (int)KEY::UP;
		}
		break;
		case 80: // DOWN
			return (int)KEY::DOWN;
			break;
		}
	}
	else if (iKey == 32)
		return (int)KEY::SPACE;
}

void GameInfo()
{
	system("cls");
	cout << endl << endl;
	cout << "[���۹�]" << endl;
	cout << "�޴� ����: �����̽���" << endl;
	cout << "����Ű�� ������ ���Ը� �����ϼ���." << endl;
	cout << "Spacebar: ���� �ϰ�" << endl;

	// �����̽� ������ ����
	while (true)
	{
		if (KeyController() == (int)KEY::SPACE)
		{
			break;
		}
	}
}
