#include <iostream>
#include <array>
using namespace std;
int main()
{
	array<int, 3> arr{ 1,2,3 };
	try {
		int value = arr.at(10);
	}
	catch (const out_of_range& e) {
		cout << "out_of_range error : " << e.what() << endl;
	}
}