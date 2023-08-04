#include <stdio.h>
#include <stdlib.h>

union AnonUnion {
	int a;
	union {
		float b;
		int c;
	};
	union {
		double d;
		float e;
	};
	int IHaveNoFuckingClue;
} AnonUnion;

int main() {
	AnonUnion.a = 5;
	printf("A: %d\n", AnonUnion.a);
	AnonUnion.IHaveNoFuckingClue = 6;
	printf("IHaveNoFuckingClue: %d\n", AnonUnion.IHaveNoFuckingClue);

	AnonUnion.b = 3.34;
	printf("B: %lf\n", AnonUnion.b);
	AnonUnion.c = 5;
	printf("C: %d\n", AnonUnion.c);

	AnonUnion.d = 4.23847239;
	printf("D: %lf\n", AnonUnion.d);
	AnonUnion.e = 5.23423243;
	printf("E: %lf\n", AnonUnion.e);
}