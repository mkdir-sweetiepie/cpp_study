#include <iostream>
#include <string>
using namespace std;

void msg(int id)
{
	cout << id << endl;
}

void msg(int id, string s = "") 
{
	cout << id << ":" << s << endl;
}

int main() 
{
	msg(5, "Good Morning"); // ���� ������. �� ��° msg() ȣ��
	msg(6); // �Լ� ȣ�� ��ȣ. ������ ����
}