#include <iostream>
using namespace std;

class Circle
{
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle() { }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	void show()
	{
		cout << "radius = "<< radius<< endl; 
	}
};

Circle::Circle() : Circle(1) { }
Circle::Circle(int r)
{
	radius = r;
	cout << "Consructor : " << radius << endl;
}


void increaseBy(Circle& x, Circle& y)
{
	x.setRadius(x.getRadius() +
		y.getRadius());
}

int main()
{
	Circle x(10), y(5);
	increaseBy(x, y);
	x.show();
}