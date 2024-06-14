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

	vector<vector<string>> lContentsRow;
	istringstream ssRow;
	vector<string> lRow;
	string stLine, stItem;

	while (getline(file, stLine))
	{
		// ���� �о vector�� ����
		istringstream ssLine(stLine);

		lRow.clear();
		while (getline(ssLine, stItem, 's'))
			lRow.push_back(stItem);

		//����
		lContentsRow.push_back(lRow);
	}
	file.close();

	// �� ��ȣ�� ������ ù �� ����
	if (lContentsRow[0][0] == "")
		for (auto& item : lContentsRow)
			item.erase(item.begin());

	// ���
	for (auto& row : lContentsRow)
	{
		for (auto& item : row)
			cout << setw(10) << item << " ";
		cout << endl;
	}
}