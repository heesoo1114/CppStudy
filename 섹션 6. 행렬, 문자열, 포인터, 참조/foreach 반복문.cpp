#include <iostream>

using namespace std;

int main()
{
	cout << endl;

	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	for (int number : fibonacci) // �ڷ����� auto�� ��ü ����
	{
		number *= 10;
	}
	// fibonacci �迭�� number�� ����
	// �ܼ��� number�� fibonacci�� ���� ������ ���̱� ������ fibonacci�� ������ ������ ���� 
	// (* 10���� �ұ��ϰ� ������ ����)

	for (int &number : fibonacci) // �ڷ����� auto�� ��ü ����
	{
		number *= 10;
	}
	// number�� ���� ������ ���־��� ������ number�� fibonacci�� �����ϰ� ��
	// ���� * 10�� fibonacci ������ ������ ����

	// ���
	for (int number : fibonacci) // �ڷ����� auto�� ��ü ����
	{
		cout << number << " "; // 0 10 10 20 30 50 80 130 210 340 550 890 ���
	}
	cout << endl;

	return 0;
}