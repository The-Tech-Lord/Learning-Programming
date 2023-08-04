#include <stdio.h>
#include <stdlib.h>

enum Redeclare {
	x = 0,
	y = 5,
	z = 4
};
enum AnotherEnum {
	x = 0,
	t = 7,
	v = 4
};

int main() {
	// You cannot redeclare enums and therefore will produce an error
	printf("%d %d %d %d %d\n", x, y, z, t, v);
}