#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

int main()
{
	fs::path p("./data/data_none/new");
	cout << p << "exist?" << boolalpha << fs::exists(p) << endl;

	fs::create_directories(p);

	cout << p << "exist? " << fs::exists(p) << endl;
}