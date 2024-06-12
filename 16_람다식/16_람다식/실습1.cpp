#include <iostream> 
using namespace std;
int main() {
	double pi = 3.14; // 지역 변수
	auto calc = [pi](double r) { return pi * r * r; };
	cout << "Area : " << calc(3) << endl;
}