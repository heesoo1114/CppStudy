#include <iostream>

using namespace std;

int main()
{
	// conditional operator 
	// c, c++�� ���Ǻ� �����ڿ� ���� �����ڰ� �ϳ� �ۿ� ����
	// ���� �����ڴ� ����� ����� �� ����

	bool onSale = true;
	int price = 0;

	price = (onSale == true) ? 10 : 100;
	// onSale�� true�̱� ������ price�� 10 �־���

	/*
		���ǽ� ? A : B
		
		���ǽ��� true�̸� A, false�̸� B
		A�� B�� ������ Ÿ���� ���ߴ� ���� ����
	*/

	cout << (x % 2 == 0) ? "even" : "odd" << endl; // �����ڵ�
	// ���� �����ڰ� ����Ʈ ���� ������(<<) ���� �켱������ ����
	// �׷��� cout << (x % 2 == 0) ���� �Ǿ������ ������ ������ �߻�

	return 0;
}