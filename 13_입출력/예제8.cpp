#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	cout << showbase;
	// Ÿ��Ʋ�� ����Ѵ�.
	cout << setw(8) << "Number";
	cout << setw(10) << "Octal";
	cout << setw(10) << "Hexa" << endl;
	// �ϳ��� ���� ������, 8����, 16���� ���·� �� �ٿ� ����Ѵ�. 
	for(int i=0; i<50; i+=5)
	{ 
		cout << setw(8) << setfill('.') << dec << i; // 10����
		cout << setw(10) << setfill(' ') << oct << i; // 8����
		cout << setw(10) << setfill(' ') << hex << i << endl; // 16����
	}
}