#include <iostream> 
#include <fstream>
#include <vector>
#include <sstream>
#include <map>
#include <iomanip>
using namespace std;
int main()
{
	//csv 파일 열기
	ifstream file("./grade.csv");
	if (file.is_open() == false)
	{
		cout << "file open error !" << endl;
		return 0;
	}
}