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
	i = t; //�Ϲ������� int( ) ȣ��
	f = t; //�Ϲ������� float( ) ȣ��
	if (t)
		cout << "implicit call of bool()" << endl;
}