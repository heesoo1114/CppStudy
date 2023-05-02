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
	bool bDie;
	
}BOOM, *PBOOM;

#include <vector> 
// �� ������Ϸ� include �� vector�� ����Ѵٴ� ���� �˰� ���־�� ��
// �츮�� using namespace std; �� ����ϴ� ���� ����ȭ�Ͽ��� ����
// ���� �Ʒ��� vector<BOOM> -> std::vector<BOOM> ���� ����
// !! ������Ͽ��� using namespace�� ������� �ʴ� ���� ���� 

void AsciiArt();
void Init(char _cMaze[VERTICAL][HORIZON], PPLAYER _pPlayer, PPOS _pStartpos, PPOS _pEndpos);
void Update(char _cMaze[VERTICAL][HORIZON], PPLAYER _pPlayer, std::vector<BOOM>& _vecBomb, std::vector<POS>& _boomEffect);
void Render(char _cMaze[VERTICAL][HORIZON], PPLAYER _pPlayer, std::vector<POS>& _boomEffect);
void BombCreate(char _cMaze[VERTICAL][HORIZON], PPLAYER _pPlayer, std::vector<BOOM>& _vecBomb);
void Fire(char _cMaze[VERTICAL][HORIZON], PPLAYER _pPlayer, POS _boompos, std::vector<POS>& _boomEffect);

enum class MAPTYPE
{
	WALL = '0',
	ROAD = '1',
	START = '2',
	END = '3',
	WATERBOMB = 'b',
	TWINKLE = 'p',
	POWER = '4',
	SLIME = '5',
	PUSH = '6'
};