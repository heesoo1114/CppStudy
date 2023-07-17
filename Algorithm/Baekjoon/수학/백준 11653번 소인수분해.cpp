#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int num;
	cin >> num;

	for (int i = 2; i <= num; i++)
	{
		while (num % i == 0)
		{
			num /= i;
			cout << i << endl;
		}
	}
}