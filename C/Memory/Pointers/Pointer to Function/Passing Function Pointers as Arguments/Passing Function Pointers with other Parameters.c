#include <stdio.h>
#include <stdlib.h>

void printArr(int b) { printf("%d\n", b); }
// The function takes takes in a function and an array and
// Assigns values to the array
void striter(int *arr, void (*functionPointer)(int)) {
	for (int g = 0; g < 10; g++) {
		*(arr + g) = g;
		functionPointer(arr[g]);
	}
}

int main() {
	int arrOfNumbers[10];
	striter(arrOfNumbers, printArr);
}