#include <iostream>
#include <random>

using namespace std;

int main()
{
	random_device seed; // seed�� ���������� (�ڵ����� ��� �ٲ�� ����)

	mt19937_64 mersenne(seed()); // ���� ���� �˰��� (mersenne : �˰��� �̸�)
	uniform_int_distribution<> dice(1, 6); // 1 ~ 6 ������ ���� �������� ���� (�� ���ڰ� ���� Ȯ���� ����)

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl; // ���� Ȯ���� ���� ����

	return 0;
}