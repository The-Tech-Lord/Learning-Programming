#include <stdio.h>
#include <stdlib.h>

int main() {
	int num[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *ptr = &num[0];

	for (unsigned int i = 0; i < (sizeof(num) / sizeof(num[0])); i++)
		printf("Address: %p \t Value: %d\n", ptr + i, *(ptr + i));
}
