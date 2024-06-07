#include <iostream>
using namespace std;

class Sample
{
	int* _npData;
	int _nSize;

public:
	Sample() 
	{ 
		_npData = 0;  
		_nSize = 0; //n�� ���� �迭�� ���� ���� 
	}
	void Read(int nSize); // ����ڷκ��� ������ �Է� ����
	void Write(); // ���� �迭�� ȭ�鿡 ���
	int Big(); //���� �迭���� ���� ū �� ����
	~Sample();
};

void Sample::Read(int size)
{
	if (_npData)
		delete[] _npData;
	_nSize = size;
	_npData = new int[size];

	for (int i = 0; i < _nSize; i++)
		cin >> _npData[i];
}

void Sample::Write()
{
	if (_npData == 0)
		return;
	for (int i = 0; i < _nSize; i++)
		cout << _npData[i] << ' ';
	cout << endl;
}

int Sample::Big()
{
	int big = _npData[0];
	for (int i = 1; i < _nSize; i++)
		if (big < _npData[i])
			big = _npData[i];
	return big;
}

Sample:: ~Sample()
{
	if (_npData)
		delete[] _npData;
}

int main()
{
	Sample s;
	s.Read(5); //Ű���忡�� 5���� ���� �о���̱�
	s.Write(); // ���� �迭 ���
	cout << "THe big .No, is " << s.Big() << endl;
}