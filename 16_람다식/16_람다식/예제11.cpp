#include <iostream>
using namespace std;

//int main()
//{
//	int i = 8;
//	auto func = [i]() {
//		int j = 2;
//		auto m = [=]() { cout << i / j; };
//		m();
//		};
//	func();
//}

//int main()
//{
//	int i = 8;
//	auto func = []() {
//		int j = 2;
//		auto m = [=]() { cout << i / j; };
//		m();
//		};
//	func();
//}

int main()
{
	int i = 8;
	auto func = [=]() {
		int j = 2;
		auto m = [&]() { i /= j; };
		m();
		};
	func();
}