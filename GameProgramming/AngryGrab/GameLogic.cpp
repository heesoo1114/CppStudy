#include <iostream>
#include <vector>
#include <io.h>
#include <fcntl.h>
#include <Windows.h>
#include <algorithm>
#include "Console.h"
#include "GameLogic.h"
using namespace std;

string singleX = "    x    ";

void AsciiArt()
{
	int oldMode = _setmode(_fileno(stdout), _O_U16TEXT);

	wcout << L"	 _______  __    _  _______  ______    __   __  _______  ______    _______  _______  " << endl;
	wcout << L"	|   _   ||  |  | ||       ||    _ |  |  | |  ||       ||    _ |  |   _   ||  _    | " << endl;
	wcout << L"	|  |_|  ||   |_| ||    ___||   | ||  |  |_|  ||    ___||   | ||  |  |_|  || |_|   | " << endl;
	wcout << L"	|       ||       ||   | __ |   |_||_ |       ||   | __ |   |_||_ |       ||       | " << endl;
	wcout << L"	|       ||  _    ||   ||  ||    __  ||_     _||   ||  ||    __  ||       ||  _   |  " << endl;
	wcout << L"	|   _   || | |   ||   |_| ||   |  | |  |   |  |   |_| ||   |  | ||   _   || |_|   | " << endl;
	wcout << L"	|__| |__||_|  |__||_______||___|  |_|  |___|  |_______||___|  |_||__| |__||_______| " << endl;
	
	int currentMode = _setmode(_fileno(stdout), _O_TEXT);
}

void Init()
{
	SetConsoleTitle(TEXT("AngryGrab"));
	ConsoleCursor(false, 1);
	system("mode con cols=115 lines=35");
}

void Update()
{

}

void Render(int playerX, int playerY, int enemyX, int enemyY, bool isEnemy)
{
	#pragma region Grab

	for (int i = 0; i < playerY + 3; ++i)
	{
		Gotoxy(playerX, i);
		cout << singleX;
	}
	Gotoxy(playerX, playerY + 3);
	cout << " x x x x ";
	Gotoxy(playerX, playerY + 4);
	cout << " x     x ";
	Gotoxy(playerX, playerY + 5);
	cout << "         ";

	#pragma endregion

	#pragma region Enemy

	if (isEnemy)
	{
		Gotoxy(enemyX, enemyY);
		cout << "ㅁ";
	}
	
	#pragma endregion

	Gotoxy(0, 23);
	cout << "------------------------------------------------------------------------------------------------------------" << endl;
}

void HorizontalMovement(int& x, int& y)
{
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		x--;
		Sleep(30);
	}

	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		x++;
		Sleep(30);
	}

	x = clamp(x, 0, 111);
	y = clamp(y, 0, 23);
}
