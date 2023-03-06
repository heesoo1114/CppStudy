#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;

	bool inC = false;
	bool inD = false;

	cin >> a >> b >> c >> d;

	if (a < c && c < b) 
	{
		inC = true;
	}

	if (a < d && d < c)
	{
		inD = true;
	}

	if (inC == true && inD == true)
	{
		cout << "not cross" << endl;
	}
	else if (inC == false && inD == false)
	{
		cout << "not cross" << endl;
	}
	else
	{
		cout << "cross" << endl;
	}


	return 0;
}