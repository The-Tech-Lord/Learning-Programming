#include <stdio.h>
#include <stdlib.h>

int main() {
	int *a;
	int b;

	a = &b;
	b = 5;
	printf("%d\n", *a);
}
