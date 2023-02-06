#include <iostream>

using namespace std;

void doSomething()
{
	static int a = 1; 
	// a�� ���� ������ ������� �ʾҴٸ� main���� doSomething�� ȣ���� ������ a�� 1�� �ʱ�ȭ ���Ѽ� 2�� ��µ�
	
	++a;
	cout << a << endl;
}

int main()
{
	doSomething(); // 2 ��� (ó�� doSomething�� ȣ��, ���� ���� a�� �ʱ�ȭ�� ó������ ���������� �̷����) 
	doSomething(); // 3 ���
	doSomething(); // 4 ���
	doSomething(); // 5 ���

	/*
		<����(static) ����>

		- �ʱ�ȭ�� �� ó�� ȣ��� �� �� ���� ��
		- �ʱ�ȭ�� �ʼ�
		- ���� ������ ���� �޸𸮿� ������
		- �߰�ȣ�� �������� ���� �������� ��� ���� (���� ����)
	*/
}