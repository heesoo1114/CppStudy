#include <iostream>
#include <vector> // erase, iter
#include <Windows.h>
#include <mmsystem.h> // mmsystem.h가 windos.h 아래에 있어야 함
#include "Header/StartScene.h"
#include "Header/console.h"
#include "Header/GameLogic.h"
#pragma comment(lib, "winmm.lib")

using namespace std;

int main()
{
	// 맵 20 * 20 
	char cMaze[VERTICAL][HORIZON] = { };
	PLAYER tPlayer = {};
	POS tStartpos = {};
	POS tEndpos = {};
	vector<BOOM> vecBomb;
	vector<POS> boomEffect;
	Init(cMaze, &tPlayer, &tStartpos, &tEndpos); 

	while (true)
	{
		system("cls");
		AsciiArt();

		int iMenu = GameMenu();

		if (iMenu == 0) // 게임 시작
		{
			break;
		}
		else if (iMenu == 1) // 게임 정보
		{
			GameInfo();
		}
		else if (iMenu == 2) // 게임 종료
		{
			cout << "게임을 종료합니다." << endl;

			// 수행평가 무조건 나옵니다.
			for (int i = 0; i < 3; i++)
			{
				cout << "\r" << 3 - i << "...";
				Sleep(1000);
			}
			return 0;
		}
	}

	// 게임 로직
	system("cls");
	while (true)
	{
		Gotoxy(0, 0);
		Update(cMaze, &tPlayer, vecBomb, boomEffect);
		Render(cMaze, &tPlayer, boomEffect);

		if (tPlayer.tPos.x == tEndpos.x && tPlayer.tPos.y == tEndpos.y)
		{
			PlaySound(TEXT("endsound.wav"), 0, SND_FILENAME | SND_ASYNC);
			Sleep(1000);
			break;
		}
	}
}