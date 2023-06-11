#include <iostream>
#include <vector>
#include <io.h>
#include <fcntl.h>
#include <Windows.h>
#include <algorithm>
#include "Console.h"
using namespace std;

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
}

void Render(int x)
{
	Gotoxy(x, 0);
	cout << str;
	Gotoxy(x, 1);
	cout << "    x    ";
	Gotoxy(x, 2);
	cout << "    x    ";
	Gotoxy(x, 3);
	cout << " x x x x ";
	Gotoxy(x, 4);
	cout << " x     x ";
}

void Update()
{
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		Sleep(100);
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		Sleep(100);
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		Sleep(100);
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		Sleep(100);
	}
}
