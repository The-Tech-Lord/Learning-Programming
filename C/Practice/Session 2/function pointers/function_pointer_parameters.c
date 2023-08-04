#include <stdio.h>
#include <stdlib.h>

// This program is legit wack
void addition(void (*ultimate)(int, int), int a, int b) {
	for(int i = 0; i < 10; i++) {
		a = b + 1 - i;
		b = b + a - 1;
		(*ultimate)(a, b);
	}
}

void ultimateFunction(int a, int b) {
	printf("Number A: %d\t Number B: %d\n", a, b);
}

int main() {
	addition(ultimateFunction, 15, 10);
}