#pragma once
#include "define.h"
class Stage;
class MapManager
{
private:
	MapManager();
	~MapManager();
private:
	static MapManager* m_pInst;
public:
	static MapManager* GetInst()
	{
		if (m_pInst == nullptr)
			m_pInst = new MapManager;
		return m_pInst;
	}
	static void DestroyInst() { SAFE_DELETE(m_pInst); }
private:
	Stage* m_pStage[3];
	int    m_iCurStage; // 현재 스테이지
public:
	Stage* GetStage() { return m_pStage[m_iCurStage]; }
public:
	bool Init();
	void Run(int _iCurStage);
};