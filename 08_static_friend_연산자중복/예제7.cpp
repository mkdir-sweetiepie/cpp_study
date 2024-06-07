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
	Power operator+ (int op2); // + ������ �Լ� ����
};

void Power::show() 
{
	cout << "kick=" << kick << ',' << "punch=" << punch
		<< endl;
}

Power Power::operator+(int op2) 
{
	Power tmp; // �ӽ� ��ü ����
	tmp.kick = kick + op2; // kick�� op2 ���ϱ�
	tmp.punch = punch + op2; // punch�� op2 ���ϱ�
	return tmp; // �ӽ� ��ü ����
}

int main()
{
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a + 2; // �Ŀ� ��ü�� ���� ���ϱ�
	a.show();
	b.show();
}