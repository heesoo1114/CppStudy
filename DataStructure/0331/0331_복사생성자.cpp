#include <iostream>
using namespace std;

class Pizza 
{
	int radius;
public:
	Pizza(int r = 0) : radius{ r } { }
	~Pizza() { }
	void setRadius(int r) { radius = r; }
	void print() { cout << "Pizza(" << radius << ")" << endl; }
};

void upgrade(Pizza &p) { p.setRadius(20); }

void upgrade2(Pizza *p) { (*p).setRadius(20); }

int main() 
{
	// ������ �Ű����� ����ϱ�
	Pizza obj(10);
	upgrade(obj);
	obj.print();

	// �ּҸ� �Լ��� �����ϱ�
	Pizza obj2(10);
	upgrade2(&obj2);
	obj.print();
}