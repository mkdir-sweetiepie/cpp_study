#include <iostream> 
using namespace std;
int main()
{
	cout << "Input a width >> ";
	int width;
	cin >> width; // 키보드로부터 너비를 읽어 width 변수에 저장

	cout << "Input a height >> ";
	int height;
	cin >> height; // 키보드로부터 높이를 읽어 height 변수에 저장

	int area = width * height; // 사각형의 면적 계산
	cout << "The area is " << area << "\n"; // 면적을 출력하고 다음 줄로 넘어감
}