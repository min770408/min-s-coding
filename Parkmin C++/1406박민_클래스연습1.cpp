#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Airplane
{
private:
	string name;
	int capacity;
	int speed;
public:
	Airplane() : capacity{ 0 }, name{ 0 }, speed{ 0 } {};
	Airplane(string n, int c, int s) : name{ n }, capacity{ c }, speed{ s } {};

	void Print() {
		cout <<	name << endl << capacity << endl << speed << "Km / h" << endl;
	}
};

int main()
{
	Airplane A{ "보잉787", 900, 300 };
	Airplane A2{ "에어버스 350", 400, 1000 };

	cout << "Airplane #1" << endl;
	A.Print();
	cout << endl;
	cout << "Airplane #2" << endl;
	A2.Print();
	cout << endl;

	system("pause");
	return 0;
}