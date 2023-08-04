#include <stdio.h>
#include <stdlib.h>

void function1(int a) {
	printf("%d\n", a);
}

void counter(void (*functionPointer)(int)) {
	for (int i = 0; i < 5; i++) {
		// Passes in numbers into `function1` parameter and
		// function1 will be called and run the function 
		(*functionPointer)(i);
	}
}

int main() {
	counter(function1);
}