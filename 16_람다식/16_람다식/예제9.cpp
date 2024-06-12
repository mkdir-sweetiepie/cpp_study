#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int i = 10;
	auto two_i = [=] {
		i *= 2; //compile error
		return i;
		};
	cout << "i : " << two_i() << "i : " << i << endl;
	// 여기서 컴파일 오류가 발생합니다. 
	// 이유는 람다 함수가 [=]를 사용하여 값을 
	// 복사 방식으로 캡처했기 때문에,
	// 람다 함수 내에서 i는 const로 취급됩니다.
	// 값을 복사하여 캡처된 변수는
	// 기본적으로 읽기 전용이기 때문에, 
	// 이를 수정하려고 하면 컴파일 오류가 발생합니다.
}