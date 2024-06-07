#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Person 
{ // Person Ŭ���� ����
	char* name;
	int id;
public:
	Person(int id, const char* name);
	Person(Person& person); // ���� ������
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) 
{ // ������
	this->id = id;
	int len = strlen(name); // name�� ���� ����
	this->name = new char[len + 1]; // name ���ڿ� ���� ����
	strcpy(this->name, name); // name�� ���ڿ� ����
}

Person::Person(Person& person)
{
	this->id = person.id; // id �� ����
	int len = strlen(person.name); // name�� ���� ����
	this->name = new char[len + 1]; // name�� ���� ���� ����
	strcpy(this->name, person.name); // name�� ���ڿ� ����
	cout << "Copy constructor called " << this->name << endl;
}

Person::~Person() 
{ // �Ҹ���
	if (name) // ���� name�� ���� �Ҵ�� �迭�� ������
		delete[] name; // ���� �Ҵ� �޸� ��ȯ
}

void Person::changeName(const char* name) 
{
	if (strlen(name) > strlen(this->name))
		return;
	strcpy(this->name, name);
}

int main()
{
	Person father(1, "Kitae"); // father ��ü ����
	Person daughter(father); // daughter ��ü ���� ����. ���������ȣ��

	cout << "daughter object created ----" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace"); // daughter�� �̸��� "Grace"�� ����
	cout << "name changed to Grace----" << endl;
	father.show();
	daughter.show();

	return 0; //daughter, father ��ü �Ҹ�
}