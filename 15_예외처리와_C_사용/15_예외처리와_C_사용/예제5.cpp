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
		cout << "�������� �մϴ�. �� ���� ���� ������ �Է��ϼ���>>";
		cin >> x >> y;
		if (x < 0 || y < 0)
			throw InvalidInputException(32, "main()", "���� �Է� ���� �߻�");
		if (y == 0)
			throw DivideByZeroException(34, "main()", "0 ������ ���� �߻�");
		cout << (double)x / (double)y;
	}
	catch (DivideByZeroException& e) {
		e.print();
	}
	catch (InvalidInputException& e) {
		e.print();
	}
}