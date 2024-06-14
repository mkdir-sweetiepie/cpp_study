#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
	array<int, 6> arr = { 7,1,5,6,3,4 };

	sort(arr.begin(), arr.end());

	for (int item : arr)
		cout << item << " ";
	
}