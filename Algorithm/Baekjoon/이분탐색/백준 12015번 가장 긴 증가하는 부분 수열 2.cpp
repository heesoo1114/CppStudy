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

		if (input > v.back()) // 입력이 현재 v의 마지막 값보다 클 때
		{
			v.push_back(input);
			cnt++;
		}
		else
		{
			vector<int>::iterator iter = lower_bound(v.begin(), v.end(), input); // 입력한 input이 처음 나온 위치 반환
			*iter = input; // 덮어씌워줌
		}
	}

	cout << cnt << endl;
}	