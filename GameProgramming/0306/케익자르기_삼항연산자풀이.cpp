#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;

	bool cross = false;

	cin >> a >> b >> c >> d;

	cross = (min(a, b) < c && c < max(a, b)) ? ((min(a, b) < d && d < max(a, b)) ? false : true) : ((min(a, b) < d && d < max(a, b)) ? true : false);
	/* 
	   ó���� c�� �������� c�� a�� b ���̿� �ִ��� Ȯ��
	   
	   c�� a�� b ���̿� ������
	   d�� a�� b ���̿� ���� �ʾƾ� cross
	   �׷��� d�� �ȿ� ������ true�� ��ȯ����
	   
	   c�� a�� b ���̿� ���� ������
	   d�� a�� b ���̿� �־�� cross
	   �׷��� d�� �ȿ� ������ false�� ��ȯ����

	   ��� : 
	   c�� �ȿ� �ִ� -> b�� �ȿ� ���� �ʾƾ� cross -> ���� d�� �ȿ� ���� �ʾƾ� true ��ȯ
	   c�� �ȿ� ���� -> b�� �ȿ� �־�� cross -> ���� d�� �ȿ� ������ true ��ȯ
	*/

	if (cross)
		cout << "cross" << endl;
	else
		cout << "not cross" << endl;

	return 0;
}