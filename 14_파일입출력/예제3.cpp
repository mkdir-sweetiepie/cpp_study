#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	const char* file = "c:\\windows\\system.ini";
	ifstream fin(file);
	if (!fin) {
		cout << file << " ���� ����" << endl;
		return 0;
	}
	int count = 0;
	int c;
	//c=fin.get() : ���Ͽ��� ���� �б�
	while ((c = fin.get()) != EOF) { // EOF�� ���� ������ ���� �б�
		cout << (char)c;
		count++;
	}
	cout << "���� ����Ʈ ���� " << count << endl;
	fin.close(); // ���� �ݱ�
}