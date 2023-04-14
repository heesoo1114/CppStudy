#include <iostream>
using namespace std;

template <class T>
class Circle 
{
public:
	T x, y, r;
	static T PI;
	// constexpr static T PI;

	Circle(T x, T y, T r) : x(x), y(y), r(r) { };

	T getArea()
	{
		T temp;
		temp = r * r * PI;
		return temp;
	}
};

template<class T>
T Circle<T>::PI = 3.14;

int main()
{
	Circle<int> c1(1, 1, 5);
	Circle<double> c2(1.5, 1.5, 5.0);

	cout << c1.getArea() << endl;
	cout << c2.getArea() << endl;
}