#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Person
{
protected:
	int BirthYear;
	string name;
public:
	Person() : name{" "}, BirthYear {0} {}
	Person(string name1, int BY) : name{name1}, BirthYear{ BY } {}

	void Print() {
		cout << "�̸�: " << endl << "�������" << endl;
	}
};

class Student : public Person 
{
protected:
	string university;
public:
	Student(string name2, int by1, string uni) : university{ uni }, Person{name2, by1} {}

	void Print() {
		cout << "�̸�: " << name << "���: " << BirthYear << "���б�: " << university <<endl;
	}
};

int main()
{
	Student s("ȫ�浿", 2019, "�ѱ��ִϴ��б�");
	s.Print();

	system("pause");
	return 0;
}