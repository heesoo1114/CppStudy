#include <iostream>

using namespace std;

int main()
{
	int value = 5;
	int *ptr = &value;
	int	**ptrptr = &ptr; // ���� ������ (�������� ������)

	cout << ptr << " " << *ptr << " " << &ptr << " " << endl; 
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << " " << endl;
	cout << **ptrptr << endl;

	/*
		00CFF838 5 00CFF834 ���
		value�� �ּ�, ptr ������(value�� ��), ptr�� �ּ�

		00CFF834 00CFF838 00CFF830 ��� 
		ptr�� �ּ�, ptrptr�� ������(ptr�� ����ִ� �ּ�), ptrptr�� �ּ�

		5 ���
		ptr�� ���� ������(ptr�� ����ִ� �ּҸ� ������, value�� �ּҸ� �� ã�ư��� value�� ���� ���)
	*/

	return 0;
}