#include <iostream>
using namespace std;

class Complex
{
private:
	int real, image;
public:
	Complex(int r = 0, int i = 0) : real(r), image(i) { };
	~Complex();
	void show(Complex& b);
	Complex operator-(const Complex& C) const;
	Complex operator-() const;
	int operator [ ](const int& idx) const;
	int& operator [ ](const int& idx);
};

void Complex::show(Complex& b)
{
	cout << b.real << " + " << b.image << "j" << endl;
}

Complex Complex::operator -(const Complex& C) const
{
	return Complex(real - C.real, image - C.image);
}

Complex Complex::operator -() const
{
	return Complex(-real, -image);
}

int Complex::operator[ ](const int& idx) const 
{
	return (idx == 0 ? real : image);
}

int& Complex::operator[ ](const int& idx) 
{
	return (idx == 0 ? real : image);
}

int main()
{
	Complex a(10, 10), b;
	b[0] = 1.0; b[1] = 2.0;
	show(b);

	b = -a; b[0] = a[0];
	show(b);
}