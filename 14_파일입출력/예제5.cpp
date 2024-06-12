#include <iostream>
#include <fstream>
#include <string> //getline 할때 사용
using namespace std;

int main() 
{
	ifstream fin("c:\\windows\\system.ini");
	if (!fin) 
	{
		cout << "c:\\windows\\system.ini 열기 실패" << endl;
		return 0;
	}
	//char buf[81]; // 한 라인이 최대 80개의 문자로 구성된다고 가정
	//while (fin.getline(buf, 81)) 
	//{ // 한 라인이 최대 80개의 문자로 구성
	//	cout << buf << endl; // 라인 출력
	//}

	string line;
	while (getline(fin, line)) { // 한 라인을 읽어 line에 저장. 파일 끝까지 반복
		cout << line << endl; // 라인 출력
	}
	fin.close();
}