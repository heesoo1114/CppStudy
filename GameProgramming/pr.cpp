#include <iostream>
#include <vector>
using namespace std;

typedef int INT;
typedef int* INTPTR;
// typedef int Add(int a, int b);

typedef int (FUNC_TYPE)(int, int);
// ������ �Ȱ��� ������ �ϴ� �ڵ�: using FUNC_TYPE2 = int(int, int); // modern c++;

int Add(int a, int b)
{
	return a + b;
}

class Functor
{
public:
	void operator()()
	{
		cout << "�Լ� ��ü" << endl;
		cout << m_val << endl;
	}
public:
	int m_val = 0;
};

int main()
{
	int a;
	float b;
	FUNC_TYPE* fn;
	fn = Add;
	int val = fn(1, 2);
	int val2 = (*fn)(1, 2);
	cout << Add << endl;
	cout << val << endl;
	cout << val2 << endl;
	
	// t(1, 2);
	
	int ab = 0;
}