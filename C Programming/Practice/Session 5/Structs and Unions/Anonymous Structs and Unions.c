#include <stdio.h>
#include <stdlib.h>

typedef struct AnonStruct {
	int a;
	int b;
	struct {
		int c;
		int d;
		double e;
	};
} AnonStruct;

typedef union AnonUnion {
	int a;
	int b;
	union {
		int c;
		int d;
		double e;
	};
} AnonUnion;

int main() {
	AnonStruct AnonStruct;
	AnonUnion AnonUnion;
	
	AnonStruct.a = 5;
	AnonStruct.b = 6;
	AnonStruct.c = 7;
	AnonStruct.d = 69;
	AnonStruct.e = 420.69;
	printf("%d %d %d %d %.2f\n", AnonStruct.a, AnonStruct.b, AnonStruct.c, AnonStruct.d, AnonStruct.e);	

	AnonUnion.a = 123456;
	printf("%d ", AnonUnion.a);
	AnonUnion.b = 234567;
	printf("%d ", AnonUnion.b);
	AnonUnion.c = 344567;
	printf("%d ", AnonUnion.c);
	AnonUnion.d = 345678;
	printf("%d ", AnonUnion.d);
	AnonUnion.e = 234567.23423423;
	printf("%f\n", AnonUnion.e);
}
