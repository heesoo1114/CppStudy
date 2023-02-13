#include <iostream>
#include <cstddef> // nullptr_t

using namespace std;

void doSomething(double *ptr)
{
	cout << "doSomething ptr : " << &ptr << endl; 

	if (ptr != nullptr)
	{
		cout << *ptr << endl;
	}
	else
	{
		cout << "nullptr" << endl;
	}
}

int main()
{
	// nullptr = ������ ���� �ȿ� �ƹ� ���� ���ٴ� �� (������ �ִ� �ּڰ��� ����)
	// �����͸� �ʱ�ȭ�� ���� ������ ������ ���� �� ����
	// �׷��� ������ ���� �ּҰ� ������ nullptr�� �ʱ�ȭ�� �ִ� ���� ����

	double *ptr = nullptr; // ptr�� nullptr�� �ʱ�ȭ�� ��
	// c������ NULL�� ���� (NULL = nullptr)

	doSomething(ptr); // ptr = nullptr
	doSomething(nullptr); // nullptr 

	double d = 123.4;

	doSomething(&d); // d�� �ּڰ� �־���

	ptr = &d; // ptr�� d�� �ּڰ� �־���

	doSomething(ptr); // ptr = &d

	nullptr_t nptr; // nullptr_t ������ nullptr�� �־��� �� ����

	cout << "main ptr : " << &ptr << endl; // main������ ptr�� doSomething�� ���� �ٸ�
	// doSomething���� ptr�� ���簡 �� �� ptr�� �Ѿ�鼭 double d�� ������ �ִ� �޸��� �ּڰ��� �ٽ� ���簡 �Ǳ� ����

	return 0;
}