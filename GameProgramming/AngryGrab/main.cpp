#include <iostream>
#include <vector>
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
	bool isEnemy = true;
	int enemyCnt = 0;

	// 초기화 단계 (변수 설정 및 초기화 함수 실행)
	PLAYER player = {};
	Gotoxy(0, 0);
	player.tPos.x = player.tPos.y = 0;

	Init();

	#pragma region 인트로

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
	
	system("cls");

	#pragma endregion

	ENEMY enemy = {};
	enemy.x = 71;
	enemy.y = 22;

	clock_t oldTime, curTime;
	oldTime = clock();

	while (true)
	{
		// 좌우 움직임
		HorizontalMovement(player.tPos.x, player.tPos.y);

		// 하강 후 상승까지
		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			while (true)
			{
				for (int i = 0; i < 18; i++)
				{
					++player.tPos.y;
					Sleep(50);
					Render(player.tPos.x, player.tPos.y, enemy.x, enemy.y, isEnemy);
				}

				// 여기서 아래에 적이 있는지 확인 -> 있으면 그 enemy 삭제
				if (3 <= abs(player.tPos.x - enemy.x) && abs(player.tPos.x - enemy.x) <= 5 && abs(player.tPos.y - enemy.y) <= 5)
				{
					isEnemy = false;
					enemyCnt++;
				}

				Sleep(300);

				for (int i = 0; i < 18; i++)
				{
					--player.tPos.y;
					Sleep(50);
					Render(player.tPos.x, player.tPos.y, enemy.x, enemy.y, isEnemy);
				}
				break;
			}
		}

		Render(player.tPos.x, player.tPos.y, enemy.x, enemy.y, isEnemy);	
		
		if (isEnemy == false)
		{
			Sleep(100);
			enemy.x = rand() % 109;
			enemy.y = 22;
		}
		isEnemy = true;

		curTime = clock();
		double duration = curTime / CLOCKS_PER_SEC;
		cout << "플레이 시간: " << (float)duration << endl;
		cout << "1분을 플레이하면 게임이 종료됩니다." << endl;
		cout << "제한시간이 끝날 때가지 최대한 많은 인형을 수집하세요." << endl;
		cout << endl;
		cout << "<조작방법>" << endl;
		cout << "좌우 이동: 좌우 화살표" << endl;
		cout << "하강: 아래 화살표" << endl;

		// 게임오버 조건
		if (curTime - oldTime >= 60000) // 1분
		{
			system("cls");
			cout << "제한시간 1분이 다 지났습니다" << endl;
			cout << "게임을 종료합니다." << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << '\r' << 3 - i << "...";
				Sleep(1000);
			}
			system("cls");
			cout << "당신의 흭득한 인형의 수는 " << enemyCnt << "개 입니다." << endl;
			cout << "다음엔 더 많은 인형을 흭득하세요!" << endl;
			return 0;
		}
	}
}