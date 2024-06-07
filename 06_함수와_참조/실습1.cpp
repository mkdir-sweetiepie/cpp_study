#include <iostream>
using namespace std;

void half(double& a)
{
	a /= 2.0;
}

int main()
{
	double a = 20.0;
	half(a);
	cout << a;
}