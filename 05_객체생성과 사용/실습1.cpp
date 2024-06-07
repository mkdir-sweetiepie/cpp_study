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
		_nSize = 0; //n개 정수 배열의 동적 생성 
	}
	void Read(int nSize); // 사용자로부터 정수를 입력 받음
	void Write(); // 정수 배열을 화면에 출력
	int Big(); //정수 배열에서 가장 큰 수 리턴
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
	s.Read(5); //키보드에서 5개의 정수 읽어들이기
	s.Write(); // 정수 배열 출력
	cout << "THe big .No, is " << s.Big() << endl;
}