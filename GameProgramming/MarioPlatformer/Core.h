#pragma once
// ���� �ʱ�ȭ

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
        //���� �ʱ�ȭ�� Ȱ����~
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