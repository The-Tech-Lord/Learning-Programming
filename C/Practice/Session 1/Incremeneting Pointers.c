#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[] = { 1, 2, 3, 4, 5 };
	int *ptr = &array[0];

	for (unsigned int i = 0; i < (sizeof(array) / sizeof(int)); i++) {
		printf("%d\n", *ptr);
		ptr++;
	}
}