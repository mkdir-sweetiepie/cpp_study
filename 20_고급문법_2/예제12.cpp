#include<iostream>
using namespace std;

class Int 
{
	int data;
public:
	Int(int data) : data(data) { }
	Int(const Int& i) : data(i.data) { }
	operator int() { return data; }
};

int main() {
	Int x = 3;
	int a = x + 4; //�Ϲ������� int( ) ȣ��
	x = a * 2 + x + 4; //�Ϲ������� int( ) ȣ��
	cout << x << endl;
}