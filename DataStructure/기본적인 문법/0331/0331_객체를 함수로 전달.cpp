#include <iostream>
using namespace std;

class Complex
{
public:
	double real, imag;
	Complex(double r = 0, double i = 0) : real{ r }, imag{ i } {};
	void print() 
	{
		cout << real << " + " << imag << "i " << endl;
	}
};

Complex add(Complex a, Complex b)
{
	Complex result{a.real + b.real, a.imag + b.imag};
	return result;
}

Complex plusAdd(const Complex &a, const Complex &b)
{
	Complex result{ a.real + b.real, a.imag + b.imag };
	return result;
}

int main()
{
	Complex c1{ 1,2 }, c2{ 3,4 };
	
	Complex t;
	t = add(c1, c2);
	t.print();
	
	Complex t2;
	t2 = plusAdd(c1, c2);
	t2.print();
}
