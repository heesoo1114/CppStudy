#include <iostream>
#include <algorithm>
#include <Windows.h>
#include <mmsystem.h>
#include "Console.h"
#include "GameLogic.h"
#include "StartScene.h"
#pragma comment(lib, "winmm.lib")

using namespace std;

int main()
{
	// �ʱ�ȭ �ܰ� (���� ���� �� �ʱ�ȭ �Լ� ����)

	Gotoxy(0, 0);
	int x, y;
	x = y = 0; 

	Init();
	while (true)
	{
		// �¿� ������
		HorizontalMovement(x, y);

		// �ϰ� �� ��±���
		if (GetAsyncKeyState(VK_SPACE) & 0x8000)
		{
			while (true)
			{
				for (int i = 0; i < 18; i++)
				{
					++y;
					Sleep(100);
					Render(x, y);
				}

				Sleep(300);

				for (int i = 0; i < 18; i++)
				{
					--y;
					Sleep(100);
					Render(x, y);
				}

				break;
			}
		}
		else
		{
			Render(x, y);
		}
	}

	// while (true)
	// {
	// 	system("cls");
	// 	AsciiArt();
	// 		
	// 	int iMenu = GameMenu();
	// 	if (iMenu == 0) // ���� ����
	// 	{
	// 		break;
	// 	}
	// 	else if (iMenu == 1) // ���� ����
	// 	{
	// 		GameInfo();
	// 	}
	// 	else if (iMenu == 2) // �����ϱ�
	// 	{
	// 		cout << "������ �����մϴ�." << endl;
	// 		for (int i = 0; i < 3; i++)
	// 		{
	// 			cout << '\r' << 3 - i << "...";
	// 			Sleep(1000);
	// 		}
	// 		return 0;
	// 	}
	// }
	// 
	// system("cls");
	// 
	// while (true)
	// {
	// 	Gotoxy(0, 0);
	// 	Update();
	// 	Render();
	// 
	// }
}