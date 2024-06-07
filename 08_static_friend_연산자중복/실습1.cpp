#include <iostream>
using namespace std;

class Point 
{
	int x;
	int y;
public:
	Point(int x1 = 0, int y1 = 0) 
	{
		x = x1; y = y1;
	}
	void show() 
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
	Point operator +(const Point& b);
};
Point Point::operator +(const Point& b)
{
	Point out;
	out.x = x + b.x;
	out.y = y + b.y;
	return out;
}

int main()
{
	Point a(3, 5), b(2, 0), c;
	c = a + b;
	c.show();
}