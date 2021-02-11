#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cross {
	union TF {
		int IO;
		float ISO;
		union {
			int a;
			int b;
			float c;
		};
	} TF;
	char *KEY;
} Cross;

int main() {
	Cross.TF.IO = 0x6474;
	printf("%d\n", Cross.TF.IO);
	Cross.TF.ISO = 4.563;
	printf("%f\n", Cross.TF.ISO);
	Cross.TF.a = 5;
	printf("%d\n", Cross.TF.a);
	Cross.TF.b = 6;
	printf("%d\n", Cross.TF.b);
	Cross.TF.c = 6.723;
	printf("%f\n", Cross.TF.c);

	Cross.KEY = (char *)malloc(sizeof(char) * 10);
	if (Cross.KEY == NULL) exit(1);
	strcpy(Cross.KEY, "1540392657");
	printf("%s\n", Cross.KEY);
}