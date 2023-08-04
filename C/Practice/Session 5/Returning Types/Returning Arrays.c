#include <stdio.h>
#include <stdlib.h>

int* returnArray(int *arr, int size) {
	int *array = (int *)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++)
		*(array + i) = *(arr + i);
	return array;
}

int main() {
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++) {
		printf("[%d]: %d\n", i, *(returnArray(array, 10) + i));
	}
}
