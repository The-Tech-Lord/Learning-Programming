#include <stdio.h>
#include <stdlib.h>

struct PTR_TEST {
	int x;
	int y;
	int z;
};

int main() {
	struct PTR_TEST *STRUCT_PTR;
	struct PTR_TEST Coord;

	STRUCT_PTR = &Coord;
	STRUCT_PTR->x = 5;
	STRUCT_PTR->y = 8;
	STRUCT_PTR->z = 4;

	printf("X: %d Y: %d Z: %d", STRUCT_PTR->x, STRUCT_PTR->y, STRUCT_PTR->z);
}
