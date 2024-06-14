#include<iostream>
using namespace std;

class Temp {
public:
	operator bool() { return true; }
	operator int() { cout << "operator int() Call" << endl; return 10; }
	operator float() { cout << "operator float() Call" << endl; return 20.f; }
};
int main()
{
	int i; float f; Temp t;
	i = t; //암묵적으로 int( ) 호출
	f = t; //암묵적으로 float( ) 호출
	if (t)
		cout << "implicit call of bool()" << endl;
}