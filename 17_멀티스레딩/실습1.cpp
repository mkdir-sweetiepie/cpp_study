#include <iostream>
#include <thread>
using namespace std;

int main()
{
	cout.sync_with_stdio(true); //make sure cout is thread-safe
	 auto counter = [](int id, int num)
		{
			for (int i = 0; i < num; ++i) {
				cout << "Counter " << id << " has value ";
				cout << i << endl;
			}
		};
	//thread t1생성 및 시작 (id = 1, num = 5)
	 thread t1(counter, 1, 5);
	t1.join(); //to wait for finishing t1 
}