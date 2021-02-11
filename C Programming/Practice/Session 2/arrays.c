#include <stdio.h>
#include <stdlib.h>

int main() {
	int arrayNUM[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for(unsigned int i = 0; i < (sizeof(arrayNUM) / sizeof(int)); i++) {
		printf("arrayNUM[%d] Value: %d\n", i, arrayNUM[i]);
	}
	printf("\n");

	int arrayNUM2Dimen[2][10] = {
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
		{ 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }
	};
	for(int i = 0; i < 2; i++) {
		for(int k = 0; k < 10; k++) {
			printf("arrayNUM2Dimen[%d][%d] Value: %d\n", i, k, arrayNUM2Dimen[i][k]);
		}
	}
	printf("\n");

	int arrayNUMMultiDimen[3][15];
	for(int i = 0; i < 3; i++) {
		for (int k = 0; k < 15; k++) {
			arrayNUMMultiDimen[i][k] = i + k + 10;
			printf("arrayNUMMultiDimen[%d][%d] Value: %d\n", i, k, arrayNUMMultiDimen[i][k]);
		}
	}
	printf("\n");

	int *arrayPTR = (int *)malloc(5 * sizeof(int));
	for(unsigned int i = 0; i < 5; i++) {
		arrayPTR[i] = i + 5;
		printf("arrayPTR[%d] Value: %d\n", i, arrayPTR[i]);
	}
}