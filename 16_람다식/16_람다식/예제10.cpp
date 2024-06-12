#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int i = 10;
	auto two_i = [=]() mutable ->int {
		i *= 2; //함수 내부변수 i를 2배
		return i;
		};
	cout << "i : " << two_i() << " i : " << i << endl;
}