#include <iostream>
using namespace std;

class Complex {
public:
	Complex(double r = 0.0, double i = 0.0) : real{ r }, imag{ i } { }
	void print() {
		cout << real << " + " << imag << "i" << endl;
	}

	friend Complex add(Complex cp1, Complex cp2);

private:
	double real, imag;
};

Complex add(Complex cp1, Complex cp2)
{
	return Complex(cp1.real + cp2.real, cp1.imag + cp2.imag);
}

int main() {
	Complex c1(1, 2), c2(3, 4);
	Complex c3 = add(c1, c2);
	c3.print();
}