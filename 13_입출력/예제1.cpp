#include <iostream>
using namespace std;
int main() 
{
	// "Hi!"�� ����ϰ� ���� �ٷ� �Ѿ��. cout.put('H');
	cout.put('i');
	cout.put(33);
	cout.put('\n');
	// "C++ "�� ����Ѵ�. cout.put('C').put('+').put('+').put(' ');
	char str[] = "I love programming";
	cout.write(str, 6); // str �迭�� 6 ���� ���� "I love"�� ��Ʈ���� ���
}