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
		cout << "이름: " << endl << "출생연도" << endl;
	}
};

class Student : public Person 
{
protected:
	string university;
public:
	Student(string name2, int by1, string uni) : university{ uni }, Person{name2, by1} {}

	void Print() {
		cout << "이름: " << name << "출생: " << BirthYear << "대학교: " << university <<endl;
	}
};

int main()
{
	Student s("홍길동", 2019, "한국애니대학교");
	s.Print();

	system("pause");
	return 0;
}