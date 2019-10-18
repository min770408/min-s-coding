#include <iostream>
#include <cstdlib>
using namespace std;

void TestFunc(int &rparam) {
	rparam = 100;
}


int main()
{
	int ndata = 0;

	TestFunc(ndata);
	cout << ndata << endl;

	system("pause");
	return 0;
}