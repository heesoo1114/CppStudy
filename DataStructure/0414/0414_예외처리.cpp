#include <iostream>
using namespace std;

void dividePizza(int s, int p)
{
	if (p <= 0)
	{
		throw p;
	}
	if (s < 0)
	{
		throw s;
	}
	
	cout << "한사람당 피자는 " << s / p << "입니다." << endl;
}

int main()
{
	int pizza_slices = 0;
	int persons = -1;
	int slices_per_person = 0;
	
	cout << "피자 조각수를 입력하시오: ";
	cin >> pizza_slices;
	cout << "사람수를 입력하시오: ";
	cin >> persons;
	
	try
	{
		dividePizza(pizza_slices, persons);
	}
	catch (int e)
	{
		cout << e << endl;
	}
	
}