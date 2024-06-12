#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int v = 42;
	auto func = [=] { cout << v << endl; };
	v = 8;
	func();

	//위에서 42를 캡처(복사)해서 값이 변경되어도 영향을 주지 않음
}