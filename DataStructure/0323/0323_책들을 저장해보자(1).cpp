#include <iostream>
using namespace std;

class Book
{
public:
	string info;
	int price;

	/*Book(string info, int price)
	{
		this->info = info;
		this->price = price;
	}*/

	Book(string info, int price) : info(info), price(price) {};

 	void print()
	{
		cout << info << " " << price << endl;
	}
};

int main()
{
	Book books[2] =
	{
		Book("��", 2000),
		Book("���", 30000)
	};

	for (Book& b : books)
	{
		b.print();
	}
}