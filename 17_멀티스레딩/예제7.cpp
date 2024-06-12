#include <iostream>
#include <thread>
using namespace std;

int main()
{
	cout.sync_with_stdio(true); //make sure cout is thread-safe
	thread t1( [](int id, int num)
		{
			for (int i = 0; i < num; ++i) {
				cout << "Counter " << id << " has value ";
				cout << i << endl;
			}
		},1,5);
	
	t1.join(); //to wait for finishing t1 
}