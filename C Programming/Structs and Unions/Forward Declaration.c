#include <stdio.h>
#include <stdlib.h>

struct y Another; // You can do this without declaration a struct variable
				  // and declare it later in the code
struct x {
	int a;
	struct y *p;
};
struct y {
	int b;
	struct x *q;
};

int main() {
	struct x Something;
	Something.p = &Another;

	Something.p->b = 5;
	printf("%d\n", Something.p->b);
}