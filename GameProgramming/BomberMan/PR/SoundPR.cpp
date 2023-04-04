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
	// 파일 가져오기
	// PlaySound(TEXT("Two.wav"), NULL, SND_FILENAME | SND_LOOP | SND_ASYNC);
	
	// 리소스 파일 사용 
	// PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE);
	
	_getch();
}