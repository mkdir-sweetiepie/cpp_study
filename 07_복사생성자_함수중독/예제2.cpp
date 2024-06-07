#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Person 
{ // Person 클래스 선언
	char* name;
	int id;
public:
	Person(int id, const char* name);
	Person(Person& person); // 복사 생성자
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) 
{ // 생성자
	this->id = id;
	int len = strlen(name); // name의 문자 개수
	this->name = new char[len + 1]; // name 문자열 공간 핟당
	strcpy(this->name, name); // name에 문자열 복사
}

Person::Person(Person& person)
{
	this->id = person.id; // id 값 복사
	int len = strlen(person.name); // name의 문자 개수
	this->name = new char[len + 1]; // name을 위한 공간 핟당
	strcpy(this->name, person.name); // name의 문자열 복사
	cout << "Copy constructor called " << this->name << endl;
}

Person::~Person() 
{ // 소멸자
	if (name) // 만일 name에 동적 할당된 배열이 있으면
		delete[] name; // 동적 할당 메모리 반환
}

void Person::changeName(const char* name) 
{
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main()
{
	Person father(1, "Kitae"); // father 객체 생성
	Person daughter(father); // daughter 객체 복사 생성. 복사생성자호출

	cout << "daughter object created ----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace"); // daughter의 이름을 "Grace"로 변경
	cout << "name changed to Grace----" << endl;
	father.show();
	daughter.show();

	return 0; //daughter, father 객체 소멸
}