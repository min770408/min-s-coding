#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

template <typename T>
T sum(T a, T b) {
	return a + b;
}

int main()
{
	int a = 1, b = 2;

	double d1 = 2.2;
	double d2 = 3.3;

	string s1 = "Parkmin ";
	string s2 = "PARKMIN";

	cout << "int гу : " << sum<int>(a, b) << endl;
	cout << "double гу : " << sum<double>(d1, d2) << endl;
	cout << "string гу : " << sum<string>(s1, s2) << endl;

	system("pause");
	return 0;
}