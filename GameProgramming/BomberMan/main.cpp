#include <iostream>
#include <vector> // erase, iter
#include <Windows.h>
#include <mmsystem.h> // mmsystem.h�� windos.h �Ʒ��� �־�� ��
#include "Header/StartScene.h"
#include "Header/console.h"
#include "Header/GameLogic.h"
#pragma comment(lib, "winmm.lib")

using namespace std;

int main()
{
	// �� 20 * 20 
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

		if (iMenu == 0) // ���� ����
		{
			break;
		}
		else if (iMenu == 1) // ���� ����
		{
			GameInfo();
		}
		else if (iMenu == 2) // ���� ����
		{
			cout << "������ �����մϴ�." << endl;

			// ������ ������ ���ɴϴ�.
			for (int i = 0; i < 3; i++)
			{
				cout << "\r" << 3 - i << "...";
				Sleep(1000);
			}
			return 0;
		}
	}

	// ���� ����
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