#include <iostream>
#include "Core.h"

using namespace std;

int main()
{
	// GameMgr 초기화
	if (Core::GetInst()->Init())
	{
		cout << "Core 초기화 실패" << endl;
		Core::DestroyInst();
		return 0;
	}

	// GameMgr 실행
	Core::GetInst()->Run();
	Core::DestroyInst();
}