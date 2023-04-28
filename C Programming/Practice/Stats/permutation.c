#include <stdio.h>

extern int factorial(int a);
extern int per_com_check();

#define ARRAY_HEIGHT 2
#define ARRAY_LENGTH 10


unsigned long permutation() {
	int n = 0, r = 0;
	char numbers[ARRAY_HEIGHT][ARRAY_LENGTH + 1];

	per_com_check(numbers, &n, &r);
	printf("n: %d\tr: %d\n", n, r);

	int result = factorial(n)/factorial(n - r);
	return result;
}
