#include <iostream>
#include <functional>

using namespace std;

template<class T>
int MinValue(const int npA[], int nNum, T fun)
{
	int nMin = fun(npA[0]);
	for (int i = 0; i < nNum; i++)
		if (fun(npA[i] < nMin))
			nMin = fun(npA[i]);
	return nMin;
}

int main()
{
	int npArray[5] = { 7,-5,9,-2,3 };
	cout << MinValue(npArray, 5, [](int n) {return n * n; }) << endl;
	cout << MinValue(npArray, 5, [](int n) {return n * (n - 5); }) << endl;
}