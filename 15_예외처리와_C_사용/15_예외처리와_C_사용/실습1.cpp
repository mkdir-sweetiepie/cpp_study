#include <iostream>
using namespace std;

int sum(int a, int b)
{
	if (a > b || a < 0 || b < 0)
		throw "Exception Raised !";
	return (b - a + 1) * (a + b) / 2;
}

int main() {
	try {
		cout << sum(2, 5) << endl; //14 출력
		cout << sum(-1, 5) << endl; // 예외 발생
		cout << sum(7, 3) << endl; // 예외 발생
	}
	catch (const char* s) {
		cout << s << endl;
	}
}