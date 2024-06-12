#include <iostream>
using namespace std;

class MyException {
	int lineNo;
	string func, msg;
public:
	MyException(int n, string f, string m) {
		lineNo = n; func = f; msg = m;
	}
	void print() {
		cout << func << ":" << lineNo << " ,"
			<< msg << endl;
	}
};
class DivideByZeroException : public MyException {
public:
	DivideByZeroException(int no, string func, string msg)
		: MyException(no, func, msg) { }
};
class InvalidInputException : public MyException {
public:
	InvalidInputException(int no, string func, string msg)
		: MyException(no, func, msg) { }
};

int main() {
	int x, y;
	try {
		cout << "나눗셈을 합니다. 두 개의 양의 정수를 입력하세요>>";
		cin >> x >> y;
		if (x < 0 || y < 0)
			throw InvalidInputException(32, "main()", "음수 입력 예외 발생");
		if (y == 0)
			throw DivideByZeroException(34, "main()", "0 나누기 예외 발생");
		cout << (double)x / (double)y;
	}
	catch (DivideByZeroException& e) {
		e.print();
	}
	catch (InvalidInputException& e) {
		e.print();
	}
}