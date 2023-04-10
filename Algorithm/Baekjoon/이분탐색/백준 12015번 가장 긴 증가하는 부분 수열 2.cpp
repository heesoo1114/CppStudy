#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	#pragma region FAST
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	#pragma endregion

	vector<int> v;
	int cnt = 0;

	int N;
	cin >> N;

	v.push_back(-1);

	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;

		if (input > v.back()) // �Է��� ���� v�� ������ ������ Ŭ ��
		{
			v.push_back(input);
			cnt++;
		}
		else
		{
			vector<int>::iterator iter = lower_bound(v.begin(), v.end(), input); // �Է��� input�� ó�� ���� ��ġ ��ȯ
			*iter = input; // �������
		}
	}

	cout << cnt << endl;
}	