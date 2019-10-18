#include <stdio.h>
#include <cstdlib>
#define SIZE 10
int arr[10] = {69, 10, 30, 2, 16, 8, 31, 22};

void SelectionSort() {
	int min, temp;

	for (int i = 0; i < 9; i++) {
		min = i;
		for (int j = i + 1; j < 10; j++) {
			if (arr[j] > arr[min]) {
				min = j;
			}

			temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
			for (int i = 0; i < 10; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n");
		}
	}
}

int main()
{
	printf("정렬할 원소 : ");

	SelectionSort();

	system("pause");
	return 0;
}