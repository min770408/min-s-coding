#include <iostream>
#include <fstream>	
#include <cstdlib>
using namespace std;

int main()
{
	ofstream hansomeguy{ "number.txt" };

	if (!hansomeguy) {
		cout << "���� ���� ����. " << endl;
		exit(1);
	}

	for (int i = 0; i <= 10; i++) {
		hansomeguy << i << " ";
	}

	return 0;
}