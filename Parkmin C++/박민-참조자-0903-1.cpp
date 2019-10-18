#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int ndata = 10;

	int &ref = ndata;

	ref = 20;
	cout << ndata << endl;


	int *pnewdata = &ndata;
	*pnewdata = 30;
	cout << ndata << endl;

	system("pause");
	return 0;
}