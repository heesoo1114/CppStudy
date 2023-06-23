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

	// �ʱ�ȭ �ܰ� (���� ���� �� �ʱ�ȭ �Լ� ����)
	PLAYER player = {};
	Gotoxy(0, 0);
	player.tPos.x = player.tPos.y = 0;

	Init();

	#pragma region ��Ʈ��

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
		else if (iMenu == 2) // �����ϱ�
		{
			cout << "������ �����մϴ�." << endl;
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
		// �¿� ������
		HorizontalMovement(player.tPos.x, player.tPos.y);

		// �ϰ� �� ��±���
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

				// ���⼭ �Ʒ��� ���� �ִ��� Ȯ�� -> ������ �� enemy ����
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
		cout << "�÷��� �ð�: " << (float)duration << endl;
		cout << "1���� �÷����ϸ� ������ ����˴ϴ�." << endl;
		cout << "���ѽð��� ���� ������ �ִ��� ���� ������ �����ϼ���." << endl;
		cout << endl;
		cout << "<���۹��>" << endl;
		cout << "�¿� �̵�: �¿� ȭ��ǥ" << endl;
		cout << "�ϰ�: �Ʒ� ȭ��ǥ" << endl;

		// ���ӿ��� ����
		if (curTime - oldTime >= 60000) // 1��
		{
			system("cls");
			cout << "���ѽð� 1���� �� �������ϴ�" << endl;
			cout << "������ �����մϴ�." << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << '\r' << 3 - i << "...";
				Sleep(1000);
			}
			system("cls");
			cout << "����� ŉ���� ������ ���� " << enemyCnt << "�� �Դϴ�." << endl;
			cout << "������ �� ���� ������ ŉ���ϼ���!" << endl;
			return 0;
		}
	}
}