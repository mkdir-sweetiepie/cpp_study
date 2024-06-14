#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

class MyPrint
{
	string myWord;
public:
	MyPrint(const string& text)
	{
		myWord = text;
	}
	void operator( )(const string& szText) const
	{
		cout << myWord << endl;
		cout << szText << endl;
	}
};
int main()
{
	auto th1 = thread{ MyPrint("Hello,"), "World!" };
	th1.join();
	return 0;
	}