#include <stdio.h>
#include <stdlib.h>

int staticFunction() {
	static int counter = 1;
	counter++;
	return counter;
}

int main() {
	for (int i = 0; i < 10; i++)
		printf("%d\n", staticFunction());
}
