#include <iostream>
using namespace std;

int getExp(int base, int exp) 
{ // base�� exp �������� ����Ͽ� ����
	int value = 1;
	for (int n = 0; n < exp; n++)
		value = value * base; // base�� exp�� ���Ͽ� ���� �� ���
	return value;
}

int main() 
{
	int v = getExp(2, 3); // 2�� 3�� = 8
	cout << "2�� 3���� " << v << "�Դϴ�." << endl;
	int e = getExp(2, -3); // 2�� -3���� ?
	cout << "2�� -3���� " << e << "�Դϴ�." << endl;
}