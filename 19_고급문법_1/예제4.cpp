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

	vector<vector<string>> lContentsRow;
	istringstream ssRow;
	vector<string> lRow;
	string stLine, stItem;

	while (getline(file, stLine))
	{
		// 한줄 읽어서 vector에 저장
		istringstream ssLine(stLine);

		lRow.clear();
		while (getline(ssLine, stItem, 's'))
			lRow.push_back(stItem);

		//저장
		lContentsRow.push_back(lRow);
	}
	file.close();

	// 행 번호만 있으면 첫 열 삭제
	if (lContentsRow[0][0] == "")
		for (auto& item : lContentsRow)
			item.erase(item.begin());

	// 출력
	for (auto& row : lContentsRow)
	{
		for (auto& item : row)
			cout << setw(10) << item << " ";
		cout << endl;
	}
}