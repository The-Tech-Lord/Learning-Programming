#include <stdio.h>
#include <stdlib.h>

int main() {
	// Regular Array
	int array1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("Element of array 0: %d\n", array1[0]); // Prints out element at index 0

	// Pointer to a regular array
	for (int j = 0; j < 10; j++) { printf("%d\n", *(array1 + j)); }

	// 2D Dimensional Array
	int multiDimensionalArray[2][10] = {
		{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 },
		{ 11, 12, 13, 14, 15, 16, 17, 18, 19, 20}
	};
	for (int k = 0; k < 2; k++) {
		// Pointer to a 2D array
		for (int l = 0; l < 10; l++) { printf("Multidmensional Array Values: %d\n", *(*(multiDimensionalArray + k) + l) ); }
	}

	// 3D Dimensional Array
	int three_dimensional_array[2][3][5] = {
		{
			{ 1, 2, 3, 4, 5 },
			{ 6, 7, 8, 9, 10 },
			{ 11, 12, 13, 14, 15 }
		},
		{
			{ 16, 17, 18, 19, 20 },
			{ 21, 22, 23, 24, 25 },
			{ 26, 27, 28, 29, 30 }
		}
	};
	for (int t = 0; t < 2; t++) {
		for (int a = 0; a < 3; a++) {
			// Pointer to a 3D array
			for (int g = 0; g < 5; g++) { printf("3D Dimensional Array: %d\n", *(*(*(three_dimensional_array + t) + a) + g) ); }
		}
	}
}