#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <cstring>
using namespace std;

class Book
{
	char* title;
	int price;
public:
	Book(const char* title, int price);
	Book(Book& b);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "Won" << endl; }
};

Book::Book(const char* title, int price) 
{
	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::Book(Book& b) 
{ // 복사 생성자
	this->title = new char[strlen(b.title) + 1];
	strcpy(this->title, b.title);
	this->price = b.price;
}

Book::~Book() 
{
	delete[] title;
}

void Book::set(const char* title, int price) 
{
	delete[] this->title;
	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);
	this->price = price;
}

int main()
{
	Book cpp("C++", 10000);
	Book java = cpp; // java(cpp)
	java.set("Java", 12000);
	cpp.show();
	java.show();

	return 0;
}