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
    // Mgr들 초기화
    if (!MapManager::GetInst()->Init())
    {
        return false;
    }

    // 커서 없애기
    return true;
}

void Core::Run()
{
    int iStage = MenuDraw();
    // 맵 렌더링
    while (true)
    {
        // 맵을 계속 그려줄거야
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