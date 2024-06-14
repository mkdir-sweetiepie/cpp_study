#include <tuple>
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

tuple<string, char, double> student(int id)
{
	if (id == 0) return make_tuple("Tom", 'A', 3.8);
	if (id == 1) return make_tuple("Jain", 'B', 3.2);
	if (id == 2) return make_tuple("John", 'C', 2.5);

	throw invalid_argument("undefined id");
}

int main()
{
	auto student0 = student(0);
	cout << "ID: 0, "
		<< "Name: " << get<0>(student0) << endl
		<< "Grade: " << get<1>(student0) << endl
		<< "GPA: " << get<2>(student0) << endl << endl;

	auto [name, grade, gpa] = student(1);

	cout << "ID: 2, "
		<< "Name" << name << endl
		<< "Grade" << grade << endl
		<< "GPA: " << gpa << endl << endl;

}
