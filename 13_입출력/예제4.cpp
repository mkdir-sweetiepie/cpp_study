#include <iostream>
using namespace std;
int main() 
{
	char line[80];
	cout << "cin.getline() �Լ��� ������ �н��ϴ�." << endl;
	cout << "exit�� �Է��ϸ� ������ �����ϴ�." << endl;
	int no = 1; // ���� ��ȣ
	while (true) 
	{
		cout << "���� " << no << " >> ";
		cin.getline(line, 80); // 79�������� ���� ����
		if (strcmp(line, "exit") == 0)
			break;
		cout << "echo --> ";;
		cout << line << endl; // ���� ������ ȭ�鿡 ���
		no++; // ���� ��ȣ ����
	}
}