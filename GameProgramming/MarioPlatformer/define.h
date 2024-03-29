#pragma once
#include <Windows.h>

#define SAFE_DELETE(p) if (p) {delete p; p = nullptr;}

#define WIDTH 50
#define HEIGHT 10

enum class STAGE_BLOCK_TYPE
{
	WALL = '0',
	ROAD = '1',
	START = '2',
	END = '3',
	COIN = '4'
	// 코인, 아이템, 몬스터
};