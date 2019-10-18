#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable 4477)
int sus[10] = { 69, 10, 39, 2, 16, 8, 31, 22, 3, 1};

void BubbleSort() {
	int temp;

	for (int i = 9; i > 0; i--) {
		for (int j = 0; j < 9; j++) {
			if (sus[j] > sus[j + 1]) {
				temp = sus[j];
				sus[j] = sus[j + 1];
				sus[j + 1] = temp;
			}
		}
		for (int i = 0; i < 10; i++) {
			printf("%d ", sus[i]);
		}
		printf("\n");
	}

}

int main()
{
	printf("정렬할 원소 : ");

	BubbleSort();


	system("pause");
	return 0;
}