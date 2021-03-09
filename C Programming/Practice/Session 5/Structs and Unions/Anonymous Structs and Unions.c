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
	
}
