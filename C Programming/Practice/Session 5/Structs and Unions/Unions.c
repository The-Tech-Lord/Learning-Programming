#include <stdio.h>
#include <stdlib.h>

union AUnion {
	int a;
	float b;
} AUnion;

int main() {
	AUnion.a = 5;
	printf("A: %d %lu\n", AUnion.a, sizeof(union AUnion));
	AUnion.b = 42435.2435235;
	printf("B: %lf %lu\n", AUnion.b, sizeof(union AUnion));
}
