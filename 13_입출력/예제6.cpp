#include <iostream>
using namespace std;

void showWidth() 
{
	cout.width(10); // ������ ��µǴ� "hello"�� 10 ĭ���� ����
	cout << "Hello" << endl;
	cout.width(5); // ������ ��µǴ� ���� 12�� 5 ĭ���� ����
	cout << 12 << endl;
	cout << '%';
	cout.width(10); // ������ ��µǴ� "Korea/"�� 10 ĭ���� ����
	cout << "Korea/" << "Seoul/" << "City" << endl;
}
int main() {
	showWidth(); cout << endl;
	cout.fill('^');
	showWidth(); cout << endl;
	cout.precision(5);
	cout << 11. / 3. << endl;
}