#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if (min(a, b) < c && c < max(a, b)) // c�� �ȿ� ���� ��
	{
		if ((min(a, b) < d && d < max(a, b))) // d�� �ȿ� ���� ��
		{
			cout << "not cross" << endl;
		}
		else // d�� �ۿ� ���� ��
		{
			cout << "cross" << endl;
		}
	}
	else // c�� �ۿ� ����
	{
		if ((min(a, b) < d && d < max(a, b))) // d�� �ȿ� ���� ��
		{
			cout << "cross" << endl;
		}
		else // d�� �ۿ� ���� ��
		{
			cout << "not cross" << endl;
		}
	}

	return 0;
}