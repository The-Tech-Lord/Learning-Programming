#include <stdio.h>
#include <stdlib.h>

int main() {
	enum Enums {
		ONE,
		TWO,
		THREE
	};
	enum Enums enerm = ONE;
	printf("%d\n", ONE);
	printf("%d\n", TWO);
	printf("%d\n", THREE);
	printf("%d\n", enerm);
}