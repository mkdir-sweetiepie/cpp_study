#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, string> dic; // �� �����̳� ����
	// �ܾ� 3���� map�� ����
	dic.insert(make_pair("love", "���")); // ("love", "���") ����
	dic.insert(make_pair("apple", "���")); // ("apple", "���") ����
	dic["cherry"] = "ü��"; // ("cherry", "ü��") ����
	map<string, string>::iterator itr;
	for (itr = dic.begin(); itr != dic.end(); itr++)
		cout << "1:" << itr->second << endl;
	for (itr = dic.begin(); itr != dic.end(); )
	{
		cout << "1:" << itr->second << endl;
		itr = itr + 1; //Compile Error +�� ���ͷ����� ���� ��ų�� ����
	}
}