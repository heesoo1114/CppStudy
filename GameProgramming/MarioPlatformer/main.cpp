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

	}

	// GameMgr ����
	Core::GetInst()->Run();
	Core::DestroyInst();
}