#include <iostream>
#include <fstream>
using namespace std;

long getFileSize(ifstream& fin) 
{
	fin.seekg(0, ios::end); // get pointer�� ������ �� ������ �ű�
	long length = fin.tellg(); // get pointer�� ��ġ�� �˾Ƴ�
	return length; // length�� ������ ũ��� ����
}

int main() 
{
	const char* file = "c:\\windows\\system.ini";
	ifstream fin(file);
	if (!fin) { // ���� ���� �˻�
		cout << file << " ���� ����" << endl;
		return 0;
	}
	cout << file << "�� ũ��� " << getFileSize(fin);
	fin.close();
}