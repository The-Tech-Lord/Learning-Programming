#include <stdio.h>
#include <stdlib.h>

void showPrimes(int n) {
	for (int i = 2; i <= n; i++) {
		int Prime = 1;
		for (int ii = 2; ii < i; ii++) {
			printf("Iterator 1: %d Iterator 2: %d\n", i, ii);
			if (i % ii == 0) {
				Prime = 0;
				break;
			}
		}
		if (Prime == 1)
			printf("Prime: %d\n", i);
		else
			printf("%d is not Prime\n", i);
	}
}

int main() {
	showPrimes(50);
}
