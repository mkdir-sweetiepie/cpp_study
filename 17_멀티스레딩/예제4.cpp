#include <iostream>
#include <thread>
using namespace std;

class Counter
{
	int _nID, _nItr;
public:
	Counter(int id, int nItr) : _nID(id), _nItr(nItr){ }
	void operator()() const
	{
		for (int i = 0; i < _nItr; ++i)
		{
			cout << "Counter " << _nID << " Has value ";
			cout << i << endl;
		}
	}
};

int main()
{
	cout.sync_with_stdio(true);

	thread t1(Counter(1, 20));

	Counter c(2, 12);
	thread t2(c);

	thread t3(Counter(3, 10));

	t1.join();
	t2.join();
	t3.join();

	return 0;
}