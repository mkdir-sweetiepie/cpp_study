#include <iostream> 
using namespace std;

int main() {
	int sum = 0; // ���� ����
	[&sum](int x, int y) { sum = x + y; } (2, 3); // �� 5�� �������� sum�� ����
	cout << "���� " << sum;
}