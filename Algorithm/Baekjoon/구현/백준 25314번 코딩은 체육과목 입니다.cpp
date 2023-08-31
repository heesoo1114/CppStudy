#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string temp = "";

	int n;
	cin >> n;
	n /= 4;

	for (int i = 0; i < n; i++)
		temp += "long ";

	cout << temp << "int" << "\n";
}