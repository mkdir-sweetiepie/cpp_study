#include <iostream> 
#include <string> 
using namespace std;

int main() 
{
	auto love = [](string a, string b) {
		cout << a << "���� " << b << "�� ����" << endl;
		};
	love("��", "��"); // ���ٽ� ȣ��
	love("�ø�", "����"); // ���ٽ� ȣ��
}