#include <iostream>
using namespace std;

class Box
{
	double length;
	double width;
	double height;

public:
	Box(double l = 1, double w = 1, double h = 1) : length{ l }, width{ w }, height{ h } { }
	
	double getVolume() 
	{
		return length * width * height;
	}

	Box operator + (const Box& box2)
	{
		Box temp;
		temp.length = this->length + box2.length;
		temp.width = this->width + box2.width;
		temp.height = this->height + box2.height;
		return temp;
	}

	bool operator== (const Box& box2)
	{
		if (this->length != box2.length || this->height != box2.height || this->width != box2.width)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator< (Box& box2)
	{
		double tempBox1 = this->getVolume();
		double tempBox2 = box2.getVolume();

		if (tempBox1 < tempBox2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void print()
	{
		cout << length << " " << width << " " << height << endl;
	}
};

int main()
{
	Box a(10, 10, 10), b(20, 20, 20), c;
	c = a + b;

	cout << (a == b) << endl; // 다르니 0 출력
	cout << (a < b) << endl;  // 참이니 1 출력

	c.print(); // 30 30 30 출력
}