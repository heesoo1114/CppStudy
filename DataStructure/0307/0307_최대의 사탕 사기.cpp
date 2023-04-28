#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int money, price;
	int candyCount = 0;

	cin >> money >> price;

	candyCount = money / price;
	money = money % price;

	cout << "구매 가능 개수 : " << candyCount << endl;
	cout << "남은 돈 : " << money << endl;

	return 0;
}