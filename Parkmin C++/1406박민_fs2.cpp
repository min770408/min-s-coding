#include <iostream>
#include <fstream>	
#include <cstdlib>
using namespace std;

int main()
{
	ofstream hansomeguy{ "number.txt" };

	if (!hansomeguy) {
		cout << "파일 오픈 실패. " << endl;
		exit(1);
	}

	for (int i = 0; i <= 10; i++) {
		hansomeguy << i << " ";
	}

	return 0;
}