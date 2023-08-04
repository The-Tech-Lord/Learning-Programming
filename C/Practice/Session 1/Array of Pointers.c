#include <stdio.h>
#include <stdlib.h>

int ARRAY_SIZE = 5;

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int *arrPTR[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++) { arrPTR[i] = &arr[i]; }
	for (int k = 0; k < ARRAY_SIZE; k++) { printf("Address: %p\t Value: %d\n", arrPTR[k], *arrPTR[k]); }
}