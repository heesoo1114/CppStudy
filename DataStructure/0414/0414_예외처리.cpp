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
	
	cout << "�ѻ���� ���ڴ� " << s / p << "�Դϴ�." << endl;
}

int main()
{
	int pizza_slices = 0;
	int persons = -1;
	int slices_per_person = 0;
	
	cout << "���� �������� �Է��Ͻÿ�: ";
	cin >> pizza_slices;
	cout << "������� �Է��Ͻÿ�: ";
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