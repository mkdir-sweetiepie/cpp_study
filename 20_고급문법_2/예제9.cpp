#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

int main() {
    for (const fs::directory_entry& entry : fs::directory_iterator(fs::current_path())) {
        cout << entry.path() << endl;
    }

    return 0;
}
