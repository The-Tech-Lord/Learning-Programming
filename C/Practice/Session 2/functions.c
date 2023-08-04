#include <stdio.h>
#include <stdlib.h>

void aFunction(int a, int b) {
	printf("aFunction: %d\n", a + b);
}
int aFunction2(int a, int b) {
	int future = a + b;
	return future;
}
float aFunction4(int a, int b) {
	float futureLife = a / b;
	return futureLife;
}
double aFunction5(int a, int b) {
	double something = a / b;
	return something;
}
int* aPTRFunction(int *pointer, int something, int something2) {
	if (something == 15) {
		pointer = &something;
	} else if (something2 < something) {
		pointer = &something2;
	}
	return pointer;
}

int main() {
	int a = 15;
	int b = 10;
	int *PTR = NULL;

	printf("Address: %p\n", aPTRFunction(PTR, a, b));
	aFunction(a, b);
	printf("%d\n", aFunction2(a, b));
	printf("%f\n", aFunction4(a, b));
	printf("%f\n", aFunction5(a, b));
}