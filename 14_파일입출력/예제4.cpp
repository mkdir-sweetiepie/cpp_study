
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	const char* firstFile = "c:\\temp\\student.txt";
	const char* secondFile = "c:\\windows\\system.ini";
	fstream fout(firstFile, ios::out | ios::app); // ���� ���� ���� ����
	if (!fout) { // ���� ���� �˻�
		cout << firstFile << " ���� ����";
		return 0;
	}
	fstream fin(secondFile, ios::in); // �б� ���� ���� ����
	if (!fin) { // ���� ���� �˻�
		cout << secondFile << " ���� ����";
		return 0;
	}
	int c;
	while ((c = fin.get()) != EOF) { // ���� ������ ���� �б�
		fout.put(c); // ���� ���� ���
	}
	fin.close(); // �Է� ���� �ݱ�
	fout.close(); // ��� ���� �ݱ�
}