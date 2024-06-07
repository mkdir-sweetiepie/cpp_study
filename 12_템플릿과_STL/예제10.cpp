#include <iostream>
#include <vector>
using namespace std;

void main()
{
	vector<int> v1(10);
	vector<int> v2(10, 7);
	vector<int> v3(v2);
	int ar[] = { 1,2,3,4,5,6,7,8,9 };
	vector<int> v4(&ar[2], &ar[5]);
	vector<int>::iterator it;

	for (it = v1.begin(); it != v1.end(); it++)
		cout << *it << " ";
	cout << endl;
	for (it = v2.begin(); it != v2.end(); it++)
		cout << *it << " ";
	cout << endl;
	for (it = v3.begin(); it != v3.end(); it++)
		cout << *it << " ";
	cout << endl;
	for (it = v4.begin(); it != v4.end(); it++)
		cout << *it;
}