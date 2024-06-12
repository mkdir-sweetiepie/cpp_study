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
		cout << sum(2, 5) << endl; //14 ���
		cout << sum(-1, 5) << endl; // ���� �߻�
		cout << sum(7, 3) << endl; // ���� �߻�
	}
	catch (const char* s) {
		cout << s << endl;
	}
}