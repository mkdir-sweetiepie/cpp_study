#include <iostream>
using namespace std;

class Circle 
{
private:
	int radius;
public:
	Circle(Circle& c); // 복사 생성자 선언
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle(Circle& c) 
{ // 복사 생성자 구현
	this->radius = c.radius;
	cout << "Copy constructor called; radius = " << radius << endl;
}

int main() 
{
	Circle src(30); // src 객체의 보통 생성자 호출
	Circle copy(src); // copy 객체의 복사 생성자 호출
	cout << "Source area = " << src.getArea() << endl;
	cout << "Copy area = " << copy.getArea() << endl;
}