#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

mutex mtx;

int sum = 0;
int counter = 0;

int main()
{
	cout.sync_with_stdio(true);

	auto work_func = []()
		{
			for (int i = 0; i < 10; i++)
			{
				mtx.lock();
				sum++;
				cout << this_thread::get_id() << " " << sum << endl;
				mtx.unlock();
			}
		};
	thread t1 = thread{ work_func };
	thread t2 = thread{ work_func };
	thread t3 = thread{ work_func };

	t1.join();
	t2.join();
}