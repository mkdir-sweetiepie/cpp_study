#include <iostream>
using namespace std;

class MyVector
{
	int* mem;
	int size;
public:
	MyVector();
	MyVector(int n, int val);
	~MyVector() { delete[] mem; }
	void show();
};

MyVector::MyVector()
{
	mem = new int[100];
	size = 100;
	for (int i = 0; i < size; i++)
		mem[i] = 0;
}

MyVector::MyVector(int n, int val)
{
	mem = new int[n];
	size = n;
	for (int i = 0; i < size; i++)
		mem[i] = val;
}

void MyVector::show() 
{
	for (int i = 0; i < size; i++) 
	{
		cout << mem[i] << ' ';
	}
	cout << endl;
}

int main()
{
	MyVector a;
	MyVector b(10, 3);

	a.show();
	b.show();
}