#include <stdio.h>
#include <cstdlib>

void ShellSort(int list[], int n)
{
	for (int interval = n / 2; interval > 0; interval = interval / 2) {
		if (interval % 2 == 0) {
			interval++;
		}

		for (int i = 0; i < interval; i++) {
			InsertionSort(list, i, n - 1, interval);
		}
	}
}

void InsertionSort(int list[], int first, int last, int interval) 
{
	int i, j, key;

	for (i = first + interval; i < last; i = i + interval) {
		key = list[i];
		for (j = 1 - interval; j >= first && key < list[j]; j = j - interval) {
			list[j + interval] = list[i];	
		}

		list[j + interval] = key;
	}
}

int main()
{
	int arr[10] = { 69, 10, 30, 2, 16, 8, 31, 22, 13, 31 };

	ShellSort(arr, 10);

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	system("pause");
	return 0;
}