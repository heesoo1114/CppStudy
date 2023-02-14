#include <iostream>

using namespace std;

// ���� ������ �ƴϾ��ٸ� ���� ���ڸ� ref�� ����
// ���� �����̹Ƿ� �������� ref�� ������ �޸𸮿� �����ϰ� ��
// -> ���� ���� �������� ���� ���� ���
void doSomething(const int &ref) 
{
	cout << ref << endl;
}

int main()
{
	#pragma region �پ��Ѱ��

	int x = 5;
	const int& ref = x; // ���� ������ �� ������ �о���� �� ������

	const int x1 = 5;
	int& ref1 = x1; // (�����ڵ�) ref1�� ����� x1�� ���� ������ ���ɼ��� �ֱ� ������ ������  

	const int x2 = 5;
	const int& ref2 = x2; // ref2�� ����� x2�� ���� ������ ���ɼ��� �����Ƿ� ������ ����

	const int x3 = 5;
	const int& ref3 = x3; 
	const int& ref4 = ref3;

	int x4 = 5;
	int& ref5 = x4;
	const int& ref6 = ref5; // ref6�� �� ���� �Ұ���, �׷��� ref5�� x4�� �� ���� ����

	#pragma endregion

	int &refA = 5; // (�����ڵ�) �Ϲ� ���� ������ L-Value ������ ���� ����
	const int &refB = 5; // (����) ��� ���� ������ L-Value�� R-Value ��� ���� ����
	// !!(const ���� ������ �ִ� ������)!!

	int num = 3;

	doSomething(refB);	// 5 ���
	doSomething(num);	// 3 ���
	doSomething(3);		// 3 ���
	doSomething(4 + 6); // 10 ���
	doSomething(4 * 6); // 24 ���

	return 0;
}