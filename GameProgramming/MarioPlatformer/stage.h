#pragma once
#include "define.h"
class Stage
{
public:
	Stage();
	~Stage();

private:
	char m_cStage[HEIGHT][WIDTH];
	POINT m_tStart;
	POINT m_tEnd;
	
public:
	POINT GetStart()
	{
		return m_tStart;
	}
	POINT GetEnd()
	{
		return m_tEnd;
	}

	char GetBlock(int _x, int _y)
	{
		return m_cStage[_y][_x];
	}

public:
	bool Init(char* _pFilename);
	void Render();
};
