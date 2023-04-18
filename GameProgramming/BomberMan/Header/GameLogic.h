#pragma once

const int HORIZON = 21;
const int VERTICAL = 20;

/*
	 ����: ���ں��� ������ ����
		  �޸𸮿� �ö��� �ʴ´�.
	 ����: �޸𸮿� �ö��� �ʴ´�.

	 #define HORIZON 20
	 #define VERTICAL 20

	 ���� 4����
	 1. ��������
	 2. ���� ����
	 3. �������� (static)
	 4. �ܺκ��� (extern)

	 struct
	 - �ϳ��� �ڷ���
	 - c ��Ÿ�� ���

	 typeDef
	 - 
*/

// ��ġ
typedef struct _tagpos
{
	int x;
	int y;
}POS, *PPOS;

// �÷��̾�
typedef struct _tagplayer
{
	POS tPos;		 // ��ġ
	POS tNewPos;	 // ���ŵ� ��ġ
	int iBombPower;	 // ��ź �Ŀ�
	int iBombCount;	 // ��ź ����
	bool bSlime;	 // ������
	bool bWallPush;	 // ��Ǫ��
	bool bPushOnOff; // �� �б� ����ġ
}PLAYER, *PPLAYER;

// ��ź
typedef struct _tagboom
{
	int x;
	int y;
	int life;
	
}BOOM, *PBOOM;

#include <vector>

void AsciiArt();
void Init(char _cMaze[VERTICAL][HORIZON], PPLAYER _pPlayer, PPOS _pStartpos, PPOS _pEndpos);
void Update(char _cMaze[VERTICAL][HORIZON], PPLAYER _pPlayer, vector<BOOM> _vecBomb, vector<POS> _boomEffect);
void Render(char _cMaze[VERTICAL][HORIZON], PPLAYER _pPlayer, vector<POS> _boomEffect);

enum class MAYTYPE
{
	WALL = '0',
	ROAD = '1',
	START = '2',
	END = '3',
};