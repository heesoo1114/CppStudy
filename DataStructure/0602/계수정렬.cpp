#include <iostream>
#include <queue>

using namespace std;

#pragma region "count" 
int main() {
	int n;
	cin >> n;
	int data = 0;
	int cnt[10001] = { 0 };

	for (int i = 0; i < n; i++) 
	{
		cin >> data;

		cnt[data]++;
	}

	for (int i = 1; i < 10001; i++) 
	{
		while (cnt[i] != 0) 
		{
			cout << i << " ";

			cnt[data]--;
		}
	}
}
#pragma endregion