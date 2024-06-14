#include <iostream>
#include <filesystem>


using namespace std;
namespace fs = filesystem;

int main()
{
	filesystem::path p("./insa.txt");

	cout << p << "exist?" << boolalpha << fs::exists(p) << endl;
	cout << p << "file?" << fs::is_regular_file(p) << endl;
	cout << p << "directory?" << fs::is_directory(p) << endl;

}