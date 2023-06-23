#pragma once

// Method
void AsciiArt();
void Init();
void Update();
void Render(int playerX, int playerY, int enemyX, int enemyY, bool isEnemy);
void HorizontalMovement(int &x, int &y);

// Property

// 위치.
typedef struct _tagpos
{
	int x;
	int y;
}POS, * PPOS;

// 플레이어
typedef struct _tagplayer
{
	POS tPos;       // 위치.
	POS tNewPos;    // 갱신된 위치.
}PLAYER, * PPLAYER;

// 적
typedef struct _tagenemy
{
	int x;
	int y;
	bool bDie;
}ENEMY, * PENEMY;