#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int i = 10;
	auto two_i = [=]() mutable ->int {
		i *= 2; //�Լ� ���κ��� i�� 2��
		return i;
		};
	cout << "i : " << two_i() << " i : " << i << endl;
}