#include <iostream>
using namespace std;

int getExp(int base, int exp) 
{
	if (base <= 0 || exp <= 0) {
		throw "���� ��� �Ұ�";
	}
	int value = 1;
	for (int n = 0; n < exp; n++)
		value = value * base;
	return value; // ��� ��� ����
}
int main() {
	int v = 0;
	try {
		v = getExp(2, 3); // v = 2�� 3�� = 8
		cout << "2�� 3���� " << v << "�Դϴ�." << endl;
		v = getExp(2, -3); // 2�� -3 �� ?
		cout << "2�� -3���� " << v << "�Դϴ�." << endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}
}