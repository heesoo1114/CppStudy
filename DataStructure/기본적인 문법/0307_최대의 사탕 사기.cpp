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

	cout << "���� ���� ���� : " << candyCount << endl;
	cout << "���� �� : " << money << endl;

	return 0;
}