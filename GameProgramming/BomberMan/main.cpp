#include <iostream>
#include <Windows.h>
#include "Header/console.h"
using namespace std;

int main()
{
	// system("title Èñ¼ö");
	// system("mode con cols=50 lines=50");
	// system("mode con cols=50 lines=50 | title Èñ¼ö");
	// SetConsoleTitle(TEXT("À±Èñ¼ö"));
	// system("pause");
	// exit(0);

	cout << "À±Èñ¼ö" << endl;
	Gotoxy(10, 10);
	ConsoleCursor(false, 1);
	Sleep(2000);
	SetColor((int)COLOR::RED, (int)COLOR::BLACK);
	cout << "ÁÁ¾Æ" << endl;

	int a = 0;
	cin >> a;
}