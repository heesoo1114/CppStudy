#include "MapManager.h"
#include "stage.h"

MapManager* MapManager::m_pInst = nullptr;

MapManager::MapManager()
{
	for (int i = 0; i < 3; i++)
	{
		m_pStage[i] = nullptr;
	}
}

MapManager::~MapManager()
{
	for (int i = 0; i < 3; i++)
	{
		SAFE_DELETE(m_pStage[i]);
	}
}

bool MapManager::Init()
{
	char* pStagename[3] = {(char*)"Stage1.txt", (char*)"Stage2.txt", (char*)"Stage3.txt"};
	// ���������� ����
	for (int i = 0; i < 3; i++)
	{
		m_pStage[i] = new Stage;
		if (!m_pStage[i]->Init(pStagename[i]))
		{
			return false;
		}
	}
	return false;
}

void MapManager::Run(int _iCurstage)
{
	m_iCurStage = _iCurstage;
	m_pStage[m_iCurStage]->Render();
}