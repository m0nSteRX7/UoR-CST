// EX4_3.CPP
// Клас Person - данни за лице
//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

class Person
{
public:
	Person(void);
//	Person(char*, unsigned int);
	Person(string, int);
	Person(Person&);
	~Person(void);
	void display(void);
private:
//	char* name;
	string name;
	int age;
}; // end Person

void main(void)
{
	
		Person john;
		john.display();

		Person mary("mary", 456);
		mary.display();

		Person alfa(john);
		alfa.display();
	

	Person* ptr;
	ptr = new Person[5];
	for (int i = 0; i < 5; i++)
		(ptr + i)->display();

	delete[] ptr;

} // end main


// дефиниции на методите
// конструктор по подразбиране
Person::Person(void)
{
	cout << "Begin default constructor" << endl;
//	char buf[20];
	cout << endl << "Name= ";
//	cin >> buf;
	cin >> name;
//	name = new char[strlen(buf) + 1];	// заделяне на памет
//	strcpy(name, buf);
	cout << "Age = ";
	cin >> age;
} // end setData

// инициализиращ конструктор
//Person::Person(char* s, unsigned int num)
Person::Person(string s, int num)
{
	cout << "Begin ini constructor" << endl;
//	name = new char[strlen(s) + 1];	// заделяне на памет
//	strcpy(name, s);
	name = s;
	age = num;
}

// копиращ конструктор
Person::Person(Person& objPer)
{
	cout << "Begin Copy constructor" << endl;
//	name = new char[strlen(objPer.name) + 1];
//	strcpy(name, objPer.name);
	name = objPer.name;
	age = objPer.age;
}

// деструктор
Person::~Person(void)
{
//	delete name;
	cout << "End Person" << endl;
}

void Person::display(void)
{
	cout << endl << "Danni za liceto" << endl;
	cout << "Name = " << name << " Age = " << age << endl;
} // end display