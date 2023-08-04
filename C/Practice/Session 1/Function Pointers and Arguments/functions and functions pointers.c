#include <stdio.h>
#include <stdlib.h>

int addition(int parameter1, int parameter2) {
	return parameter1 + parameter2;
}
int subtraction(int parameter3, int parameter4) {
	return parameter3 - parameter4;
}
int multiplication(int parameter5, int parameter6) {
	return parameter5 * parameter6;
}
int division(int parameter7, int parameter8) {
	return parameter7 / parameter8;
}
int modulo(int parameter9, int parameter10) {
	return parameter9 % parameter10;
}


void function(int integer, int integer2) {
	printf("%d\n", integer + integer2);
}

int main() {
	// Array of Function Pointers
	int a = 15, b = 10;
	unsigned int ch;
	int (*functionPointerArray[])(int, int) = { &addition, &subtraction, &multiplication, &division, &modulo };

	printf("Please choose a number: ");
	scanf("%d", &ch);

	printf("%d\n", (*functionPointerArray[ch])(a, b) );

	// Regular Function Pointer
	void (*functionPointer)(int, int) = &function;
	(*functionPointer)(5, 6);
}