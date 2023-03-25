#include<iostream>
using namespace std;

int main()
{
	int h = 0, m, s;
	
	int input;
	cin >> input;

	m = input / 60;

	if (m >= 60)
	{
		h = m / 60;
		m %= 60;
	}

	s = input % 60;

	cout << h << " " << m << " " << s;
}