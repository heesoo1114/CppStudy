#include <iostream>
#include "Core.h"

using namespace std;

int main()
{
	// GameMgr �ʱ�ȭ
	if (Core::GetInst()->Init())
	{
		cout << "Core �ʱ�ȭ ����" << endl;
		Core::DestroyInst();
		return 0;
	}

	// GameMgr ����
	Core::GetInst()->Run();
	Core::DestroyInst();
}