#include <stdio.h>
#include <stdlib.h>

int main() {
	int x = 5, y = 3, z = 7, u = 9, t = 12;
	int *ARRAYPTR[] = { &x, &y, &z, &u, &t };

	for(int i = 0; i < 5; i++) {
		printf("%d\n", *ARRAYPTR[i]);
	}
}