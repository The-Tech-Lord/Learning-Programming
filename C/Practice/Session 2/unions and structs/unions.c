#include <stdio.h>
#include <stdlib.h>

union aComplexUnion {
	// 20 bytes
	struct UnionStruct {
		int x;
		int y;
		int z;
		float index;
		float poke;
	} UnionStruct;

	// 40 bytes
	struct UnionStruct2 {
		int u;
		int i;
		int p;
		float something;
		double alsosomething;
		char name[16];
	} UnionStruct2;
};

int main() {
	union aComplexUnion complex;
	printf("Bytes: %ld\n", sizeof(complex.UnionStruct2));
}