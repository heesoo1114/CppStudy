using namespace std;
#include <iostream>

// �Լ� �ȿ��� �Լ��� ������ �� ����.

int multiplyTwoNumbers(int a, int b) // a = 1, b = 2�� �ʱ�ȭ
{
	int sum = a * b;

	return sum;
}

void printHelloWorld()
{
	cout << "HelloWorld" << endl;

	return; 

	/*
		return�� ������ �ٷ� ��ȯ�� �ؼ� main���� ���ư�
		�� �Լ��� ��������� �� HelloWorld�� ����� �ǰ�
		�Ʒ� �ٿ� �ִ� HelloWorld Again�� ��µ��� �ʴ´�.
	*/

	cout << "HelloWorld Again" << endl;
}

int main()
{
	cout << multiplyTwoNumbers(1, 2) << endl;
	//                         �μ�

	printHelloWorld();

	return 0;
}