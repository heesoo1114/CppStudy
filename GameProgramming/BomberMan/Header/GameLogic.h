#pragma once

const int HORIZON = 21;
const int VERTICAL = 20;

/*
	 장점: 숫자보다 가독성 좋음
		  메모리에 올라가지 않는다.
	 단점: 메모리에 올라가지 않는다.

	 #define HORIZON 20
	 #define VERTICAL 20

	 변수 4가지
	 1. 지역변수
	 2. 전역 변수
	 3. 정적변수 (static)
	 4. 외부변수 (extern)

	 struct
	 - 하나의 자료형
	 - c 스타일 사용

	 typeDef
	 - 
*/

// 위치
typedef struct _tagpos
{
	int x;
	int y;
}POS, *PPOS;

// 플레이어
typedef struct _tagplayer
{
	POS tPos;		 // 위치
	POS tNewPos;	 // 갱신된 위치
	int iBombPower;	 // 폭탄 파워
	int iBombCount;	 // 폭탄 개수
	bool bSlime;	 // 슬라임
	bool bWallPush;	 // 벽푸쉬
	bool bPushOnOff; // 벽 밀기 스위치
}PLAYER, *PPLAYER;

// 폭탄
typedef struct _tagboom
{
	int x;
	int y;
	int life;
	bool bDie;
	
}BOOM, *PBOOM;

#include <vector> 
// 이 헤더파일로 include 된 vector를 사용한다는 것을 알게 해주어야 함
// 우리가 using namespace std; 를 사용하는 것을 습관화하였기 때문
// 따라서 아래에 vector<BOOM> -> std::vector<BOOM> 으로 수정
// !! 헤더파일에서 using namespace는 사용하지 않는 것을 권장 

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