#include <stdio.h>
#include <stdlib.h>

struct nested_struct {
	int number;
	int anothernumber; // I'm not going to do stuff complex, it will teach you the same stuff
	int thirdnumber;
	struct strict {
		int x;
		int y;
		int z;
	} nested[3];
};

int main() {
	struct nested_struct numbers[3];
	for (int i = 0; i < 3; i++) {
		numbers[i].number = 1 + i;
		numbers[i].anothernumber = 2 + i;
		numbers[i].thirdnumber = 4 + i;
	}
	for (int k = 0; k < 3; k++) {
		numbers[k].nested[k].x = k + 10;
		numbers[k].nested[k].y = k + 12;
		numbers[k].nested[k].z = k + 13;
	}
	for (int j = 0; j < 3; j++) {
		printf("Struct Values [Index %d]: %d\n", j, numbers[j].number);
		printf("Struct Values [Index %d]: %d\n", j, numbers[j].anothernumber);
		printf("Struct Values [Index %d]: %d\n", j, numbers[j].thirdnumber);

		printf("Nested Struct Values [Index %d]: %d\n", j, numbers[j].nested[j].x);
		printf("Nested Struct Values [Index %d]: %d\n", j, numbers[j].nested[j].y);
		printf("Nested Struct Values [Index %d]: %d\n\n", j, numbers[j].nested[j].z);
	}
}