#include <iostream>
using namespace std;

class Time 
{
	int hour, min, sec;
public:
	Time(int h, int m, int s) : hour(h), min(m), sec(s) {};

	bool operator== (Time& t2)
	{
		if (this->hour == t2.hour && this->min == t2.min && this->sec == t2.sec)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator!= (Time& t2) 
	{
		if (this->hour != t2.hour || this->min != t2.min || this->sec != t2.sec)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main() 
{
	Time t1(1, 2, 3), t2(1, 2, 3);
	cout.setf(cout.boolalpha);
	// ���� ������ 1, 0�� �ƴ϶� true, false�� ����ϵ��� �����Ѵ�.
	cout << (t1 == t2) << endl;
	cout << (t1 != t2) << endl;
}