#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	char name[10], dept[20];
	int sid;
	// 키보드로부터 읽기
	cout << "이름>>";
	cin >> name; // 키보드에서 이름 입력 받음
	cout << "학번>>";
	cin >> sid; // 키보드에서 학번 입력 받음
	cout << "학과>>";
	cin >> dept; // 키보드에서 학과 입력 받음
	
	// 파일 열기. student.txt 파일을 열고, 출력 스트림 생성
	ofstream fout("c:\\temp\\student.txt"); 
	// \\두개 써야하는 이유 \하나면 \로 출력됨(문자로 인식하기 때문)

	if (!fout) { // 열기 실패 검사
		cout << "c:\\temp\\student.txt 파일을 열 수 없다";
			return 0;
	}
	// 파일 쓰기
	fout << name << endl; // name 쓰기
	fout << sid << endl; // sid 쓰기
	fout << dept << endl; // dept 쓰기
	fout.close(); // 파일 닫기
}