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
	friend istream& operator >> (istream& ins, Point& a); // friend ����
	friend ostream& operator << (ostream& stream, Point a); // friend ����
};

istream& operator >> (istream& ins, Point& a) { // >> ������ �Լ�
	cout << "x ��ǥ>>";
	ins >> a.x;
	cout << "y ��ǥ>>";
	ins >> a.y;
	return ins;
}
ostream& operator << (ostream& stream, Point a) { // << ������ �Լ�
	stream << "(" << a.x << "," << a.y << ")";
	return stream;
}
int main() {
	Point p; // Point ��ü ����
	cin >> p; // >> ������ ȣ���Ͽ� x ��ǥ�� y ��ǥ�� Ű����� �о� ��ü p �ϼ�
	cout << p; // << ������ ȣ���Ͽ� ��ü p ���
}