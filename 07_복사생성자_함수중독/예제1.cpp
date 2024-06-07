#include <iostream>
using namespace std;

class Circle 
{
private:
	int radius;
public:
	Circle(Circle& c); // ���� ������ ����
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle(Circle& c) 
{ // ���� ������ ����
	this->radius = c.radius;
	cout << "Copy constructor called; radius = " << radius << endl;
}

int main() 
{
	Circle src(30); // src ��ü�� ���� ������ ȣ��
	Circle copy(src); // copy ��ü�� ���� ������ ȣ��
	cout << "Source area = " << src.getArea() << endl;
	cout << "Copy area = " << copy.getArea() << endl;
}