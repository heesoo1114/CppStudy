#include<iostream>
#include<Windows.h>
using namespace std;

void fontsize(UINT _weight, UINT _sizex, UINT _sizey)
{
	static CONSOLE_FONT_INFOEX font;
	font.cbSize = sizeof(font);
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(hout, false, &font);
	font.FontWeight = _weight;
	font.dwFontSize.X = _sizex;
	font.dwFontSize.Y = _sizey;
	SetCurrentConsoleFontEx(hout, false, &font);
}

//int main()
//{
//	cout << "테스트 전입니다." << endl;
//	fontsize(FW_BOLD, 100, 100);
//	cout << "테스트 후입니다" << endl;
//}