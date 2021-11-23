#pragma once
#include"Human.h"
#include"Student.h"
class Graduate :public Student
{
	string diplomat;
public:
	const string& get_diplomat()const;
	void set_diplomat(const string& diplomat);
	// Constructors:
	Graduate
	(
		const string& last_name, const string& first_name, unsigned int age,
		const string& speciality, const string& group, double rating, const string& diplomat
	);
	~Graduate();
	// Methods:
	void print()const;
};
