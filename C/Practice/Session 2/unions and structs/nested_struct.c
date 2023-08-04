#include <stdio.h>
#include <stdlib.h>

struct StructComplex {
	int x;
	int y;
	int z;

	struct NestedStruct {
		float four;
		float five;
		float six;
	} nestStruct;

	struct NestedStruct2 {
		int h;
		int j;
		int z;
	} nestStruct2;
};

int main() {
	struct StructComplex complex;
	complex.x = 5;
	complex.nestStruct.four = 4.5;
	complex.nestStruct2.h = 6;

	printf("%d\n", complex.x); printf("%f\n", complex.nestStruct.four); printf("%d\n", complex.nestStruct2.h);
}