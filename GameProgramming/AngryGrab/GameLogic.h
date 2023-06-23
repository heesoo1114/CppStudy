#pragma once

// Method
void AsciiArt();
void Init();
void Update();
void Render(int playerX, int playerY, int enemyX, int enemyY, bool isEnemy);
void HorizontalMovement(int &x, int &y);

// Property

// ��ġ.
typedef struct _tagpos
{
	int x;
	int y;
}POS, * PPOS;

// �÷��̾�
typedef struct _tagplayer
{
	POS tPos;       // ��ġ.
	POS tNewPos;    // ���ŵ� ��ġ.
}PLAYER, * PPLAYER;

// ��
typedef struct _tagenemy
{
	int x;
	int y;
	bool bDie;
}ENEMY, * PENEMY;