#include <iostream>

using namespace std;

#define LIKE_APPLE // �� ���� �ȿ����� ����

int main()
{
#ifdef LIKE_APPLE // ���ǰ� �Ǿ� �ֱ� ������ 10��° �� �ڵ� ����
    cout << "APPLE" << endl;
#endif

#ifndef LIKE_APPLE // ���ǰ� �Ǿ� �ֱ� Eoansdp 14���� �� �ڵ� ����
    cout << "ORANGE" << endl;
#endif
}