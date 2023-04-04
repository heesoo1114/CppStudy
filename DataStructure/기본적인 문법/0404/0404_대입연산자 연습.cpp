#include <iostream>
using namespace std;

class Box
{
private:
	double length, width, height;

public:
	Box(double l = 10, double w = 10, double h = 10) : length(l), width(w), height(h) {};

	Box& operator = (const Box& b2)
	{
		this->length = b2.length;
		this->width = b2.width;
		this->height = b2.height;
		return *this;
	}

	void display() {
		cout << "(" << length << ", " << width << ", " << height << ")" << endl;
	}
};

int main()
{
	Box b1(30.0, 30.0, 60.0), b2;
	b1.display();
	b2 = b1;
	b2.display();
}