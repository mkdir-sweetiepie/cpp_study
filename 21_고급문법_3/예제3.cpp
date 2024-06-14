#include <iostream> 
#include <array> 
using namespace std;

int main()
{
	array<int, 3> arr = { 1, 2, 3 }; //<자료형,크기>
	cout << "Array size = " << arr.size() << endl;
	for (auto item : arr)
		cout << item << " ";
	cout << endl;
}