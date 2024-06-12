#include <iostream>
#include <fstream>
using namespace std;

void showStreamState(ios& stream) 
{
	cout << "eof() " << stream.eof() << endl;
	cout << "fail() " << stream.fail() << endl;
	cout << "bad() " << stream.bad() << endl;
	cout << "good() " << stream.good() << endl;
}

int main() 
{
	const char* noExistFile = "c:\\temp\\noexist.txt"; // �������� �ʴ� ���ϸ�
	const char* existFile = "c:\\temp\\student.txt"; // �����ϴ� ���ϸ�
	ifstream fin(noExistFile); // �������� �ʴ� ���� ����
	if (!fin) { // ���� ���� �˻�
		cout << noExistFile << " ���� ����" << endl;
		showStreamState(fin); // ��Ʈ�� ���� ���
		cout << existFile << " ���� ����" << endl;
		fin.open(existFile);
		showStreamState(fin); // ��Ʈ�� ���� ���
	}

	// ��Ʈ���� ������ �а� ȭ�鿡 ���
	int c;
	while ((c = fin.get()) != EOF)
		cout.put((char)c);
	cout << endl;
	showStreamState(fin); // ��Ʈ�� ���
	fin.close();
}