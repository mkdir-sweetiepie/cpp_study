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
	i = t; //����
	i = static_cast<int>(t); //����� int( ) ȣ��
	if (t) //�Ϲ��� �׷��� ���
		cout << "implicit call of bool()" << endl;
	if (t == true) //����
		cout << "implicit call of bool()" << endl;
}