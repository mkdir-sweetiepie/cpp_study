#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct com
{
	bool operator ()(const string& s1, const string& s2) 
	{ 
		return s1.size() < s2.size(); 
	}
};

int main()
{
	vector<string> v;
	vector<string>::iterator it;
	v.push_back("cccc"); v.push_back("aa");
	v.push_back("bbb"); v.push_back("dddd");
	sort(v.begin(), v.end(), com());
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << endl;
	cout << endl;
}