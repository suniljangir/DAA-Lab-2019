
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

  void bubbleSort(int *data, int n) {
	int i, temp;
	if (n > 0) {
		for (i = 1; i < n; i++) {
			if (data[i - 1] > data[i]) {
				temp = data[i];
				data[i] = data[i - 1];
				data[i - 1] = temp;
			}
		}
		bubbleSort(data, n - 1);
	}
	return;
  }
  void main() {
  clrscr();
  int i, n, *data;

	printf("Enter the number of inputs:");
	scanf("%d", &n);

	data = (int *) malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		printf("data[%d]: ", i);
		scanf("%d", &data[i]);
	}

	bubbleSort(data, n);

	printf("Sorted array:\n");
	for (i = 0; i < n; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
	getch();
  }