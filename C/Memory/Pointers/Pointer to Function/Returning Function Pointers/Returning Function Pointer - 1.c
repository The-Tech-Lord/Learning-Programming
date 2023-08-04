#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b) {
	printf("%d\n", (a + b));
}
int subtraction(int a, int b) {
	printf("%d\n", (a - b));
}
int multiplication(int a, int b) {
	printf("%d\n", (a * b));
}
int division(int a, int b) {
	printf("%d\n", (a / b));
}

int (*functionPTR(const char character))(int, int) {
	switch (character) {
		case '+': return addition;
		case '-': return subtraction;
		case 'x': return multiplication;
		case '/': return division;
	}
}

int main() {
	functionPTR('/')(10, 5);
}