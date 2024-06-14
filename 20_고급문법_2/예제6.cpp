#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

int main()
{
	fs::path p("./data/insa.txt");
	cout << p << "exist?" << boolalpha << fs::exists(p) << endl;

	fs::remove(p);
	cout << p << "exist? " << boolalpha << fs::exists(p) << endl;
}