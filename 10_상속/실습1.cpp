#include <iostream>
using namespace std;
class Adder
{
protected:
	int add(int a, int b)
	{
		return a + b;
	}
};
class Subtractor
{
protected:
	int minus(int a, int b)
	{
		return a - b;
	}
};

class Calculator : public Adder, public Subtractor {
public:
	int calc(char op, int a, int b) {
		if (op == '+')
			return add(a, b);
		else if (op == '-')
			return minus(a, b);
		else
			throw invalid_argument("Unsupported operation");
	}
};

int main()
{
	Calculator handCalculator;
	cout << "2 + 4 = "
		<< handCalculator.calc('+', 2, 4)
		<< endl;
	cout << "100 - 8 = "
		<< handCalculator.calc('-', 100, 8)
		<< endl;
}