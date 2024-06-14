#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

int main()
{
	fs::path p("./data/data_added");
	error_code err;
	fs::remove(p,err);
	cout << err.message() << endl;

	fs::remove_all(p);
}