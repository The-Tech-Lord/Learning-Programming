#include <stdio.h>
#include <stdlib.h>

struct someStruct {
	int x;
	int y;
	int z;
};

int main() {
	struct someStruct ster, *structPTR;
	structPTR = &ster;

	structPTR->x = 5;
	structPTR->y = 6;
	structPTR->z = 7;

	printf("%d %d %d\n", ster.x, ster.y, ster.z);
}