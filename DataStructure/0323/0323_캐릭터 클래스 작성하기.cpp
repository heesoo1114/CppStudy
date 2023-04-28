#include <iostream>
using namespace std;

class Character
{
public:
	int x;
	int y;
	int hp;

	/*Character(int x, int y, int hp)
	{
		this->x = x;
		this->y = y;
		this->hp = hp;
	}*/

	Character(int x, int y, int hp) : x(x), y(y), hp(hp) {};

	void setX(int x)
	{
		this->x = x;
	}

	void print()
	{
		cout << "x : " << x << " ";
		cout << "y : " << y << " ";
		cout << "hp : " << hp << endl;
	}
};

int main()
{
	cout << "Ä³¸¯ÅÍ 1" << endl;
	Character ch(0, 0, 100);

	for (int i = 0; i < 100; i += 10)
	{
		ch.setX(i);
		ch.print();
	}
}