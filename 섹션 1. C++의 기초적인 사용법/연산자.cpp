using namespace std;
#include <iostream>

int main()
{
	int x = 2; 
	/*
		�����̰�, 2�� ���ͷ�(literal)
		= : ���� ������(Assignment)
	*/ 

	cout << x + 2 << endl;
	/*
		X + 2 : ǥ����
		x, 2 : ���ͷ�, �ǿ�����
		+ : ������
	*/

	int y = (x > 0) ? 1 : 2;
	/*
		19��° �� : ���׿�����
		x > 0�� true�̸� y = 1, false�̸� y = 2
	*/

	/*
		���� : �ǿ����� 1��,
		���� : �ǿ����� 2��,
		���� : �ǿ����� 3��
	*/

	return 0;
}