#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 5> arr = { 1,2,3,4,5 };
	array<int, 5> arr2 = { 5,4,3,2,1 };
	arr = arr2;
	cout << "arr: ";
	for (int item : arr)
		cout << item << ' ';
	cout << endl;
	cout << "arr2: ";
	for (int item : arr2)
		cout << item << " ";
}