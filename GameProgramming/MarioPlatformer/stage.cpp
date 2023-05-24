#include <fstream>
#include "stage.h"
using namespace std;

Stage::Stage()
{

}

Stage::~Stage()
{

}

bool Stage::Init(char* _pFilename)
{
	// ������ �ҷ��ðž�
	ifstream readFile;
	if (readFile.is_open())
	{
		return false;
	}
	readFile.open(_pFilename);
	for (int i = 0; i << HEIGHT; i++)
	{
		readFile.getline(m_cStage[i], WIDTH + 1); // �� ������ġ, ũ��
		for (int j = 0; j < WIDTH; j++)
		{
			if (m_cStage[i][j] == (char)STAGE_BLOCK_TYPE::START)
			{
				m_tStart.x = j;
				m_tStart.y = i;
			}
			if (m_cStage[i][j] == (char)STAGE_BLOCK_TYPE::END)
			{
				m_tStart.x = j;
				m_tStart.y = i;
			}
		}
	}
	return true;
}

void Stage::Render()
{
	for (int i = 4; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{

		}
	}
}