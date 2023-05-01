#include "Header/GameLogic.h"
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <Windows.h>
#include <algorithm>
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

void Init(char _cMaze[VERTICAL][HORIZON], PPLAYER _pPlayer, PPOS _pStartpos, PPOS _pEndpos)
{
	system("mode con cols=80 lines=30");
	SetConsoleTitle(TEXT("2-1 Bombman"));
	ConsoleCursor(false, 1);

	// (*_pStartpos).x = 0; == _pStartpos->x = 0;
	_pStartpos->x = 0;
	_pStartpos->y = 0;
	_pEndpos->x = 19;
	_pEndpos->y = 13;

	PLAYER tSetPlayer = {*_pStartpos, 1, 0, false, false, false};
	*_pPlayer = tSetPlayer;

	// string copy 0: 벽, 1: 길, 2: 시작지점, 3: 끝지점
	strcpy_s(_cMaze[0],  "21100000000000000000");
	strcpy_s(_cMaze[1],  "00111111110000000000");
	strcpy_s(_cMaze[2],  "00000000010000000000");
	strcpy_s(_cMaze[3],  "00000000011100000000");
	strcpy_s(_cMaze[4],  "00000000000100000000");
	strcpy_s(_cMaze[5],  "00000001111100000000");
	strcpy_s(_cMaze[6],  "00000001000000000000");
	strcpy_s(_cMaze[7],  "00000001111111000000");
	strcpy_s(_cMaze[8],  "00000000000001000000");
	strcpy_s(_cMaze[9],  "00000000000001000000");
	strcpy_s(_cMaze[10], "00000111111111000000");
	strcpy_s(_cMaze[11], "00000100000001000000");
	strcpy_s(_cMaze[12], "00000100000001000000");
	strcpy_s(_cMaze[13], "01111111000001111130");
	strcpy_s(_cMaze[14], "00000001000001000000");
	strcpy_s(_cMaze[15], "00000001000001000000");
	strcpy_s(_cMaze[16], "01111111111111000000");
	strcpy_s(_cMaze[17], "00000001000101111110");
	strcpy_s(_cMaze[18], "00000001000100000000");
	strcpy_s(_cMaze[19], "00000000000100000000");
}

void Update(char _cMaze[VERTICAL][HORIZON], PPLAYER _pPlayer, vector<BOOM>& _vecBomb, vector<POS>& _boomEffect)
{
	// 갱신된 위치에 현재 위치를 저장
	_pPlayer->tNewPos = _pPlayer->tPos;

	// GetAsyncKeyState
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		--_pPlayer->tNewPos.x;
		Sleep(100);
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		++_pPlayer->tNewPos.x;
		Sleep(100);
	}
	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		--_pPlayer->tNewPos.y;
		Sleep(100);
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		++_pPlayer->tNewPos.y;
		Sleep(100);
	}

	// 벽 밖인지 clamp
	_pPlayer->tNewPos.x = std::clamp(_pPlayer->tNewPos.x, 0, HORIZON - 2);
	_pPlayer->tNewPos.y = std::clamp(_pPlayer->tNewPos.y, 0, VERTICAL - 1);

	if (_cMaze[_pPlayer->tNewPos.y][_pPlayer->tNewPos.x] != 0) // 0은 벽인데 벽이 아니고 갈 수 있는 타일이어야 이동 가능
	{
		_pPlayer->tPos = _pPlayer->tNewPos;
	}

	if (GetAsyncKeyState(VK_SPACE) & 0x8000)
	{
		BombCreate(_cMaze, _pPlayer, _vecBomb);
	}

	if (GetAsyncKeyState('E') & 0x8000)
	{
		if (_pPlayer->bWallPush)
		{
			_pPlayer->bPushOnOff = !_pPlayer->bPushOnOff;
		}
	}

	Sleep(100);
}

void Render(char _cMaze[VERTICAL][HORIZON], PPLAYER _pPlayer, vector<POS>& boomEffectr)
{
	for (int i = 0; i < VERTICAL; i++)
	{
		for (int j = 0; j < HORIZON; j++)
		{
			if (_pPlayer->tPos.x == i && _pPlayer->tPos.y == j)
			{
				cout << "♂";
			}
			else if (_cMaze[i][j] == (char)MAPTYPE::WALL)
			{
				cout << "■";
			}
			else if (_cMaze[i][j] == (char)MAPTYPE::ROAD)
			{
				cout << " ";
			}
			else if (_cMaze[i][j] == (char)MAPTYPE::START)
			{
				cout << "®";
			}
			else if (_cMaze[i][j] == (char)MAPTYPE::END)
			{
				cout << "♨";
			}
			else if (_cMaze[i][j] == (char)MAPTYPE::END)
			{
				cout << "♨";
			}
			else if (_cMaze[i][j] == (char)MAPTYPE::WATERBOMB)
			{
				SetColor((int)COLOR::MINT, (int)COLOR::BLACK);
				cout << "@";
			}
			else if (_cMaze[i][j] == (char)MAPTYPE::TWINKLE)
			{
				SetColor((int)COLOR::SKYBLUE, (int)COLOR::BLACK);
				cout << "⊙";
			}
			else if (_cMaze[i][j] == (char)MAPTYPE::POWER)
			{
				cout << "◐";
			}
			else if (_cMaze[i][j] == (char)MAPTYPE::SLIME)
			{
				cout << "♤";
			}
			else if (_cMaze[i][j] == (char)MAPTYPE::PUSH)
			{
				cout << "▩";
			}
			SetColor((int)COLOR::WHITE, (int)COLOR::BLACK);
		}
		cout << endl;
	}
	cout << "SPACEBAR: 폭탄설치, E: 푸시능력 ON/OFF" << endl;
	cout << "폭탄 파워 " << _pPlayer->iBombPower << endl;

	if (_pPlayer->bPushOnOff)
	{
		cout << "푸시 능력 ON " << endl;
	}
	else
	{
		cout << "푸시 능력 OFF " << endl;
	}

	if (_pPlayer->bSlime)
	{
		cout << "슬라임 능력 ON " << endl;
	}
	else
	{
		cout << "슬라임 능력 OFF " << endl;
	}
	
}

void BombCreate(char _cMaze[VERTICAL][HORIZON], PPLAYER _pPlayer, std::vector<BOOM>& _vecBomb)
{
	// 폭탄 개수는 5개만
	if (_pPlayer->iBombCount == 5) return;

	// 폭탄 설치 가능
	if (_cMaze[_pPlayer->tPos.y][_pPlayer->tPos.x] == (char)MAPTYPE::ROAD)
	{
		_cMaze[_pPlayer->tPos.y][_pPlayer->tPos.x] = 'b';
		_pPlayer->iBombCount++;
		vector<BOOM> tempbomb;

		_vecBomb.push_back({_pPlayer->tPos.x, _pPlayer->tPos.y, 50, false});
	}
}