#include <stdio.h>
#include <stdlib.h>

#define FIRST_FLAG 0b1
#define SECOND_FLAG 0b10
#define THIRD_FLAG 0b10000000

int main() {
	unsigned int flags = FIRST_FLAG | SECOND_FLAG | THIRD_FLAG;
	// 00000001
	// 00000010
	// 10000000
	//
	// 10000011

	if (flags & FIRST_FLAG) {
		printf("1st\n"); // 0b1
	}
	if (flags & SECOND_FLAG) {
		printf("2nd\n"); // 0b10
	}
	if (flags & THIRD_FLAG) {
		printf("3rd\n"); // 0b10000000
	}
}
