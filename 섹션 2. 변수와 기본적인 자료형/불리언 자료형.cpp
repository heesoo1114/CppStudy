#include <iostream>

using namespace std;

bool IsEqual(int a, int b)
{
	bool result = (a == b);
	
	return result;
}

int main()
{
	// bool ������ ���������� ������ �����

	bool b1 = true; // copy initialization
	bool b2(false); // direct initialization
	bool b3{ true }; // uniform initialization
	b3 = false; // assignment

	cout << boolalpha;
	cout << b3 << endl; // false ���

	cout << noboolalpha;
	cout << b1 << endl; // 1 ���

	/*
		boolalpha : 0, 1 �� �ƴ� true, false �� ��µǰ� ����
		noboolalpha :  0, 1�� ����ϰ� ����

		! : not������ (������ : operater)
		!true = false
		!false = true

		bool ���� �Է��� ��
		-> 0, 1 �θ� �Է��ϱ�

		if ������
		���ǿ� 0�� ������ false, 1 �̻��� ���� ������ true
	*/

	return 0;
}