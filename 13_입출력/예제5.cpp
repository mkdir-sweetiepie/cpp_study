#include <iostream>
using namespace std;

int main() 
{
	cout << 30 << endl; // 10������ ���
	cout.unsetf(ios::dec); // 10���� ����
	cout.setf(ios::hex); // 16������ ����
	cout << 30 << endl;
	cout.setf(ios::showbase); // 16������ ����
	cout << 30 << endl;
	cout.setf(ios::uppercase); // 16������ A~F�� �빮�ڷ� ���
	cout << 30 << endl;
	cout.setf(ios::dec | ios::showpoint); // 10���� ǥ���� ���ÿ�
	// �Ҽ��� ���� �������� 0���� ���
	cout << 23.5 << endl;
	cout.setf(ios::scientific); // �Ǽ��� ���л���� ǥ������ ���
	cout << 23.5 << endl;
	cout.setf(ios::showpos); // ����� ��� + ��ȣ�� �Բ� ���
	cout << 23.5;
}