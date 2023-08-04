#include <stdio.h>
#include <stdlib.h>

struct aArray {
	int x;
	int y;
	int z;
} arrayStruct[3];

int main() {
	for (int i = 0; i < 3; i++) {
		arrayStruct[i].x = i + 5;
		arrayStruct[i].y = arrayStruct[i].x - 3;
		arrayStruct[i].z = arrayStruct[i].x + arrayStruct[i].y;
		printf("X Value: %d\tY Value: %d\tZ Value: %d\n", arrayStruct[i].x, arrayStruct[i].y, arrayStruct[i].z);
	}
}