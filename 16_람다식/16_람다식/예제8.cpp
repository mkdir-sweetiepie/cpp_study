#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int v = 42;
	auto func = [=] { cout << v << endl; };
	v = 8;
	func();

	//������ 42�� ĸó(����)�ؼ� ���� ����Ǿ ������ ���� ����
}