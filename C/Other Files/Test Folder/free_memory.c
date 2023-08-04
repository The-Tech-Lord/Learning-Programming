#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr = (int *)malloc(sizeof(int) * 5);
	for(int i = 0; i < 5; i++) {
		ptr[i] = i;
		printf("PTR Value: %d\n", ptr[i]);
	}

	// The memory is given back to the system
	free(ptr);
	ptr = NULL;
	printf("%p\n", ptr);

	int a = 5;
	ptr = &a;
	// Back to being a regular pointer that can only hold 1 address
	printf("A Value: %d\n", *ptr);
}