#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

int main()
{
	fs::path p("./insa.txt");

	cout << p << "Current path :" << fs::current_path() << endl;
	cout << p << "Relative path :" << p.relative_path() << endl;
	cout << p << "Absolute path :" << fs::absolute(p) << endl;
	cout << p << "Canonical path :" << fs::canonical(p) << endl;

}