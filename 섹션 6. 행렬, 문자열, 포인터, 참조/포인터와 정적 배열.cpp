#include <iostream>

using namespace std;

struct Mystruct
{
	int array[5] = { 9, 7, 5, 3, 1 };
};

void DoSomething(Mystruct myStr)
{
	cout << sizeof((myStr).array) << endl; // MyStruct�� ��� ���� array�� ũ�� 20 ���
}

void PrintArrary(int array[5]) // int array[5] = int *array (��������)
{
	cout << *array << endl; // 9 ��� 
	*array = 100;
}

int main()
{
	// �迭 �̸��� ������ �ʴ� �����Ϳ� �������� 

	int array1[5] = { 9, 7, 5, 3, 1 };

	cout << array1 << endl; // �迭�� ù ��° ������ �ּ� ��� (�����Ϳ� ��������)
	cout << &array1[0] << endl; // �迭�� ù ��° ������ �ּ� ���
	// array1 = &arrat1[0]

	cout << *array1 << endl; // 9 ���
	// array1�� �迭�� ù ��° ������ �ּҸ� ������ ����
	// ���� array1�� �������ϸ� 9�� ����

	char name[] = "heesoo";

	cout << *name << endl; // h ���
	// name�� �迭�� ù ��° ������ �ּҸ� ������ ����
	// ���� name�� �������ϸ� h�� ����

	int *ptr = array1;
	cout << ptr << endl; // array1�� �ּڰ� ���
	cout << *ptr << endl; // 9 ���

	PrintArrary(array1); // array1�� �ּڰ� �ѱ�
	PrintArrary(ptr); // ptr = array1�� �ּڰ�

	cout << *array1 << endl; // 100 ���

	Mystruct myStr;
	DoSomething(myStr);
	// ����ü�� �ִ� �迭�� �����ͷ� ��ȯ���� �ʰ�
	// �迭�� �״�� �Ѿ

	return 0;
}