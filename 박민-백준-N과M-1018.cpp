#include <iostream>
#include <cstdlib>
#include <vector>
#define ARR_SIZE 9
using namespace std;
int N, M;
int arr[ARR_SIZE];
bool visited[ARR_SIZE];

void func(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i <= N; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[cnt] = i;
			func(cnt + 1);
			visited[i] = false;
		}
	}
}

int main()
{
	/*int arr1[ARR_SIZE] = { 0, }; // 1���� N
	int arr2[10] = { 0, }; //1���� N������ ��Ҹ� �ߺ����� �迭�Ͽ� ����
	int M, N; // N�� 1���� N���� �� ��, M�� ����.

	cin >> N >> M;

	if (M >= N) {
		return 0;
	}*/
	
	cin >> N >> M;

	func(0);
	return 0;
}
