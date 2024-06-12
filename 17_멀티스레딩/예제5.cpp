#include <iostream>
#include <thread>
using namespace std;

class Counter
{
	int _nID, _nItr;
public:
	Counter(int id, int nItr) : _nID(id), _nItr(nItr) { }
	void operator()() //const
	{
		for (int i = 0; i < _nItr; ++i)
		{
			cout << "Counter " << _nID << " Has value ";
			cout << i << endl;
		}
		_nItr++;
	}
	int Itr() { return _nItr; }
};

int main()
{
	cout.sync_with_stdio(true);

	Counter c(2, 12);
	thread t1(c);

	t1.join();

	cout << "Itr = " << c.Itr() << endl;

	return 0;
}