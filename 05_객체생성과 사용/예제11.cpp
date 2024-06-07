#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string s;
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;
	getline(cin, s, '&'); // 문자열 입력
	cin.ignore();

	string fd;
	cout << endl << "find: ";
	getline(cin, fd, '\n'); // 검색할 문자열 입력

	string rp;
	cout << "replace: ";
	getline(cin, rp, '\n'); // 대치할 문자열 입력

	int startIndex = 0;
	while (true) 
	{
		int fIndex = s.find(fd, startIndex); // startIndex부터 문자열 f 검색
		if (fIndex == -1)
			break; // 문자열 s의 끝까지 변경하였음
		s.replace(fIndex, fd.length(), rp); // fIndex부터 문자열 f의 길이만큼 //문자열 rp로 변경
		startIndex = fIndex + rp.length();
	}
	cout << s << endl;
}