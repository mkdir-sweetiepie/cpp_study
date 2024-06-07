#include <iostream>
#include <string> 
using namespace std;
int main()
{
	string song("[Falling in love with you]"); // 문자열 song
	string elvis("Elvis Presley"); // 문자열 elvis
	string singer; // 문자열 singer
	cout << "The singer who sang “ + song + “is "; // + 로 문자열 연결
	cout << "(hint : The first alphabet is " << elvis[0] << ")?"; // [] 연산자 사용
	getline(cin, singer, '\n'); // 문자열 입력
	if (singer == elvis) // 문자열 비교
		cout << "Correct !";
	else
		cout << "Wrong !The answer is " + elvis << endl; // +로 문자열 연결
}