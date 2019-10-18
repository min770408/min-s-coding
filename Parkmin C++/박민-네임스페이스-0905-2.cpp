#include <iostream>
#include <cstdlib>
using namespace std;

namespace TEST
{
	int g_data = 100;

	void TestFunc(void) {
		cout << "TestFunc()" << endl;
	}
}

using namespace TEST;

int main()
{
	TestFunc();
	cout << g_data << endl;

	system("pause");
	return 0;
}