#include <iostream>
using namespace std;

class Point 
{ // �� ���� ǥ���ϴ� Ŭ����
	int x, y; // private ���
public:
	Point(int x = 0, int y = 0) 
	{
		this->x = x;
		this->y = y;
	}
	friend ostream& operator << (ostream& stream, Point a);
};

// << ������ �Լ�
ostream& operator << (ostream& stream, Point a) 
{
	stream << "(" << a.x << "," << a.y << ")";
	return stream;
}
int main() 
{
	Point p(3, 4); // Point ��ü ����
	cout << p << endl; // Point ��ü ȭ�� ���
	Point q(1, 100), r(2, 200); // Point ��ü ����
	cout << q << r << endl; // Point ��ü�� �����Ͽ� ȭ�� ���
}