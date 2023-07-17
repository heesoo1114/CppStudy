#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	map<string, string> m;

	int a, b;
	cin >> a >> b;

	for (int i = 0; i < a; i++)
	{
		string site, password;
		cin >> site >> password;
		m[site] = password;
	}

	for (int i = 0; i < b; i++)
	{
		string wantSite;
		cin >> wantSite;
		cout << m[wantSite] << "\n";
	}
}