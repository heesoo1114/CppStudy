#include <iostream>
#include <vector>
using namespace std;

typedef int INT;
typedef int* INTPTR;
// typedef int Add(int a, int b);

typedef int (FUNC_TYPE)(int, int);
// 위에랑 똑같은 역할을 하는 코드: using FUNC_TYPE2 = int(int, int); // modern c++;

int Add(int a, int b)
{
	return a + b;
}

class Functor
{
public:
	void operator()()
	{
		cout << "함수 객체" << endl;
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