#include <iostream>
using namespace std;

int main()
{
	int unit, count, total;
	cout << "Input the unit price of the product -> ";
	cin >> unit;

	cout << "Input the number of the product to buy -> ";
	cin >> count;

	total = unit * count;

	cout << "total : " << total << endl;
	return 0;
}