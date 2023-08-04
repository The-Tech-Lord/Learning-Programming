#include <stdio.h>
#include <stdlib.h>

enum Enums {
	RED,
	BLUE,
	GREEN
};

int main() {
	enum Enums value;
	value = BLUE;
	printf("%d\n", value);
}
