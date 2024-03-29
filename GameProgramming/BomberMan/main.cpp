#include<iostream>
#include<vector> // erase, iter.
#include<Windows.h>
#include<mmsystem.h>
#include "Header/console.h"
#include "Header/GameLogic.h"
#include "Header/StartScene.h"
#pragma comment(lib, "winmm.lib")

using namespace std;
int main()
{

	// 맵 20 X 20
	char cMaze[VERTICAL][HORIZON] = {};
	PLAYER tPlayer = {};
	POS tStartpos = {};
	POS tEndpos = {};
	vector<BOOM> vecBomb;
	vector<POS> boomEffect;
	Init(cMaze, &tPlayer, &tStartpos, &tEndpos);
	// 아스키아트.
	while (true)
	{
		system("cls");
		AsciiArt();
		int iMenu = GameMenu();
		if (iMenu == 0) // 게임 시작
			break;
		else if (iMenu == 1) // 게임 정보
			GameInfo();
		else if (iMenu == 2) // 종료하기
		{
			cout << "게임을 종료합니다." << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << '\r' << 3 - i << "...";
				Sleep(1000);
			}
			return 0;
		}
	}
	// 게임 로직.. 
	system("cls");

	clock_t oldTime, curTime;
	oldTime = clock();

	while (true)
	{
		// system("cls");
		Gotoxy(0, 0);
		Update(cMaze, &tPlayer, vecBomb, boomEffect);
		Render(cMaze, &tPlayer, boomEffect);
		Event(vecBomb, boomEffect);
		if (tPlayer.tPos.x == tEndpos.x && tPlayer.tPos.y == tEndpos.y)
		{
			PlaySound(TEXT("endsound.wav"), 0, SND_FILENAME | SND_ASYNC);
			Sleep(1000);
			break;

			while (true)
			{
				curTime = clock();
				// clock => ms 단위로 시간을 측정한다.
				if (curTime - oldTime >= 1000)
				{
					oldTime = curTime;
					break;
				}
			}
		}
	}
}