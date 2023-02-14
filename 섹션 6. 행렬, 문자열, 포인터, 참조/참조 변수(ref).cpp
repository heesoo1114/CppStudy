#include <iostream>

using namespace std;

#pragma region �Լ�

void ToNormal(int num) // �Ϲ������� �Ű������� �޾ƿ�. �̶� num�� �׳� ���ڿ� �־��� num�� ���� ������ ����
{
	num = 10;
	cout << "ToNormal : " << num << endl;
}

void ToRef(int &num) // �Ű������� ������������ �޾ƿ�. �̶� num�� ���ڿ� �־��� num�� ������
{
	num = 10; // (main�� �ִ�) num = 10
	// ToRef������ num�� main������ num�� �����ϰ� �ֱ� ������
	// main������ num�� ������ ��

	// num�� �� ������ ������� const int &num���� ���ָ� ��

	// �迭�� �Ű������� �޾ƿö�� int &arr[�迭�� ũ��] �� �ۼ����ָ� ��
	// �̶� �迭�� ũ��� �� �ʼ��� �ۼ����־ ��

	cout << "ToRef : " << num << endl;
}

#pragma endregion

struct Something
{
	int a;
	int b;
};

struct Something2
{
	Something st;
};

int main()
{
	// ���� ���� ���������� �����ͷ� ������ �Ǿ� ����

	#pragma region �⺻���λ���
	
	int value = 5;

	int* ptr = &value;

	int& ref = value; // ���� ���� (ref�� value�� �����̶�� �����ϸ� ��)
	// ref�� value�� ���� �޸� ���
	// ���� ������ �׻� ����� ���ÿ� �ʱ�ȭ �ʼ�

	ref = 100; // value = 100 (ref�� value�� ����)

	cout << value << endl; // 100 ���

	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	// �� 3���� ���� �ּҰ� ��µ�

	int value2 = 10;
	
	ref = value2; // ���� ��� value -> value2�� ����
	value2 = 199; // value2 = 199

	cout << value2 << endl; // 199 ���

	const int a = 8;
	int& ref1 = a; // (�����ڵ�) ref1�� a�� ���� �ٲ� ���ɼ��� �ֱ� ������ ������
	const int& ref2 = a;

	#pragma endregion

	#pragma region �����Ű�����
	
	int num = 5;

	cout << num << endl; // 5 ���

	ToNormal(num);

	cout << num << endl; // 5 ���

	ToRef(num);

	cout << num << endl; // 10 ���

	#pragma endregion

	Something2 st2;
	st2.st.a = 10;

	int	&refA = st2.st.a;
	refA = 10; // st2.st.a = 10

	// <�����Ϳ� ������ ���� ����� ���>
	int x = 5;
	int* const ptrX = &x;
	int& refX = x;

	*ptrX = 10;
	refX = 10;

	return 0;
}