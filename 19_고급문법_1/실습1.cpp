#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Simple
{
public:
	string stID;
	Simple(string st = " ") : stID(st)
	{ 
		cout << "Simple()" << endl;
	} 
	~Simple() { cout << "~Simple()" << endl; }
};
int main()
{
	vector<shared_ptr<Simple>> lSimple;

	lSimple.push_back(make_shared<Simple>("Simple 1"));
	lSimple.push_back(make_shared<Simple>("Simple 2")); 
	lSimple.push_back(make_shared<Simple>("Simple 3")); 

	for (auto& item : lSimple)
		cout << item->stID << endl;
}