/*#include <iostream>
#include <string>	
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, string>> v1;

bool compare(pair<int, string> a, pair<int, string> b) {
	if (a.first < b.first) {
		return true;
	}

	else if (a.first == b.first) {
		return false;
	}

	return false;
}

void Print() {
	stable_sort(v1.begin(), v1.end(), compare);
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i].first << " " << v1[i].second << "\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	v1.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> v1[i].first >> v1[i].second;
	}

	Print();

	system("pause");
	return 0;
}*/