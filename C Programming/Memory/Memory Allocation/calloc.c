#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr;
	ptr = (int *)calloc(5, sizeof(int));
	if(ptr == NULL) {
		printf("Allocation Failed\n");
		exit(0);
	} else {
		for(int i = 0; i < 5; i++) {
			printf("%d ", *(ptr + i));
		}
		printf("\n");
		for(int i = 0; i < 5; i++) {
			*(ptr + i) = i + 1;
			printf("%d ", *(ptr + i));
		}
		printf("\n");
	}
} 