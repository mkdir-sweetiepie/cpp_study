#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

int main()
{
	fs::directory_iterator itr(fs::current_path());

	while (itr != fs::end(itr));
	{
		const fs::directory_entry& entry = *itr;
		cout << entry.path() << endl;
		itr++;
	}
}