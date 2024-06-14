#include<iostream>
using namespace std;

class Temp 
{
public:
	explicit operator bool() { return true; }
	explicit operator int() { cout << "operator int() Call" << endl; return 10; }
};
int main()
{
	int i; Temp t;
	i = t; //오류
	i = static_cast<int>(t); //명시적 int( ) 호출
	if (t) //암묵적 그러나 허용
		cout << "implicit call of bool()" << endl;
	if (t == true) //오류
		cout << "implicit call of bool()" << endl;
}