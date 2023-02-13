#include <iostream>

using namespace std;

const char* getName() 
{
	return "Jack Jack";
}

int main()
{
	const char *name = "Jack Jack";
	const char *name2 = getName();
	const char *name3 = "Jack Kkkk";

	cout << (uintptr_t)name << endl;  // 6365464 ���
	cout << (uintptr_t)name2 << endl; // 6365464 ���
	cout << (uintptr_t)name3 << endl; // 6365466 ���
	// ���ڿ� ��� ������ ������ ���� ������ ���� �޸𸮸� ���

	int int_arr[5] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello, World!";
	const char* name4 = "Jack Jack";

	cout << int_arr << endl;  // 006FF800 ��� (int_arr�� �ּ�)
	cout << char_arr << endl; // Hello, World! ��� (char_arr�� ������ ��)
	cout << name4 << endl; // Jack Jack ��� 
	// char�� �迭, �����͸� cout���� ����ϰ� �Ǹ� �ּڰ��� �ƴ� ���ڿ� ������ �����

	char a = 'Q'; 
	cout << &a << endl; // ó�� Q�� ����� ������ �ڿ��� �̻��� ���� ��µ�
	// cout�� char�� �迭, �����͸� ����� �� "\0"�� ���� ������ ����� �ִµ� 
	// cout�� &a�� char�� �����ͷ� �ν��ϰ� "\0"�� ��ٸ��ٰ� ã�� ���ϴϱ� ��� ����ϴٰ� ������ �߻��� ��

	/*
		' ' : char, int
		" " : const char *, string, char�� �迭 (���ڿ�)
	*/

	return 0;
}