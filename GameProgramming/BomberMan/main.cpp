#include <iostream>
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

	cout << "�����" << endl;
	Gotoxy(10, 10);
	ConsoleCursor(false, 1);
	Sleep(2000);
	SetColor((int)COLOR::RED, (int)COLOR::BLACK);
	cout << "����" << endl;

	int a = 0;
	cin >> a;
}