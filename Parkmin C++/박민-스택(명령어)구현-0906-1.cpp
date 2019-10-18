#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> v1;
	string order;
	int SuOfOrder;
	int num1;
	
	cin >> SuOfOrder;

	for (int i = 0; i < SuOfOrder; i++) {
		cin >> order;

		if (order == "push") {
			cin >> num1;
			v1.push_back(num1);
		}
		
		if (order == "pop") {
			cout << v1.pop_back << endl;

			if (v1.empty) {
				cout << -1 << endl;
			}
		}

		else if (order == "size") {
			cout << v1.size << endl;
		}

		if (order == "empty") {
			cout << v1.empty << endl;
		}

		if (order == "top") {
			cout << v1.front << endl;

			if (v1.empty) {
				cout << -1 << endl;
			}
		}
	}

	return 0;
}