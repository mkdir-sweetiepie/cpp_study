#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	
	for (auto &each : vec)
	{
		each++;
	}
	for (auto each : vec)
	{
		cout << each << endl;
	}
	return 0;
}