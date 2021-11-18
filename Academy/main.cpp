#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using namespace std;

class Human
{
	string last_name;
    string first_name;
	unsigned int age;
public:
	const string& get_last_name() const
	{
		return last_name;
	}
	const string& get_first_name() const
	{
		return first_name;
	}
	unsigned int get_age() const
	{
		return age;
	}
	void set_last_name(const string& last_name)
	{
		this->last_name = last_name;
	}
	void set_first_name(const string& first_name)
	{
		this->first_name = first_name;
	}
	void set_age(unsigned int age)
	{
		this->age = age;
	}
	 // Constructor:
	Human(const string& last_name, const string& first_name, unsigned int age)
	{
		set_last_name(last_name);
		set_first_name(first_name);
		set_age(age);
		cout << "HCONSTRUCTOR:\t" << this << endl;
	}
	~Human()
	{
		cout << "HDESTRUCTOR:\t" << this << endl;
	}
	//      METHODS:
	virtual void print()const
	{
		cout << last_name << " " << first_name << " " << age << " ���.\n";
	}
};
class Student :public Human
{
	string speciality;
	string group;
	double rating;
public:
	const string& get_speciality() const
	{
		return speciality;
	}
	const string& get_group()const
	{
		return group;
	}
	double get_rating()const
	{
		return rating;
	}
	void set_speciality(const string& speaciality)
	{
		this->speciality = speciality;
	}
	void set_group(const string& group)
	{
		this->group = group;
	}
	void set_rating(double rating)
	{
		this->rating = rating;
	}
	// Constructor:
	Student(const string& last_name, const string& first_name, unsigned int age,
	     	const string& speciality, const string& group, double rating
	):Human(last_name, first_name, age)
	{
		set_speciality(speciality);
		set_group(group);
		set_rating(rating);
		cout << "SCONSCTRUCTOR:\t" << this << endl;
	}
	~Student()
	{
		cout << "SDESTRUCTOR:\t" << this << endl;
	}
	// Methods:
	void print()const
	{
		Human::print();
		cout << "�������������: " << speciality << ", ������: " << group << ", ������������: " << rating << endl;
	}

};

class Teacher :public Human
{
	string speciality;
	unsigned int experience;
public:
	const string& get_speciality()const
	{
		return speciality;
	}
	unsigned int get_experience()const
	{
		return experience;
	}
	void set_speciality(const string& speciality)
	{
		this->speciality = speciality;
	}
	void set_experience(unsigned int experience)
	{
		this->experience = experience;
	}
	Teacher
	(
		const string& last_name, const string& first_name, unsigned int age,
		const string& speciality, unsigned int experience
	) :Human(last_name, first_name, age)
	{
		set_speciality(speciality);
		set_experience(experience);
		cout << "TConstructor:\t" << this << endl;
	}
	~Teacher()
	{
		cout << "TDestructor:\t" << this << endl;
	}
	void print()const
	{
		Human::print();
		cout << "�������������: " << speciality << ", ���� ������: " << experience << " ���." << endl;
	}
};
/*class Graduate :public Student
{
	string subject;
	double completedwork;
public:
	const string& subject() const
	{
		return subject;
	}
	void set_subject(const string& subject)
	{
		this->subject = subject;
	}
	// Constructor:
	Graduate(const string& last_name, const string& first_name, unsigned int age,
		const string& speciality, const string& group, double rating,
		const string& subject
	) :Student(last_name, first_name, age,speciality, group, rating)
	{
		set_subject(subject);
		cout << "GCONSCTRUCTOR:\t" << endl;
	}
	~Graduate()
	{
		cout << "GDESTRUCTOR:\t" << endl;
	}
	// Methods:
	void print()const
	{
		Student::print();
		cout << "���� ��������� ������: " << subject << endl;
	}
};
*/
//#define inheritance
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
#ifdef DEBUG
	Graduate g("Dickson", "J", 25, "Cryminalistic", "Graduate", "FF_03", 80, "How to catch Heisenberg");
	g.print();
#endif // DEBUG  
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

}