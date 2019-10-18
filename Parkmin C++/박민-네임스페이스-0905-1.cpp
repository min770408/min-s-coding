#include <iostream>
#include <cstdlib>
using namespace std;

namespace TEST
{
	int g_data = 100;

	void TestFunc(void) {
		cout << "TEST::TestFunc()" << endl;
	}
}

int main()
{
	TEST::TestFunc();

	cout << TEST::g_data << endl;

	system("pause");
	return 0;
}