#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 3> a = { 1,2,3 };
	array<int, 3> b;

	b = a;
	for (auto item : b)
		cout << item << " ";
	cout << endl;
}