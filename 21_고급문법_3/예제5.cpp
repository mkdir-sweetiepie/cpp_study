#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 6> data = { 1,2,3, 4,5,6 };
	
	cout << "forward iterator : ";
	for (auto itr = data.cbegin(); itr != data.cend(); ++itr)
	{
		std::cout << *itr << " ";

	}
	cout << endl;

	cout << "forward iterator : ";
	for (auto itr = data.crbegin(); itr != data.crend(); ++itr)
	{
		std::cout << *itr << " ";

	}
	cout << endl;
}