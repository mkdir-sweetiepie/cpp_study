#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&'); // ���ڿ� �Է�
	cin.ignore();

	string fd;
	cout << endl << "find: ";
	getline(cin, fd, '\n'); // �˻��� ���ڿ� �Է�

	string rp;
	cout << "replace: ";
	getline(cin, rp, '\n'); // ��ġ�� ���ڿ� �Է�

	int startIndex = 0;
	while (true) 
	{
		int fIndex = s.find(fd, startIndex); // startIndex���� ���ڿ� f �˻�
		if (fIndex == -1)
			break; // ���ڿ� s�� ������ �����Ͽ���
		s.replace(fIndex, fd.length(), rp); // fIndex���� ���ڿ� f�� ���̸�ŭ //���ڿ� rp�� ����
		startIndex = fIndex + rp.length();
	}
	cout << s << endl;
}