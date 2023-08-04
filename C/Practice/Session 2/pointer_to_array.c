#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[] = { 1, 2, 3, 4, 5 };
	int *ptr = array;
	printf("%d\n", *(ptr + 4)); // Another way of using pointers
}