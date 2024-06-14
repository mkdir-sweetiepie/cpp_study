#include <iostream>
#include <utility>
using namespace std;

int main()
{
	pair<string, int > p1("Hong", 1000);
	cout << "(" << p1.first << p1.second << ")" << endl;

	pair<string, int > p2("Hong", 900);
	cout << "(" << p2.first << p2.second << ")" << endl;

	if (p1 == p2)
		cout << "p1 = p2" << endl;
	else if (p1 != p2)
		cout << "p1 != p2" << endl;

	if (p1 > p2)
		cout << "p1 > p2" << endl;
	else if (p1 < p2)
		cout << "p1 < p2" << endl;
}