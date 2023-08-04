#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
	return a + b;
}
int multiply(int a, int b) {
	return a * b;
}

int ultimateFunction(int (*functionPTR1)(int, int), int (*functionPTR2)(int, int)) {
	static int counter;
	for(int i = 0; i < 10; i++) {
		counter = counter + functionPTR1(5, 6); // Calls the function
		counter = counter + functionPTR2(2, 3);
	}
	return counter;
}

int main() {
	printf("%d\n", ultimateFunction(add, multiply));
}