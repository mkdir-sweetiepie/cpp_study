#include <iostream>
#include <string> 
using namespace std;
int main()
{
	string song("[Falling in love with you]"); // ���ڿ� song
	string elvis("Elvis Presley"); // ���ڿ� elvis
	string singer; // ���ڿ� singer
	cout << "The singer who sang �� + song + ��is "; // + �� ���ڿ� ����
	cout << "(hint : The first alphabet is " << elvis[0] << ")?"; // [] ������ ���
	getline(cin, singer, '\n'); // ���ڿ� �Է�
	if (singer == elvis) // ���ڿ� ��
		cout << "Correct !";
	else
		cout << "Wrong !The answer is " + elvis << endl; // +�� ���ڿ� ����
}