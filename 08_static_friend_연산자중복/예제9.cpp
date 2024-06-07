#include <iostream>
using namespace std;

class Power 
{
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) 
	{
		this->kick = kick; 
		this->punch = punch;
	}
	void show();
	Power operator++ (int x); // ���� ++ ������ �Լ� ����
};
void Power::show() 
{
	cout << "kick=" << kick << ',' << "punch=" << punch << endl;
}
Power Power::operator++(int x) 
{
	Power tmp = *this; // ���� ���� ��ü ���¸� ����
	kick++;
	punch++;
	return tmp; // ���� ���� ��ü ���� ����
}

int main()
{
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a++; // ���� ++ ������ ���
	a.show(); // a�� �Ŀ��� 1 ������
	b.show(); // b�� a�� �����Ǳ� ���� ���¸� ����
}
