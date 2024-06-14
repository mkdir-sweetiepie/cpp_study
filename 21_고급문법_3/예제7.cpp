#include <iostream>
#include <array>
using namespace std;


int main(void)
{
	array<string, 3> arr = { "front", "mid", "back" };
	//front, back
	cout << " arr.front() : " << arr.front() << endl;
	cout << " arr.back() : " << arr.back() << endl;
	cout << endl;
	//fill
	arr.fill("filled");
	cout << " arr fill() : " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
	cout << endl;
	//swap
	array<string, 3> arr2 = { "swaped1", "swaped2", "swaped3" };
	arr.swap(arr2);
	cout << " arr swap() : " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
}