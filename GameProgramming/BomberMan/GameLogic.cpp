#include <iostream>;
#include <io.h>
#include <fcntl.h>
#include <Windows.h>
#include "Header/GameLogic.h"
#include "Header/console.h"

using namespace std;

void AsciiArt()
{
	int oldMode = _setmode(_fileno(stdout), _O_U16TEXT);

	wcout << L"	 _______  _______  __   __  _______    __   __  _______  __    _  " << endl;
	wcout << L"	|  _    ||       ||  |_|  ||  _    |  |  |_|  ||   _   ||  |  | | " << endl;
	wcout << L"	| |_|   ||   _   ||       || |_|   |  |       ||  |_|  ||   |_| | " << endl;
	wcout << L"	|       ||  | |  ||       ||       |  |       ||       ||       | " << endl;
	wcout << L"	|  _   | |  |_|  ||       ||  _   |   |       ||       ||  _    | " << endl;
	wcout << L"	| |_|   ||       || ||_|| || |_|   |  | ||_|| ||   _   || | |   | " << endl;
	wcout << L"	|_______||_______||_|   |_||_______|  |_|   |_||__| |__||_|  |__| " << endl;

	int currentMode = _setmode(_fileno(stdout), _O_TEXT);
}

int GameMenu()
{
	int x = 30, y = 12;
	Gotoxy(x, y);
	cout << "게임 시작" << endl;
	Gotoxy(x, y + 1);
	cout << "게임 정보" << endl;
	Gotoxy(x, y + 2);
	cout << "게임 종료" << endl;

	while (true)
	{
		int iKey = KeyController();

		switch (iKey)
		{
		case (int)KEY::UP:
		{
			if (y > 12) // 13 ~ 14일 때
			{
				Gotoxy(x - 2, y);
				cout << " "; // 해당 자리에 공백을 덮어주기
				Gotoxy(x - 2, --y);
				cout << ">";
			}
		}
			break;
		case (int)KEY::DOWN:
		{
			if (y < 14) // 13 ~ 14일 때
			{
				Gotoxy(x - 2, y);
				cout << " "; // 해당 자리에 공백을 덮어주기
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
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		return (int)KEY::UP;
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		return (int)KEY::DOWN;
	}
	if (GetAsyncKeyState(VK_SPACE) & 0x8000)
	{
		return (int)KEY::SPACE;
	}

	return 0;
}

void GameInfo()
{

}
