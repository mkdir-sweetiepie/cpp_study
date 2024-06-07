#include <iostream>
using namespace std;
int main()
{
	cout << "Input a name >> ";
	char name[11]; // 한글은 5개 글자, 영문은 10까지 저장할 수 있다. 
	cin >> name; // 키보드로부터 문자열을 읽는다. 
	cout << "The name is " << name << "\n"; // 이름을 출력한다. 
}