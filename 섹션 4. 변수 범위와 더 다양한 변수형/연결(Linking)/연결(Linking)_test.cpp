#include <iostream>

using namespace std;

extern int value; // �ٸ� ������ �������� value�� ����ؾ� �ϱ� ������ extern�� ������ �� ����

int abc = 3; // extern �������� ����

extern void doSomething()
{
	value++;
}