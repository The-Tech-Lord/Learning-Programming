#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int (*function(const char character))(int, int) {
	switch(character) {
		case '+': return add;
		case '-': return subtract;
		case '*': return multiply;
		case '/': return divide;
	}
	return 0;
}

int main() {
	printf("Result: %d\n", function('/')(15, 10));
}