#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[] = { 1, 2, 3, 4 , 5 };
	int *p = array;

	printf("%d\n", *(p + 0));
}