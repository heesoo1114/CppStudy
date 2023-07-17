#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int cnt = 0;

	int num;
	cin >> num;

	int firstNum = num;

	while (true)
	{
		int newNum = (num / 10) + (num % 10);
		num = ((num % 10) * 10) + (newNum % 10);
		cnt++;

		if (num == firstNum)
		{
			cout << cnt << endl;
			break;
		}
	}
}