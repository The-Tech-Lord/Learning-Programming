#include <stdio.h>
#include <stdlib.h>

void aFunction(int a, int b) {
	printf("%d\n", a + b);
}

int main() {
	int a = 15; int b = 10;
	void (*functionPTR)(int, int) = &aFunction;
	functionPTR(a, b);
}