#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n)
{
	if (n < 2)
	{
		return false;
	}

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	long long cnt, input;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> input;
		while (true)
		{
			if (isPrime(input))
			{
				cout << input << "\n";
				break;
			}
			else
			{
				input++;
			}
		}
	}
}