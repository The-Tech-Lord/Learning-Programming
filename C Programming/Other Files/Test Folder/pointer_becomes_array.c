#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr;
	ptr = (int *)malloc(5 * sizeof(int));
	printf("%p", &ptr[4]);
}
