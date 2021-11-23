#include"Graduate.h"
#include"Student.h"

const string& Graduate::get_diplomat()const
{
	return diplomat;
}
void Graduate::set_diplomat(const string& diplomat)
{
	this->diplomat = diplomat;
}
// Constructors:
Graduate::Graduate
(
	const string& last_name, const string& first_name, unsigned int age,
	const string& speciality, const string& group, double rating, const string& diplomat
) :Student(last_name, first_name, age, speciality, group, rating)
{
	set_diplomat(diplomat);
	cout << "GConstructor:\t" << this << endl;
}
Graduate::~Graduate()
{
	cout << "GDestructor:\t" << this << endl;
}
// Methods:
void Graduate::print()const
{
	Student::print();
	cout << "Тема дипломной работы: " << diplomat << endl;
}