#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int cnt;
	cin >> cnt;

	int sum = 0;

	char ch;

	for (int i = 0; i < cnt; i++)
	{
		cin >> ch;
		ch -= 48;
		sum += ch;
	}

	cout << sum << endl;
}