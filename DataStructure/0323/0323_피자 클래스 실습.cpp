#include <iostream>
using namespace std;

class Pizza
{
public:
	int size;
	Pizza(int size)
	{
		this->size = size;
	}

	// Pizza(int size) : size(size) {};
};

void makeDouble(Pizza &pizza)
{
	pizza.size *= 2;
}

int main()
{
	Pizza pizza(10);
	makeDouble(pizza);
	cout << pizza.size << endl;
}