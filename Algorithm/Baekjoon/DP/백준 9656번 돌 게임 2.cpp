#include <iostream>
using namespace std;

// �˰��� �з��� DP�� ���� DP�ε� Ǯ���ϱ�
int main()
{
	int cnt;
	cin >> cnt;

	if (cnt % 2 == 1)
	{
		cout << "CY" << endl;
	}
	else if (cnt % 2 == 0)
	{
		cout << "SK" << endl;
	}
}