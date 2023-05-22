#pragma once
// 늦은 초기화

#include "define.h"
class Core
{
private:
    Core();
private:
    static Core* m_pInst;
public:
    static Core* GetInst()
    {
        //늦은 초기화를 활용한~
        if (m_pInst == nullptr)
        {
            m_pInst = new Core;
        }
        return m_pInst;
    }
    static void DestroyInst()
    {
        /*if (m_pInst)
        {
            delete m_pInst;
            m_pInst = nullptr;
        }*/
        SAFE_DELETE(m_pInst);
    }
public:
    bool Init();
    void Run();
    int MenuDraw();
};