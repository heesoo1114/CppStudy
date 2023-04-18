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
		// A랑 B를 모은다. (위치를 담고 있음)
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
		// A큐 앞에 있는거 < B큐 앞에 있는거
		if (Adq.front() < Bdq.front())
		{
			Adq.pop_front();
			Bdq.pop_front();
			result++;
		}
		else // A큐 앞에 있는거 > B큐 앞에 있는거
		{
			Bdq.pop_front();
		}
	}
	cout << result << endl;
}
