#include <iostream>
#include <time.h>
#include <conio.h>
#include <Windows.h>
#include "Header/console.h"
using namespace std;

int main()
{
	// system("title ���");
	// system("mode con cols=50 lines=50");
	// system("mode con cols=50 lines=50 | title ���");
	// SetConsoleTitle(TEXT("�����"));
	// system("pause");
	// exit(0);

	#pragma region ���� ��� ���
		/*int x, y = 0;

		int oldColor = GetColor() | (GetBgColor() << 4);

		for (x = 0; x <= 15; x++)
		{
			Gotoxy(x, x);

			SetColor(x, 0);
			cout << "console number : ";

			SetColor(oldColor, oldColor >> 4);
			cout << x << endl;
		}*/
	#pragma endregion

	#pragma region ����Ű�� ���Ͽ�

	/*int test;
	int x = 0, y = 0;
	int beforeX = 0, beforeY = 0;
	system("mode con cols=80 lines=40");
	HWND hConsole = GetConsoleWindow();
	SetWindowLong(hConsole, GWL_STYLE, GetWindowLong(hConsole, GWL_STYLE) & WS_MAXIMIZEBOX & ~WS_SIZEBOX);
	RECT rt;
	GetWindowRect(hConsole, &rt);*/
	

	// while (true)
	{
		//if (_kbhit()) // Ű���尡 ���ȴ°� �� ���ȴ°�
		//{
		//	test = _getch();
		//	if (test == 224)
		//	{
		//		test = _getch();
		//		switch (test)
		//		{
		//			case 72:
		//			{
		//				// cout << "����" << endl;
		//				y--;
		//			}
		//			break;
		//			
		//			case 75:
		//			{
		//				// cout << "����" << endl;
		//				x--;
		//			}
		//			break;
		//	
		//			case 77:
		//			{
		//				// cout << "������" << endl;
		//				x++;
		//			}
		//			break;
		//			
		//			case 80:
		//			{
		//				// cout << "�Ʒ���" << endl;
		//				y++;
		//			}
		//			break;
		//		
		//			default:
		//				break;
		//		}
		//	}
	}

	/*while (true)
	{
		BOOL result = Gotoxy(x, y);
		if (result == FALSE)
		{
			x = beforeX;
			y = beforeY;
			continue;
		}
		else
		{
			beforeX = x;
			beforeY = y;
		}

		_putch('a');
		if (GetAsyncKeyState(VK_UP) * 0x8000) y--;
		if (GetAsyncKeyState(VK_DOWN) * 0x8000) y++;
		if (GetAsyncKeyState(VK_LEFT) * 0x8000) x--;
		if (GetAsyncKeyState(VK_RIGHT) * 0x8000) x++;
		Sleep(50);
	}*/

	#pragma endregion

	#pragma region �߸��� �Է�

	//int a;
	//while (true)
	//{
	//	cin >> a;
	//	if (cin.fail())
	//	{
	//		cout << "������" << endl;
	//		cin.clear();
	//		cin.ignore(1024, '\n');
	//	}
	//}

	#pragma endregion

	#pragma region �ð�����
	
	//clock_t OldTime, CurTime;
	//OldTime = clock();

	//while (true)
	//{
	//	CurTime = clock();
	//	if (CurTime - OldTime > 1000)
	//	{
	//		cout << "1�ʰ� ������." << endl;
	//		OldTime = CurTime;
	//	}
	//}

	#pragma endregion


}