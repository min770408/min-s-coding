#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Movie
{
private:
	string name;
	string title;
	double rating;
public:
	Movie() : title{ 0 }, name{ 0 }, rating{ 0 } {};
	Movie(string n, string t, double r) : name{ n }, title{ t }, rating{ r } {};

	void Print() {
		cout << title << endl << name << endl << rating << endl;
	}
};

int main()
{
	Movie M{"타이타닉", "제임스 카메론", 9.5};
	Movie M2{ "지오스톰", "딘 데블린", 8.34 };

	cout << "Movie #1" << endl;
	M.Print();
	cout << endl;
	cout << "Movoe #2" << endl;
	M2.Print();
	cout << endl;

	system("pause");
	return 0;
}