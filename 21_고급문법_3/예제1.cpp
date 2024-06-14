#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() 
{
	map<string, string> dic; // �� �����̳� ����
	// �ܾ� 3���� map�� ����
	dic.insert(make_pair("love", "���")); // ("love", "���") ����
	dic.insert(make_pair("apple", "���")); // ("apple", "���") ����
	dic["cherry"] = "ü��"; // ("cherry", "ü��") ����
	cout << "����� �ܾ� ���� " << dic.size() << endl;
	string eng;
	while (true) {
		cout << "ã�� ���� �ܾ�>> ";
		getline(cin, eng); // ����ڷκ��� Ű �Է�
		if (eng == "exit")
			break; // "exit"�� �ԷµǸ� ����
		if (dic.find(eng) == dic.end()) // eng 'Ű'�� ������ ã�Ҵµ� ����
			cout << "����" << endl;
		else
			cout << dic[eng] << endl; // dic���� eng�� ���� ã�� ���
	}
	cout << "�����մϴ�..." << endl;
}