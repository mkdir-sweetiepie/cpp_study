#include <iostream>
#include <vector>
#include <algorithm> // for_each() 알고리즘 함수를 사용하기 위함
using namespace std;

int main()
{
	int total_elements = 1;
	vector<int> cardinal;
	cardinal.push_back(1);
	cardinal.push_back(2);
	cardinal.push_back(4);
	cardinal.push_back(8);

	for_each(cardinal.begin(), cardinal.end(), [&](int i) { total_elements *= i; });
	cout << "total elements : " << total_elements << endl;
}