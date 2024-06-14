#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	const int n = sizeof(arr);
	array<int, n> A;
	copy(begin(arr), end(arr), A.begin());
	// copy_n(begin(arr), n, begin(A));
	// move(begin(arr), end(arr), A.begin());
	for (auto item : A)
		cout << item << " ";
}