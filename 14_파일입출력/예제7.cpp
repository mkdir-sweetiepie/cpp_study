#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	// �ҽ� ���ϰ� ���� ������ �̸�
	const char* srcFile = "c:\\temp\\desert.jpg";
	const char* destFile = "c:\\temp\\copydesert.jpg";
	// �ҽ� ���� ����
	ifstream fsrc(srcFile, ios::in | ios::binary);
	if (!fsrc) { // ���� ���� �˻�
		cout << srcFile << " ���� ����" << endl;
		return 0;
	}
	// ���� ���� ����
	ofstream fdest(destFile, ios::out | ios::binary);
	if (!fdest) { // ���� ���� �˻�
		cout << destFile << " ���� ����" << endl;
		return 0;
	}
	// �ҽ� ���Ͽ��� ���� ���Ϸ� �����ϱ�
	int c;
	while ((c = fsrc.get()) != EOF) { // �ҽ� ������ ������ �� ����Ʈ�� �д´�. 
		fdest.put(c); // ���� ����Ʈ�� ���Ͽ� ����Ѵ�. 
	}
	cout << srcFile << "�� " << destFile << "�� ���� �Ϸ�" << endl;
	fsrc.close();
	fdest.close();
}