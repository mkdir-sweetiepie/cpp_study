#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair<int, double> v1, v2;
	v1 = pair<int, double>(10, 10.1);
	v2 = make_pair(10, 10.1);

	pair<int, pair<double, double>> p1, p2;
	p1 = make_pair(10, make_pair(10.1, 10.2));
	p2 = { 10, { 10.1, 10.2} };

	cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;
}
