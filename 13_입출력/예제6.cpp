#include <iostream>
using namespace std;

void showWidth() 
{
	cout.width(10); // 다음에 출력되는 "hello"를 10 칸으로 지정
	cout << "Hello" << endl;
	cout.width(5); // 다음에 출력되는 정수 12를 5 칸으로 지정
	cout << 12 << endl;
	cout << '%';
	cout.width(10); // 다음에 출력되는 "Korea/"만 10 칸으로 지정
	cout << "Korea/" << "Seoul/" << "City" << endl;
}
int main() {
	showWidth(); cout << endl;
	cout.fill('^');
	showWidth(); cout << endl;
	cout.precision(5);
	cout << 11. / 3. << endl;
}