#include <iostream> 
#include <fstream>
#include <vector>
#include <sstream>
#include <map>
#include <iomanip>
using namespace std;
int main()
{
	//csv ���� ����
	ifstream file("./grade.csv");
	if (file.is_open() == false)
	{
		cout << "file open error !" << endl;
		return 0;
	}
}