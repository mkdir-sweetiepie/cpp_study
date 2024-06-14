#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	map<string, string> dic; // 맵 컨테이너 생성
	// 단어 3개를 map에 저장
	dic.insert(make_pair("love", "사랑")); // ("love", "사랑") 저장
	dic.insert(make_pair("apple", "사과")); // ("apple", "사과") 저장
	dic["cherry"] = "체리"; // ("cherry", "체리") 저장
	map<string, string>::iterator itr;
	for (itr = dic.begin(); itr != dic.end(); itr++)
		cout << "1:" << itr->second << endl;
	for (itr = dic.begin(); itr != dic.end(); )
	{
		cout << "1:" << itr->second << endl;
		itr = itr + 1; //Compile Error +로 이터레이터 증가 시킬수 없음
	}
}