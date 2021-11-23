#include <iostream>
#include"Human.h"
#include"Student.h"
#include"Teacher.h"
#include"Graduate.h"
void main()
{
	setlocale(LC_ALL, "");
#ifdef inheritance
	Human h("Montana", "Antonio", 35);
	h.print();
	Student s("Pickman", "Jessie", 22, "Chemistry", "WW_01", 98);
	s.print();
	Teacher t("Loockman", "Jason", 45, "Teacher", 15);
	t.print();
	Graduate g("Dickson", "J", 25, "Cryminalistic", "Graduate", "FF_03", 80, "How to catch Heisenberg");
	g.print(); 
#endif // inheritance
	Human* group[] =
	{
		new Student("Pickman", "Jessie", 22, "Chemistry", "WW_01", 98),//upcast
	new Student("Loockman", "Jason", 45, "Teacher", "Vice", 90),//upcast
	new Teacher("White","Walter", 50, "Chemistry", 25),//upcast
	new Student("Diaz", "Ricardo", 55, "Weapons distrubution","Vice", 80),//upcast
	new Teacher("Einstein", "Albert",142,"Astronomy", 120)//upcast
	};
	for (int i = 0; i < sizeof(group) / sizeof(Human*);i++)
	{
		cout << "\n---------------------------------------\n";
			group[i]->print();
	}
	cout << "\n----------------------------------------\n";

	for (int i = 0; i < sizeof(group) / sizeof(Human*); i++)
	{
		delete[] group[i];
	}

}