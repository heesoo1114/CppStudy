#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>;
#include "Sound.h"
#include "Header/resource.h"
#pragma commnet(lib, "winmm.lib");
using namespace std;

int main()
{
	// ���� ��������
	// PlaySound(TEXT("Two.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	
	// ���ҽ� ���� ��� 
	// PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE);
	
	_getch();
}