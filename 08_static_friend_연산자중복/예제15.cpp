#include <iostream>
using namespace std;

class Plus
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	Plus pls;
	cout << "pls(10,20): " << pls(10, 20) << endl;
	return 0;
}