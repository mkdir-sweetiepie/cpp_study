#include <filesystem>
#include <iostream>

using namespace std;
namespace fs = std::filesystem;

int main()
{
	fs::create_directory("./data");
	fs::create_directory("./data/data_added");
}