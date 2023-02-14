#include <iostream>

using namespace std;

int main()
{
	#pragma region �⺻���μ���
	
	// <��� ���>
	const int a = 5;
	const int* ptrA = &a; // ����� ������ �ּҸ� �־��ٶ�� ������ ���� ���� ����� ����� ��
	// �ֳ��ϸ� �Ϲ� ������ ������ �������� a�� ���� �ٲ� �� ���ɼ��� �ֱ� ������ ������ ����� ����� ��

	*ptrA = 7; // (�����ڵ�) ptrA�� ����Ű�� �ִ� a�� ����̱� ������ ���� ������ �� ����

	cout << *ptrA << endl; // 5 ���


	// <int, ���>
	int b = 7;
	const int* ptrB = &b;

	*ptrB = 8; // (�����ڵ�) ptrB�� ����Ű�� �ִ� b�� ����� �ƴ����� ������ ������ ����̱� ������ �������� �� ���� �Ұ���


	// <�Ϲ� �����Ϳ� ��� ������ �Ҵ�>
	int a2 = 3;
	int b2 = 7;

	int* ptr1;
	const int* ptr2 = &a2;

	ptr1 = ptr2;  // (�����ڵ�) �Ϲ� �����Ϳ� ��� �����ʹ� �Ҵ��� �� �� ����
	// �Ϲ� ������ ������ �������� a�� ���� ������ �� �ֱ� ������

	#pragma endregion

	#pragma region �������������
	
	int value = 5;
	int value2 = 8;

	const int* ptrX = &value; // �������� �� ���� �Ұ���, ptrX�� �ּڰ� ���� ����
	*ptrX = 7; // (�����ڵ�)
	ptrX = &value2; // (����)

	int* const ptrY = &value; // �������� �� ���� ����, ptrY�� �ּڰ� ���� �Ұ���
	*ptrY = 7; // (����)
	ptrY = &value2; // (�����ڵ�)

	const int* const ptrZ = &value; // �������� �� ���� �Ұ���, ptrZ�� �ּڰ� ���� �Ұ���
	*ptrZ = 7; // (�����ڵ�)
	ptrZ = &value2; // (�����ڵ�)

	#pragma endregion

	return 0;
}