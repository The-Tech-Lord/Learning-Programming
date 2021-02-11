#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr = (int *)malloc(5);
	for(int i = 0; i < 5; i++) {
		printf("%d ", *(ptr + i));
	}

	printf("\n");

	char *ptr2 = (char *)malloc(5);
	for(int i = 0; i < 5; i++) {
		printf("%c ", *(ptr2 + i));
	}

	printf("\n");
}