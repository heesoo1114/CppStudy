#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int a, b, height, answer;
	cin >> a >> b >> height;

	answer = (height - b) / (a - b);
	if ((height - b) % (a - b))
	{
		answer++;
	}
	cout << answer << "\n";
}