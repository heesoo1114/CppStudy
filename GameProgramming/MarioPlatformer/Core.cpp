#include<iostream>
#include<Windows.h>
#include "Core.h"
#include "MapManager.h"
using namespace std;

Core* Core::m_pInst = nullptr;
Core::Core()
{

}

bool Core::Init()
{
    // Mgr�� �ʱ�ȭ
    if (!MapManager::GetInst()->Init())
    {
        return false;
    }

    // Ŀ�� ���ֱ�
    return true;
}

void Core::Run()
{
    int iStage = MenuDraw();
    // �� ������
    while (true)
    {
        // ���� ��� �׷��ٰž�
        MapManager::GetInst()->Run(iStage-1);
    }
}

int Core::MenuDraw()
{
    cout << "1. Stage1 " << endl;
    cout << "2. Stage2 " << endl;
    cout << "3. Stage3 " << endl;
    cout << "4. Exit " << endl;
    int iInput;
    cin >> iInput;
    return iInput;
}