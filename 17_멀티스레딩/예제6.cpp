#include <thread> 
#include <iostream>
#include <functional> // for std::ref
using namespace std;
class PrintThis
{
public:
	void operator( )() const
	{
		cout << "this=" << this << endl; 
	}
};

int main()
{
	PrintThis x;
	x();
	thread t(ref(x));
	t.join();
	thread t2(x);
	t2.join();
}