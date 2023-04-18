#include <iostream>
#include <deque>
#include <string>
using namespace std;

deque<int> Adq;
deque<int> Bdq;

int result;
string str;

int main()
{
	#pragma region FAST
		ios::sync_with_stdio(false);
		cin.tie(NULL); cout.tie(NULL);
	#pragma endregion

	cin >> str; // ABCBA
	for (int i = 0; i < str.length(); i++)
	{
		// A�� B�� ������. (��ġ�� ��� ����)
		if (str[i] == 'A')
		{
			Adq.push_back(i);
		}
		if (str[i] == 'B')
		{
			Bdq.push_back(i);
		}
		if (str[i] == 'C')
		{
			if (!Bdq.empty() && Bdq.front() < i)
			{
				Bdq.pop_front();
				result++;
			}
		}
	}

	while (!Adq.empty() && !Bdq.empty())
	{
		// Ať �տ� �ִ°� < Bť �տ� �ִ°�
		if (Adq.front() < Bdq.front())
		{
			Adq.pop_front();
			Bdq.pop_front();
			result++;
		}
		else // Ať �տ� �ִ°� > Bť �տ� �ִ°�
		{
			Bdq.pop_front();
		}
	}
	cout << result << endl;
}
