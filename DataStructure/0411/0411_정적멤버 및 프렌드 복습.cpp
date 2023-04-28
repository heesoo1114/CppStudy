#include <iostream>
using namespace std;

class Box 
{
private:
	double length;
	double width;
	double height;

	static int count;

	friend Box operator+(const Box& box1, const Box& box2);
	friend bool operator==(Box& box1, Box& box2);
	friend bool operator<(Box& box1, Box& box2);

public:
	Box(double l = 0, double w = 0, double h = 0)
	{
		this->length = l;
		this->width = w;
		this->height = h;
		count++;
	}

	int getCount()
	{
		return count;
	}

	double Volume() 
	{
		return length * width * height;
	}

	void print()
	{
		cout << this->length << " " << this->width << " " << this->height << endl;
	}
};

int Box::count = 0;

Box operator+(const Box& box1, const Box& box2)
{
	return Box(box1.length + box2.length, box1.width + box2.width, box1.height + box2.height);
}

bool operator==(Box& box1, Box& box2)
{
	return (box1.Volume() == box2.Volume());
}

bool operator<(Box& box1, Box& box2)
{
	return (box1.Volume() < box2.Volume());
}

int main(void) 
{
	Box Box1(1.0, 2.0, 3.0);
	Box Box2(1.0, 2.0, 5.0);
	
	cout << "전체 객체 수: " << endl;
	cout << Box1.getCount() << endl; // 2 출력
	cout << Box2.getCount() << endl; // 2 출력

	Box temp = Box1 + Box2;
	temp.print();

	bool isSame = (Box1 == Box2);
	cout << isSame << endl;

	bool isBig = (Box1 < Box2);
	cout << boolalpha << isBig << endl;

	return 0;
}