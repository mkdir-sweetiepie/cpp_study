#include <iostream>
using namespace std;
int main()
{
	cout << "Input an address >> ";
	char address[100];
	cin.getline(address, 100, '\n'); // 키보드로부터 주소 읽기
	cout << "The address is " << address << "\n"; // 주소 출력
}