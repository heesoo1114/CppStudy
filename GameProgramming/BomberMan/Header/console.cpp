#include "console.h"

void FullScreen()
{
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE)
		, CONSOLE_FULLSCREEN_MODE, 0);
}

void Gotoxy(int x, int y)
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD Cur = { x, y };
	SetConsoleCursorPosition(hOut, Cur);
}

void ConsoleCursor(bool _bVis, DWORD _dwSize)
{
	CONSOLE_CURSOR_INFO curInfo;
	curInfo.bVisible = _bVis;
	curInfo.dwSize = _dwSize;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curInfo);
}

void SetColor(int _color, int _bgcolor)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (_bgcolor << 4) | _color);
}
