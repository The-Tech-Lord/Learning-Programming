#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double a;
    double b;
} Fuck;

Fuck Midpoint(const Fuck *coord1, const Fuck *coord2) {
    Fuck result;
    result.a = (coord1->a + coord2->a) / 2;
	result.b = (coord2->b + coord2->b) / 2;
	return result;
}

int main() {
    Fuck m1 = {
		.a = 5,
		.b = 6
    };
    Fuck m2 = {
		.a = 8,
		.b = 10
    };
    Fuck mid = Midpoint(&m1, &m2);
    printf("%.1lf %.1lf\n", mid.a, mid.b);
}
