#include <iostream> 
using namespace std;
int main()
{
	cout << "Input a width >> ";
	int width;
	cin >> width; // Ű����κ��� �ʺ� �о� width ������ ����

	cout << "Input a height >> ";
	int height;
	cin >> height; // Ű����κ��� ���̸� �о� height ������ ����

	int area = width * height; // �簢���� ���� ���
	cout << "The area is " << area << "\n"; // ������ ����ϰ� ���� �ٷ� �Ѿ
}