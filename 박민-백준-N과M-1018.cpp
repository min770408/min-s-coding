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
	/*int arr1[ARR_SIZE] = { 0, }; // 1부터 N
	int arr2[10] = { 0, }; //1부터 N까지의 요소를 중복없이 배열하여 저장
	int M, N; // N은 1부터 N까지 의 수, M은 길이.

	cin >> N >> M;

	if (M >= N) {
		return 0;
	}*/
	
	cin >> N >> M;

	func(0);
	return 0;
}
