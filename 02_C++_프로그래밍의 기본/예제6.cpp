#include <iostream>
using namespace std;
int main()
{
	cout << "Input an address >> ";
	char address[100];
	cin.getline(address, 100, '\n'); // Ű����κ��� �ּ� �б�
	cout << "The address is " << address << "\n"; // �ּ� ���
}