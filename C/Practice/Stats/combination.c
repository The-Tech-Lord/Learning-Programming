#include <stdio.h>
extern int factorial(int a);
extern int per_com_check();

#define ARRAY_HEIGHT 2
#define ARRAY_LENGTH 10

int n = 0, r = 0;
char numbers[ARRAY_HEIGHT][ARRAY_LENGTH + 1];

int combination() {
	per_com_check(numbers[ARRAY_HEIGHT][ARRAY_LENGTH], n, r);

	int result = factorial(n)/(factorial(r) * factorial(n - r));
	return result;
}
