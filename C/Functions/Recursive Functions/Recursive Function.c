#include <stdio.h>
#include <stdlib.h>

int RecursiveFunction(int number) {
	if (number == 1)
		return 1;
	else
		return number * RecursiveFunction(number - 1);
}

int main() {
	printf("%d\n", RecursiveFunction(10));
}
