#include <iostream>
using namespace std;

// �˰��� �з��� DP�� ���� DP�ε� Ǯ���ϱ�
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int cnt;
	cin >> cnt;

	if (cnt % 2 == 0)
	{
		cout << "CY" << endl;
	}
	else if (cnt % 2 == 1)
	{
		cout << "SK" << endl;
	}
}