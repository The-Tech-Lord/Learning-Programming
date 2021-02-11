#include <stdio.h>
#include <stdlib.h>

int addition(int number1, int number2, int number3) { return number1 + number2 + number3; }
float average(int *array, int SIZE) {
	float sum = 0;
	for (int i = 0; i < SIZE; i++) { sum += *(array + i); }
	return sum / SIZE;
}

// This is really just to review, ain't meant to be practical!
void compound_function(int add1, int add2, int add3, int (*functionPointer1)(int, int, int), float (*functionPointer2)(int*, int), int *array, int SIZEa) {
	printf("%f\n", functionPointer1(add1, add2, add3) + functionPointer2(array, SIZEa));
}

int main() {
	int arrayNumbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	compound_function(5, 7, 3, addition, average, arrayNumbers, 10);
}