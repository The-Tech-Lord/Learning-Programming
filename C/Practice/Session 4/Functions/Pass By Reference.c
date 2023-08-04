#include <stdio.h>
#include <stdlib.h>

int GENIUS(int *x, int *y) {
	int sum = *x + *y;
	return sum;
}

int main() {
	int five = 5;
	int ten = 10;

	int add = GENIUS(&five, &ten);
	printf("%d\n", add);
}
