#include <iostream>
using namespace std;

class class_a 
{
public:
	double _double;
	string _string;
public:
	class_a() {}
	class_a(string str) : _string{ str } { } // _string(str)
	class_a(string str, double dbl) : _string{ str }, _double{ dbl } { }
	// _string(str), _double(dbl)
};
int main()
{
	class_a c1{ };
	class_a c1_1;
	class_a c2{ "ww" };
	class_a c2_1("xx");
	class_a c3{ "yy", 4.4 };
	class_a c3_1("zz", 5.5);
}