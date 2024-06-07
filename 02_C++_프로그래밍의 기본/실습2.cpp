#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Input a string: ";
		//cin >> a[i];
		getline(cin, a[i]);
	}
	string max = a[0];
	for (int i = 0; i < 3; i++)
	{
		if (a[i].size() > max.size())
			max = a[i];
	}
	cout << "The longest string: " << max << endl;
	return 0;
}