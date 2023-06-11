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
	int x = 0;
	int y = 0;

	Init();
	while (true)
	{
		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			x--;
			Sleep(100);
		}
		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			x++;
			Sleep(100);
		}
		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			--y;
			Sleep(100);
		}
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			++y;
			Sleep(100);
		}
		x = clamp(x, 0, 71);
		y = clamp(y, 0, 18);
		Render(x, y);
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