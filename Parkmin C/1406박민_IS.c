/*#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

int main()
{
	int arr[MAX_SIZE] = { 69, 10, 30, 2, 16, 8, 31, 22, 13, 31 };
	int temp, key, j;

	printf("정렬할 원소 : ");

	for (int k = 0; k < MAX_SIZE; k++) {
		printf("%d ", arr[k]);
	}

	printf("\n");
	printf("<<<<< 삽입 정렬 수행 >>>>> \n");

	for (int i = 0; i < MAX_SIZE; i++) {
		key = arr[i];
		j = i - 1;

		if (j >= 0 && key < arr[j])
		{
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}

		for (int parkmin = 0; parkmin < MAX_SIZE; parkmin++) {
			printf("%d ", arr[parkmin]);
		}

	}

	for (int parkmin = 0; parkmin < MAX_SIZE; parkmin++) {
		printf("%d ", arr[parkmin]);
	}


	system("pause");
	return 0;
}*/