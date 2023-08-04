#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int a = 60; /* 0011 1100 */
	unsigned int b = 12; /* 0000 1100 */
	int c = 0;

	c = a & b;
	printf("Line 1 equals: %d\n", c);
	/* 0011 1100 */
	/* 0000 1100 */
	/* 0000 1100 */

	c = a | b;
	printf("Line 2 equals: %d\n", c);
	/* 0011 1100 */
	/* 0000 1100 */
	/* 0011 1100 */

	c = a ^ b;
	printf("Line 3 equals: %d\n", c);
	/* 0011 1100 */
	/* 0000 1100 */
	/* 0011 0000 */

	c = ~a;
	printf("Line 4 equals: %d\n", c);
	/* 0011 1100 */
	/* 1100 0011 */
}