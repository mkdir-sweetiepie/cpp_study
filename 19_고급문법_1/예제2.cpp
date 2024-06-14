#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Simple
{
public:
	string stID;
	Simple(string st = "") : stID(st) { cout << "Simple::SImple()" << endl; }
	~Simple() { cout << "Simple::~Simple()" << endl; };
};

int main()
{
	vector<shared_ptr<Simple>> vec;
	vec.push_back(shared_ptr<Simple>(new Simple()));
	vec.push_back(shared_ptr<Simple>(vec[0]));
	vec.push_back(shared_ptr<Simple>(vec[1]));

	cout << "delete the 1st element\n";
	vec.erase(vec.begin());
	cout << "delete the 2nd element\n";
	vec.erase(vec.begin());
	cout << "delete the last element\n";
	vec.erase(vec.begin());
}