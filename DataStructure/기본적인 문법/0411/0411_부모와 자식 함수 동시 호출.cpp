#include <iostream>
using namespace std;

class CParent
{
public:
	void Func()
	{
		cout << "CParent::Func" << endl;
	}
};

class CTest : public CParent
{
public:
	void Func()
	{
		cout << "CTest::Func" << endl;
	}
};

int main()
{
	CTest t;
	t.Func();
	t.CParent::Func();
}