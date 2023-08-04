#include <stdio.h>
#include <stdlib.h>

struct aStruct {
	int x;
	int y;
	int z;
};

int main() {
	struct aStruct values;
	values.x = 5;
	values.y = 8;
	values.z = 3;

	printf("Bytes: %ld\n", sizeof(values));
	printf("%d\n", values.x); printf("%d\n", values.y); printf("%d\n", values.z);
}