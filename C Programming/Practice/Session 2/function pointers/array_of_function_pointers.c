#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }

int main() {
	int (*functionPTRArray[])(int, int) = { &add, &subtract, &multiply, &divide };
	int ch;

	printf("Please enter a number: ");
	scanf("%d", &ch);

	printf("%d\n", (*functionPTRArray[ch])(15, 10));
}