#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Person
{
public:
	Person();
	~Person();
private:
	string name;
	string address;
	string tellnumber;
};

class Customer : public Person
{
public:
	Customer();
	~Customer();
private:
	string personid;
	string personmilage;
};
