#include <iostream>
#include <cstdlib>
#define DEFAULT_FARE 1000
using namespace std;

class Person
{
protected:
	unsigned int m_nFare = 0;
public:
	Person() { }
	virtual ~Person() {
		cout << "virtual ~Person()" << endl;
	}

	virtual void CalcFare() = 0;

	virtual unsigned int GetFare() {
		return m_nFare;
	}
};

class Baby : public Person
{
public:
	virtual void CalcFare() {
		m_nFare = 0; 
	}
};

class Child : public Person
{
public:
	virtual void CalcFare() {
		m_nFare = DEFAULT_FARE * 50 / 100;
	}
};

class Teen : public Person
{
public:
	virtual void CalcFare() {
		m_nFare = DEFAULT_FARE * 75 / 100;
	}
};

class Adult : public Person
{
	virtual void CalcFare() {
		m_nFare = DEFAULT_FARE;
	}
};

int main()
{
	Person* arrList[3] = { 0 };
	int Age;

	for (auto &person : arrList) {
		cout << "나이를 입력하세요: ";

		cin >> Age;
		if (Age < 8) {
			person = new Baby;
		}

		else if (Age < 14) {
			person = new Child;
		}
		
		else if (Age < 20) {
			person = new Teen;
		}

		else {
			person = new Adult;
		}

		person->CalcFare();
	}

	for (auto person : arrList) {
		cout << person->GetFare() << "원" << endl;
	}

	for (auto person : arrList) {
		delete person;
	}

	system("pause");
	return 0;
}