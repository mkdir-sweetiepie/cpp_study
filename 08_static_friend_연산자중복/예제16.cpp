#include <iostream>
using namespace std;

class MoneyBox
{
	int total;
public:
	MoneyBox(int _init = 0) : total(_init) {}
	int operator() (int money)
	{
		total += money;
		return total;
	}
};

int main()
{
	MoneyBox mb;
	cout << "mb(100): " << mb(100) << endl;
	cout << "mb(500): " << mb(500) << endl;
	cout << "mb(2000): " << mb(2000) << endl;

	return 0;
}