#include <iostream>
#include <map>
using namespace std;

map<string, bool, greater<>> m;
string name, state;
int logCount;

int main()
{
	#pragma region FAST
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	#pragma endregion

	cin >> logCount;
	
	for (int i = 0; i < logCount; i++)
	{
		cin >> name >> state;

		if (m.find(name) == m.end())
		{
			m[name] = true;
		}
		else
		{
			if (m[name] == true)
			{
				m[name] = false;
			}
			else if (m[name] == false)
			{
				m[name] = true;
			}
		}
	}

	for (auto iter = m.begin(); iter != m.end(); iter++)
	{
		if (iter->second)
		{
			cout << iter->first << "\n";
		}
	}
}
